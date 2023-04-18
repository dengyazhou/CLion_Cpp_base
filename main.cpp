#include <iostream>

#include "cppDyz/include/TestOne.h"
#include "cppDyz/include/TestVirtual.h"

using namespace VirtualTestNamespace;

int main() {
    std::cout << "Hello, World!" << std::endl;

//    TestOne::testOneTestFunction();

    // 5、virtual 虚函数
//    在 C++ 中，`virtual` 是一个关键字，用于声明虚函数。虚函数是一种特殊的成员函数，可以在派生类中重写并实现不同的行为，从而实现基类多态性。
//    在 C++ 中，如果一个成员函数被声明为虚函数，那么每个派生类都可以重写该函数，并且在运行时会调用它自己的实现。这样一来，可以在基类中定义通用的行为，而在派生类中实现特定的行为，从而实现基类多态性。
//    虚函数 在基类中必须 实现，如下，不能只声明 如 "virtual void DoTask();"
//    TestVirtual* company = new TestVirtual();// 由于TestVirtual是虚类，所不能"new TestVirtual();"

//    TestVirtual* company;
//    TestVirtualIME ime = TestVirtualIME();
//    TestVirtualXM xm = TestVirtualXM();
//    TestVirtualSS ss = TestVirtualSS();
////    company = &ime;
////    company = &xm;
//    company = &ss;
//    company->DoTask();

    // 4、std::nothrow
//    在 C++ 中，`std::nothrow` 是一个特殊的标志符号，用于在内存分配操作中禁用抛出异常的行为。
//    在 C++ 中，如果使用 `new` 运算符请求分配内存时，如果内存不足或者其他原因导致分配失败，通常会抛出一个标准异常 `std::bad_alloc`。这个异常可能会导致程序崩溃或者无法正常执行。
//    但是如果在内存分配操作中使用 `std::nothrow` 标志符号，就可以不抛出异常，而是直接返回一个空指针表示分配失败。这样可以避免程序崩溃，同时也可以更好地控制程序的错误处理行为。
//    在上述代码中，`new` 运算符的参数中使用了 `std::nothrow` 标志符号，表示禁用异常的行为。如果分配内存失败，`new` 运算符会直接返回一个空指针，程序可以通过判断指针是否为空来处理内存分配失败的情况。
//    需要注意的是，使用 `std::nothrow` 标志符号进行内存分配可能会导致程序的可移植性降低。因为这个标志符号并不是 C++ 标准的一部分，所以不是所有的编译器都支持它。如果你的程序需要在多个编译器之间移植，最好不要过度依赖这个标志符号。
//    int* p = new (std::nothrow) int[10];
//    if (p == nullptr) {
//        std::cout << "Out of memory" << std::endl;
//    }

    // 3、":" 运算符
//    TestOne testOne = TestOne("dengyazhou",23);
//    testOne.testPrint();

//    TestOne* testOne1 = new TestOne("yazhou", 24);
//    testOne1->testPrint();

    // 2、"."运算符 和 "->"运算符
//    "."运算符只能用于访问对象的成员，而不能用于指针或引用类型。
//    "->"运算符用于通过指针或引用访问对象的成员。

    // 1、"*"符号 和 "&"符号
//    1.1、"*"符号用于定义指针和解引用指针。
//    int x = 1;
//    int* ptr = &x;// 定义一个指向x的指针
//    printf("ptr = %p\n",ptr);
//    printf("*ptr = %d\n", *ptr);
//    *ptr = 2;// 解引用指针修改x的值
//    printf("ptr = %p\n",ptr);
//    printf("*ptr = %d\n", *ptr);
//    在上面的例子中，`int*`表示定义一个指向int类型的指针，`&x`表示取x的地址，`*ptr`表示解引用ptr指针，即访问它所指向的变量。

//    1.2、"&"符号用于定义引用和取地址。
//    int  x = 1;
//    int& ref = x;// 定义一个对x的引用
//    ref = 2;// 修改x的值
//    printf("x = %d\n",x);
//    printf("ref = %d\n",ref);
//    int y = x;
//    printf("y = %d\n",y);
//    y = 3;
//    printf("x = %d\n",x);
//    printf("y = %d\n",y);
//    在上面的例子中，`int&`表示定义一个对int类型变量的引用，`ref`表示引用x的别名，`&x`表示取变量x的地址。
//    TestOne::testString();
//    TestOne::testTestOne();

    std::cout << "程序结束!" << std::endl;

    return 0;
}


