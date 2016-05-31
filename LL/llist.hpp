//
//  llist.hpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#ifndef llist_hpp
#define llist_hpp

#include <stdio.h>


class Node{
public:
    Node(){next=0;};
    Node(int info, Node* next=0) : next(next), info(info) {};
    int info;
    Node* next=0;
};

class LList{
    
public:
    LList(){head =0; tail=0;};
    ~LList(){
        for (Node *p; !IsEmpty();){
            p = head->next;
            delete head;
            head = p;
        }
    };
    
    void AddToHead(int a);
    void AddToTail(int a);
    int RemoveFromHead(void);
    int RemoveFromTail(void);
    int RemoveItem(int a);
    bool IsInList(int a);
    bool IsEmpty(void);
    
    Node *head, *tail;
};

#endif /* llist_hpp */
