//
// Created by yazhoudeng on 2023/3/31.
//

#include <iostream>

#ifndef CLION_CPP_BASE_TESTONE_H
#define CLION_CPP_BASE_TESTONE_H


class TestOne {

public:
    static void testOneTestFunction();// 类名才可以调用 static方法
    static void testString();
    static void testTestOne();

    void testPrint();

    TestOne();// 默认构造函数
    TestOne(std::string parameter1, int parameter2):name(parameter1),age(parameter2) {

    };// 构造函数1
    TestOne(std::string parameter); // 构造函数2

    std::string name;
private:
    int age;

};


#endif //CLION_CPP_BASE_TESTONE_H
