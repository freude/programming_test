//
//  llist.cpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#include "llist.hpp"

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
