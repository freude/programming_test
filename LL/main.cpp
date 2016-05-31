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
#include "data_structures.hpp"



int main(int argc, const char * argv[]) {
    // insert code here...
    
    LList a;
    
    std::cout << a.IsEmpty() << std::endl;
    a.AddToHead(10);
    std::cout << a.IsEmpty()  << std::endl;
    
    return 0;
}


