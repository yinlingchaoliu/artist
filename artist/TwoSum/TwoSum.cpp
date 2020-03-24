//
//  TwoSum.cpp
//  artist
//
//  Created by 陈桐 on 2020/3/24.
//  Copyright © 2020 chentong. All rights reserved.
//

#include "TwoSum.hpp"
#include <vector>

using namespace std;

class TwoSum{
public:
    
    //O(n) 对撞指针
    vector<int> twoSum(vector<int> & nums , int target){
        int l = 0;
        int r = nums.size() -1;
        while(l<r){
            if (nums[l]+nums[r]==target) {
                int res[2]={l+1,r+1};
                return vector<int>(res,res+2);
            }else if (nums[l]+nums[r] < target){
                l++;
            }else{
                r--;
            }
        }
        throw invalid_argument("this input has no solution");
    }
    
    
};
