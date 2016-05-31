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
#include "stack.hpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    
    Stack a;
    
    std::cout << a.isEmpty() << std::endl;
    a.push(10);
    a.push(0);
    a.push(3);
    a.push(7);
    a.push(9);
    a.show_elements();
    
    Stack b;
    
    /*
    
    Stack b, c;
    float d, sisi;
    
    sisi=a.size;
    
    for (int j=0; j<sisi; j++){
        d = a.pull();
        std::cout << d;
        b.push(d);
    };
    
    for (int j=0; j<sisi; j++){
        d = b.pull();
        c.push(d);
    };
    */
    
    float c, d, sisi;
    
    int s=a.size;
    
    for (int j=0; j<s; j++){
        sisi=a.size-1;
        for (int j1=0; j1<sisi; j1++){
            c = a.pull();
            b.push(c);
        };
        d = a.pull();
        for (int j1=0; j1<sisi; j1++){
            c = b.pull();
            a.push(c);
        };
        b.push(d);
    };
    
    b.show_elements();
    
    return 0;
}


