//
//  main.cpp
//  LL
//
//  Created by freude on 5/31/16.
//  Copyright © 2016 freude. All rights reserved.
//
//  Linked List if integers
//

#include <iostream>


class Node{
public:
    Node(){next=0;};
    Node(int info, Node* next=0) : next(next), info(info) {};
    int info;
    Node* next=0;
};

class LList{

public:
    LList(){};
    ~LList(){};
    void AddToHead(int a);
    void AddToTail(int a);
    int RemoveFromHead(void);
    int RemoveFromTail(void);
    int RemoveItem(int a);
    bool IsInList(int a);
    
    Node* head, tail;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


