//
// Created by yazhoudeng on 2023/5/8.
//

#ifndef CLION_CPP_BASE_TESTPTHREAD_MUTEX_H
#define CLION_CPP_BASE_TESTPTHREAD_MUTEX_H

#include <iostream>
#include <thread>

using namespace std;


class TestPthread_mutex {

public:
    static void TestMain();

private:
    bool start();
    static void ThreadCallBackStatic();
    void ThreadCallBack();
    thread *m_pThread;
    void start3();
    void PthreadMutexCallBack();





};


#endif //CLION_CPP_BASE_TESTPTHREAD_MUTEX_H
