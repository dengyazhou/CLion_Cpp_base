//
// Created by yazhoudeng on 2023/4/18.
//

#ifndef CLION_CPP_BASE_TESTVIRTUAL_H
#define CLION_CPP_BASE_TESTVIRTUAL_H

namespace VirtualTestNamespace {

    class TestVirtual {
    public:
        virtual void DoTask() = 0;//方式一
//        virtual void DoTask() {};//方式二
//        virtual void DoTask(); //错误，NOTE: a missing vtable usually means the first non-inline virtual member function has no definition.
    };

    class TestVirtualIME : public TestVirtual {
        void DoTask() override;
    };

    class TestVirtualXM : public TestVirtual {
        void DoTask() override;
    };

    class TestVirtualSS : public TestVirtual {
        void DoTask() override;
    };


} // VirtualTestNamespace

#endif //CLION_CPP_BASE_TESTVIRTUAL_H
