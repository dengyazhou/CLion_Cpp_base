//
// Created by yazhoudeng on 2023/4/19.
//

#ifndef CLION_CPP_BASE_TESTMUTEX_H
#define CLION_CPP_BASE_TESTMUTEX_H

#include <iostream>
#include <thread>

using namespace std;

namespace MutexTestNamespace {

    class TestMutex {

    public:
        static void TestMain();
        static void ThreadCallBackStatic();

        bool Start();
        void ThreadCallBack();

    private:
        thread *m_pThread;

    };

} // MutexTestNamespace

#endif //CLION_CPP_BASE_TESTMUTEX_H
