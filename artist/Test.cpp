//
//  Test.cpp
//  artist
//
//  Created by 陈桐 on 2020/3/23.
//  Copyright © 2020 chentong. All rights reserved.
//

#include <stdio.h>
#include "MyVector/MyVector.hpp"
#include "MyUtil.hpp"
#include "BinaryFind.hpp"
#include "MoveZero.hpp"
#include "SortColor.hpp"

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

auto binarySearchCallBack = [](int num){
    int *data = MyUtil().generateOrderedArray(num);
    for(int i = 0;i<num;i++){
        assert(i == binarySearch(data, num, i));
    }
};


auto moveZeroCallBack = [](int num){
    int *arr = MyUtil().generateRandomArray(num, 0, num);
    vector<int> vec(arr,arr+num);
    MoveZero().moveZeroesSwap(vec);
};

auto moveZeroCallBackPrint = [](int num){
    int arr[] = {0,1,0,3,12,0,4,0,6,9,4,7,9,0};
    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
    MoveZero().moveZeroesSwap(vec);

    for(int i= 0 ;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
};

//三路快排
auto sortColorCallBack =[](int num){
    int * arr = MyUtil().generateRandomArray(num, 0, 2);
    vector<int> vec(arr,arr+num);
    SortColor().sortColor(vec);
};
