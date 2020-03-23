//
//  Test.cpp
//  artist
//
//  Created by 陈桐 on 2020/3/23.
//  Copyright © 2020 chentong. All rights reserved.
//

#include <stdio.h>
#include "MyVector/MyVector.hpp"

/**
    所有测试回调写在这个地方
    保证主测试类没有其他代码干扰
 */

//vector动态数组
auto verctorCallback = [](int num){
    MyVector<int> vec =  MyVector<int>();//存放在堆上
    
    for (int i=0; i<num; i++) {
        vec.push(i);
    }
    
    for (int i=0; i<num; i++) {
        vec.pop();
    }
};
