//
//  SortColor.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/24.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef SortColor_hpp
#define SortColor_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class SortColor{
public:
    
    //3路快排
    void sortColor(vector<int> & nums){
        int size = (int)nums.size();
        
        int zero = -1; // nums[0...zero] == 0
        int two = nums.size(); //nums[two...n-1] == 2
        for(int i= 0;i<two;){
            if(nums[i] == 1){
                i++;
            }else if(nums[i] == 2){
                swap(nums[i], nums[--two]);
            }else{ //nums[i] == 0
                assert(nums[i]==0);
                zero++;
                swap(nums[zero], nums[i]);
                i++;
            }
        }
    }
};






#endif /* SortColor_hpp */
