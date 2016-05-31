//
//  data_structures.hpp
//  LL
//
//  Created by freude on 5/31/16.
//  Copyright © 2016 freude. All rights reserved.
//

#ifndef data_structures_hpp
#define data_structures_hpp

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

class Stack{
    float *pool;
public:
    Stack(){
        size=0;
        pool=new float[1000];
    };
    ~Stack(){
        delete pool;
    };
    void push(float element);
    float pull(void);
    bool isEmpty(void);    
    int size;
    void show_elements(void);
};

#endif /* data_structures_hpp */
