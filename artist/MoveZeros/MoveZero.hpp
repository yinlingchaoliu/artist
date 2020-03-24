//
//  MoveZero.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/24.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef MoveZero_hpp
#define MoveZero_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;


/**
 leecode
 给定一个数组nums ,写一个函数，将数组中所有的零挪到数组的尾端，而维持其他所有非0元素相对位置
 举例： nums=[0,1,0,3,12] ,函数运行结果为[1,3,12,0,0]
 */
class MoveZero{

public:
    
    //O(n)
    void moveZeroes(vector<int>& nums){
        int size = nums.size();
        int zeroCount = 0;
        for(int i =0 ; i< size; i++){
            
            if (nums[i] == 0) {
                zeroCount ++ ;
            }
            
            if(nums[i] != 0){
                nums[i-zeroCount] = nums[i];
            }
        }
        
        for(int i = 0 ; i< zeroCount ; i++){
            nums[size-zeroCount+i] = 0;
        }
        
    }
    
    //一次遍历 O(n)
    void moveZeroesSwap(vector<int>& nums){
        int size = nums.size();
        int zeroCount = 0;
        for(int i =0 ; i< size; i++){
            
            if (nums[i] == 0) {
                zeroCount ++ ;
            }
            
            if(nums[i] != 0){
                nums[i-zeroCount] = nums[i];
                if(zeroCount!=0){
                    nums[i]=0;
                }
            }
        }
    }
    
};
#endif /* MoveZero_hpp */
