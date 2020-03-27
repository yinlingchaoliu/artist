//
//  SwapNode.hpp
//  artist
//
//  Created by 陈桐 on 2020/3/26.
//  Copyright © 2020 chentong. All rights reserved.
//

#ifndef SwapNode_hpp
#define SwapNode_hpp

#include <stdio.h>
#include "LinkNode.hpp"

class SwapNode{
    
public:
    //虚节点穿针引线
    ListNode * swapNode(ListNode * head){
        ListNode * dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode * p = dummyHead;
        while(p->next && p->next->next){
            ListNode * node1 = p->next;
            ListNode * node2 = node1->next;
            ListNode * next = node2->next;
            
            //交互
            node2->next = node1;
            node1->next = next;
            p->next = node2;
            
            p = node1;
        }
        
        ListNode * retNode = dummyHead->next;
        delete dummyHead;
        return retNode;
    }
    
};


#endif /* SwapNode_hpp */
