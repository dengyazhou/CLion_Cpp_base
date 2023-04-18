//
// Created by yazhoudeng on 2023/4/18.
//

#include "../include/TestVirtual.h"
#include <iostream>

namespace VirtualTestNamespace {

    using namespace std;

    void TestVirtualIME::DoTask() {
        cout << "TestVirtualIME::DoTask 执行" << endl;
    }

    void TestVirtualXM::DoTask() {
        cout << "TestVirtualXM::DoTask 执行" << endl;
    }

    void TestVirtualSS::DoTask() {
        cout << "TestVirtualSS::DoTask 执行" << endl;
    }


} // VirtualTestNamespace