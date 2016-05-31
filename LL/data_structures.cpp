//
//  data_structures.cpp
//  LL
//
//  Created by freude on 5/31/16.
//  Copyright © 2016 freude. All rights reserved.
//

#include "data_structures.hpp"
#include <iostream>


void LList::AddToHead(int a){
    Node* p = new Node;
    p->info = a;
    p->next = head;
    head = p;
    if (tail == 0) tail = head;
}

void LList::AddToTail(int a){
    Node* p = new Node;
    p->info = a;
    p->next = 0;
    tail->next = p;
    tail = p;
    if (head == 0) head = tail;
}

int LList::RemoveFromHead(void){
    int val = head->info;
    Node* tmp;
    tmp = head;
    head = head->next;
    delete tmp;
    return val;
}

int LList::RemoveFromTail(void){
    int val = tail->info;
    Node *tmp1;
    
    for (tmp1=head; tmp1->next != tail; tmp1 = tmp1->next);
    tail = tmp1;
    
    delete tail->next;
    tail->next = 0;
    return val;
}

int LList::RemoveItem(int a){
    return 0;
}

bool LList::IsInList(int a){
    Node *p;
    for (p=head; p != 0 && p->info != a; p = p->next);
    return (p != 0);
}

bool LList::IsEmpty(void){
    if (head == 0){
        return true;
    }
    else{
        return false;
    }
}

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
    
    std::cout << "Здравствуй Ира. Это перечень элементов в стеке:" << std::endl;
    for (int j=0;j<size;j++){
        std::cout << pool[j] << std::endl;
    }

}

