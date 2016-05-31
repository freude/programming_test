//
//  stack.cpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#include "stack.hpp"
#include <iostream>

void Stack::push(float el){
    size++;
    pool[size-1] = el;
}

float Stack::pull(void){
    size--;
    return pool[size];
}

bool Stack::isEmpty(void){
    if (size == 0){
        return true;
    }
    else{
        return false;
    }
}

void Stack::show_elements(void){
    
    for (int j=0;j<size;j++){
        std::cout << pool[j] << std::endl;
    }
    
}

