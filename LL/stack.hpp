//
//  stack.hpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>

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


#endif /* stack_hpp */
