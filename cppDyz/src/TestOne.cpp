//
// Created by yazhoudeng on 2023/3/31.
//

#include "../include/TestOne.h"


void TestOne::testOneTestFunction() {
    printf("第一个函数调用了\n");
}

void testStr(std::string str) {
    str = "bcd";
}

void testStr1(std::string &str) {
    str = "bcd";
}

void TestOne::testString() {
    std::cout << "TestOne::testString 被执行" << std::endl;

    std::string str = "abc";
//    std::string & str1 = str; // "&"符号用于定义引用
    std::string str1 = str;
    str1 = "bcd";
    printf("str = %s",str.c_str());

//    std::string str = "abc";
////    testStr(str);
//    testStr1(str);
//    printf("str = %s\n",str.c_str());
}

void testTestO(TestOne obj){
    obj.name;
    std::cout << obj.name << std::endl;
};

void testTestO1(TestOne &obj) {
    obj.name;
}

void testTestO2(TestOne *obj) {
    obj->name;
}

void testTestO3(TestOne *&obj) {
    obj->name;
}

TestOne::TestOne() {

}

void TestOne::testTestOne() {
    std::cout << "TestOne::testTestOne 被执行了" << std::endl;
//    TestOne obj = TestOne();
    TestOne obj = TestOne("小明", 23);
    testTestO(obj);
//
//    TestOne obj1 = TestOne();
//    testTestO1(obj1);
//
//    TestOne *obj2 = new TestOne();
//    testTestO2(obj2);
//
//    TestOne *obj3 = new TestOne();
//    testTestO3(obj3);
}




void TestOne::testPrint() {
    std::cout << "TestOne::testPrint() 被执行" << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "age: " << age << std::endl;
}
