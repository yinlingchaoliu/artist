//
//  SlidingWindow.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/24.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef SlidingWindow_hpp
#define SlidingWindow_hpp

#include <stdio.h>
#include <vector>

using namespace std;

class SlidingWindow{
public:
    
    /**
            滑动窗口
            前闭后闭
     时间复杂度O(n)
     空间复杂度O(1)
     算法还是要图形式理解
     */
    int minSubArrayLen(int s, vector<int> & nums){
        int l=0, r=-1;// nums[l...r]为我们滑动窗口
        int sum = 0;
        int size = nums.size();
        int res = size + 1; //设置一个不可能取到值
        
        while(l < size){
            if(sum < s && r+1 < size){
                sum +=nums[++r];
            }else{
                sum -= nums[l++];
            }
            if(sum>=s)
                res = min(res,r-l+1);
        }
        
        //没有解
        if(res == size + 1)
            return 0;
        
        return res;
    }
};

#endif /* SlidingWindow_hpp */
