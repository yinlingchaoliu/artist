//
//  main.cpp
//  artist
//
//  Created by 陈桐 on 2020/3/23.
//  Copyright © 2020 chentong. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <ctime>
#include "Test.cpp"

/**
 c++代码也需要回调，代理来保证测试程序的通用性
 本例采用lambda方式写更简单一些
 */

//计时器
void timeFun(void (*pfun)(int n), int n);

/**
    主main函数要以代理方式，保证演示demo的可扩展性
 */
int main(int argc, const char * argv[]) {
    
    //数量级测试 2048 ~ 134217728
    for (int i =10; i<=12; i++) {
        int n = pow(2,i);
        //测试vector数组
//        timeFun(verctorCallback, n);
        
        //测试二分查找
//        timeFun(binarySearchCallBack, n);
        
        //moveZero
//        timeFun(moveZeroCallBack, n);
//        timeFun(moveZeroCallBackPrint, n);
        
        //3路快速排序
        timeFun(sortColorCallBack, n);
    }
    return 0;
}

//计时器
void timeFun(void (*pfun)(int n), int n){
    clock_t startTime = clock();
    (*pfun)(n);
    clock_t endTime= clock();
    std::cout << 2*n << "\t opertions: \t ";
    std::cout << double(endTime - startTime)/CLOCKS_PER_SEC << " s\n" ;
};

