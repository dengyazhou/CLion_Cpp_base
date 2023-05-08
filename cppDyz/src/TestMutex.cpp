//
// Created by yazhoudeng on 2023/4/19.
//

#include "../include/TestMutex.h"

static thread *pThreaddyz;

static mutex m_lock;

namespace MutexTestNamespace {


    void TestMutex::TestMain() {
        __thread_id threadId = this_thread::get_id();
        cout << "TestMutex::testMain 执行1 === " << threadId << endl;

        // 1
//        TestMutex obj = TestMutex();
//        obj.Start();
//        obj.m_pThread->join();// 等待线程执行完毕

        // 2
//        thread *pThread = new (nothrow) thread(&TestMutex::ThreadCallBackStatic);//static 方法中，只能传入static的方法地址
//        pThreaddyz = new (nothrow) thread(&TestMutex::ThreadCallBackStatic);

        // 3
        for (int i = 0; i < 4; i++) {
            new (nothrow) thread(&TestMutex::ThreadCallBackStatic);
        }

        cout << "TestMutex::testMain 执行2 === " << threadId << endl;
    }

    void TestMutex::ThreadCallBackStatic() {
        // 1、
//        m_lock.lock();//类似 iOS 的 dispatch_semaphore_wait，两个lock()会卡住当前线程。
//        // 可以对比 加lock和没加lock，下面的打印日志，没加lock打印都乱了，加了lock是正常打印。所以说多条线程访问同一块代码，一定要加锁。
//        // 没加lock打印都乱了，是因为cout和endl是线程不安全的。
//
//        __thread_id threadId = this_thread::get_id();
//        cout << "多线程回调 ThreadCallBackStatic 被执行了 0" << " === " << threadId << endl;
//        for (int i = 0; i < 3; ++i) {
//            cout << "ThreadCallBackStatic for ==>> " << i << " === " << threadId << endl;
//        }
//        cout << "多线程回调 ThreadCallBackStatic 被执行了 1" << " === " << threadId << endl;
//
//        m_lock.unlock();

        // 2、
        // cout和endl是线程不安全的。
        // 只需要在修改全局变量的时候加锁
        __thread_id threadId = this_thread::get_id();
        m_lock.lock();
        cout << "多线程回调 ThreadCallBackStatic 被执行了 0" << " === " << threadId << endl;
        m_lock.unlock();
        for (int i = 0; i < 3; ++i) {
            m_lock.lock();
            cout << "ThreadCallBackStatic for ==>> " << i << " === " << threadId << endl;
            m_lock.unlock();
        }
        m_lock.lock();
        cout << "多线程回调 ThreadCallBackStatic 被执行了 1" << " === " << threadId << endl;
        m_lock.unlock();

    }

    bool TestMutex::Start() {
        m_pThread = new (nothrow) thread(&TestMutex::ThreadCallBack, this);
        return (m_pThread != NULL);
    }

    void TestMutex::ThreadCallBack() {
        __thread_id threadId = this_thread::get_id();
        cout << "多线程回调 ThreadCallBack 被执行了 begin >>>> " << threadId << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        cout << "多线程回调 ThreadCallBack 被执行了 end >>>> " << threadId << endl;
    }

} // MutexTestNamespace