//
//  ReverseLinkedList.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/26.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef ReverseLinkedList_hpp
#define ReverseLinkedList_hpp

#include <stdio.h>
#include "LinkNode.hpp"

class Reverse{
    
public:
    //字符串翻转
    ListNode * reverseList(ListNode *head){
        ListNode * pre =NULL;
        ListNode * cur = head;
        
        while(cur != NULL){
            ListNode *  next = cur->next;
            cur->next = pre;
            
            //相当于i++
            pre = cur;
            cur = next;
        }
        
        return pre;
    }
};






#endif /* ReverseLinkedList_hpp */
