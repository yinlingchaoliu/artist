//
//  BinaryFind.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/24.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef BinaryFind_hpp
#define BinaryFind_hpp

#include <stdio.h>
#include "BinaryFind.cpp"

template<typename T>
//闭区间写程序更简单一些
int binarySearch(T arr[], int n, T target){
    int left =  0;  //设置初值 左边界 右边界
    int right = n-1; //在[left...right]范围内寻找target
    
    while (left <= right) {
//        int mid = (left +right)/2;
        //加法存在整型溢出
        int mid = left + (right-left)/2;
        
        if (arr[mid] == target) {
            return mid;
        }
        
        if (target > arr[mid]) {
            left = mid + 1;
        }
        
        if (target < arr[mid]) {
            right = mid - 1;
        }
    }
    
    return -1;
}

#endif /* BinaryFind_hpp */
