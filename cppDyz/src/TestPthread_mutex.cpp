//
// Created by yazhoudeng on 2023/5/8.
//

#include "../include/TestPthread_mutex.h"

// 互斥锁
// 3.1 互斥锁 PTHREAD_MUTEX_INITIALIZER
//static pthread_mutex_t p_mutex = PTHREAD_MUTEX_INITIALIZER;
// 3.2 互斥锁 PTHREAD_MUTEX_INITIALIZER
static pthread_mutex_t p_mutex;
// 3.3 互斥锁 递归锁
//static pthread_mutex_t p_mutex;

// 直接赋值为PTHREAD_MUTEX_INITIALIZER，或者pthread_mutex_init(&p_mutex,NULL)，效果是一样的，必须要来一样。
pthread_mutex_t obj_mutex = PTHREAD_MUTEX_INITIALIZER;

void TestPthread_mutex::TestMain() {
    __thread_id threadId = this_thread::get_id();
    cout << "TestPthread_mutex::TestMain 开始执行 === " << threadId << endl;

    // 1
//    TestPthread_mutex obj = TestPthread_mutex();
//    obj.start();
//    obj.m_pThread->join();// 等待线程执行完毕

    // 2
//    thread *pThread = new (nothrow) thread(&TestPthread_mutex::ThreadCallBackStatic);//static 方法中，只能传入static的方法地址

    // 3.1 互斥锁 PTHREAD_MUTEX_INITIALIZER
//    for (int i = 0; i < 10; i++) {
//        new (nothrow) thread(&TestPthread_mutex::ThreadCallBackStatic);
//    }

    // 3.2 互斥锁 PTHREAD_MUTEX_INITIALIZER
//    pthread_mutex_init(&p_mutex, NULL);
//    for (int i = 0; i < 10; i++) {
//        new (nothrow) thread(&TestPthread_mutex::ThreadCallBackStatic);
//    }

    // 3.3 互斥锁 递归锁
    // 创建一个 pthread_mutexattr_t 结构体
//    pthread_mutexattr_t mutex_attr;
//    pthread_mutexattr_init(&mutex_attr);
//
//    // 设置互斥锁为递归锁
//    pthread_mutexattr_settype(&mutex_attr, PTHREAD_MUTEX_RECURSIVE);
//
//    //  创建一个互斥锁并使用设置好的属性
//    pthread_mutex_init(&p_mutex, &mutex_attr);
//
//    for (int i = 0; i < 10; i++) {
//        new (nothrow) thread(&TestPthread_mutex::ThreadCallBackStatic);
//    }

    // 4
    TestPthread_mutex obj = TestPthread_mutex();
    obj.start3();

    cout << "TestPthread_mutex::TestMain 结束执行 === " << threadId << endl;
}

void TestPthread_mutex::ThreadCallBackStatic() {
    pthread_mutex_lock(&p_mutex);

    __thread_id threadId = this_thread::get_id();
    cout << "多线程回调 ThreadCallBackStatic 被执行了 0" << " === " << threadId << endl;
    for (int i = 0; i < 4; ++i) {
        cout << "ThreadCallBackStatic for ==>> " << i << " === " << threadId << endl;
    }
    cout << "多线程回调 ThreadCallBackStatic 被执行了 1" << " === " << threadId << endl;

    pthread_mutex_unlock(&p_mutex);
}

bool TestPthread_mutex::start() {

    m_pThread = new (nothrow) thread(&TestPthread_mutex::ThreadCallBack, this);
    return (m_pThread != NULL);

}

void TestPthread_mutex::ThreadCallBack() {
    __thread_id threadId = this_thread::get_id();

    cout << "多线程回调 ThreadCallBack 被执行了 begin >>>> " << threadId << endl;
//    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "多线程回调 ThreadCallBack 被执行了 end >>>> " << threadId << endl;

}

void TestPthread_mutex::start3() {

    for (int i = 0; i < 10; ++i) {
        new (nothrow) thread(&TestPthread_mutex::PthreadMutexCallBack, this);
    }

}

void TestPthread_mutex::PthreadMutexCallBack() {
    pthread_mutex_lock(&obj_mutex);

    __thread_id threadId = this_thread::get_id();
    cout << "多线程回调 PthreadMutexCallBack 被执行了 0" << " === " << threadId << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "PthreadMutexCallBack for ==>> " << i << " === " << threadId << endl;
    }
    cout << "多线程回调 PthreadMutexCallBack 被执行了 1" << " === " << threadId << endl;

    pthread_mutex_unlock(&obj_mutex);

}


