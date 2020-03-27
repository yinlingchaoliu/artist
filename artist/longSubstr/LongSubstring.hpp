//
//  LongSubstring.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/25.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef LongSubstring_hpp
#define LongSubstring_hpp

#include <stdio.h>
#include <string>

using namespace std;

//滑动窗口
class LongSubstring{
public:
    //字符串ascii码
    int  lengthOfLongestSubstring(string s){
        int freq[256]={0};
        int l = 0,r =-1;
        int res = 0;
        
        int size = s.size();
        
        //ascii字符 256
        while(l<size){
            
            //如果s字符未被统计  不越界
            if(r+1<size && freq[s[r+1]] == 0){
                r++;
                freq[s[r]] ++;
            }else{
                freq[s[l++]] --;
            }
            res = max(res,r-l+1);
        }
        
        return 0;
    }
};


#endif /* LongSubstring_hpp */
