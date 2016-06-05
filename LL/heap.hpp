//
//  heap.hpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#ifndef heap_hpp
#define heap_hpp

#include <stdio.h>

class Node{
public:
    Node(){};
    Node(int){};
    int info;
    Node *left, *right, *parent;
};

class Heap{
    Heap(){};
    Heap(int* a, int size){make_heap(a, size);};
    int& make_heap(int* a, int size);
    void max_heapify();

};

#endif /* heap_hpp */
