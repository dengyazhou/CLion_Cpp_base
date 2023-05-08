#include <iostream>

#include "cppDyz/include/TestOne.h"
#include "cppDyz/include/TestVirtual.h"
#include "cppDyz/include/TestMutex.h"
#include "cppDyz/include/TestPthread_mutex.h"

using namespace VirtualTestNamespace;
using namespace MutexTestNamespace;

int main() {
    std::cout << "Hello, World 123 !" << std::endl;
    __thread_id threadId = this_thread::get_id();
    cout << "main 执行开始 === " << threadId << endl;

    TestOne::testOneTestFunction();

    // 9、strcmp 和 strlen
    // strcmp: 函数接受两个参数，分别是要比较的两个字符串，返回值是一个整数。如果字符串相等，返回 0；如果第一个字符串小于第二个字符串，返回一个负整数；如果第一个字符串大于第二个字符串，返回一个正整数
    // strlen: 获取字符串长度
//    char str1[] = "Hello";
//    char str2[] = "hello";
//    cout << "str1: " << str1 << " count:" << strlen(str1) << endl;
//    int result = ::strcmp(str1, str2);
//    if (result == 0) {
//        cout << "两个字符串相等" << endl;
//    } else if (result < 0) {
//        cout << "str1 小于 str2" << endl;
//    } else {
//        cout << "str1 大于 str2" << endl;
//    }


    // 8、do while
//    do {
//        cout << "do while 执行啦" << endl;
//    } while (0);

    // 7、pthread_mutex_t
//    TestPthread_mutex::TestMain();
//    this_thread::sleep_for(chrono::milliseconds(10000));//sleep一下是为了程序不退出。否则其他线程没法执行完毕。

    // 6、mutex 和 thread
//    在C++中，Mutex是一种互斥锁机制，用于控制多个线程之间的并发执行，防止同时访问共享资源而导致的数据竞争问题。Mutex通常在多线程编程中用于实现线程同步，保证线程之间的协调和安全性。
//    下面是使用C++ Mutex进行多线程编程的基本步骤：
//    1. 创建Mutex对象。可以使用std::mutex类创建一个新的Mutex对象。
//    2. 获取Mutex对象。可以使用std::mutex::lock函数获取Mutex对象的锁，如果Mutex已经被其他线程持有，则当前线程会被阻塞，等待Mutex对象的释放。
//    3. 释放Mutex对象。可以使用std::mutex::unlock函数释放Mutex对象的锁，使其他线程可以获取和使用Mutex对象。
//    TestMutex::TestMain();
//    std::this_thread::sleep_for(std::chrono::milliseconds(10000));//sleep一下是为了程序不退出。否则其他线程没法执行完毕。

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

//    TestVirtual* company;
//    TestVirtualIME* ime = new TestVirtualIME();
//    TestVirtualXM* xm = new TestVirtualXM();
//    TestVirtualSS* ss = new TestVirtualSS();
////    company = ime;
////    company = xm;
//    company = ss;
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


    cout << "main 执行结束 === " << threadId << endl;

    return 0;
}


