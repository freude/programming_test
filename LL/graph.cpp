//
//  graph.cpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#include "graph.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;


void AdjList::add_item_tail(int a){
    
    if (head==0){
        head = new Node;
        head->next = 0;
        head->info = a;
        tail = head;
    }
    else{
        Node* p= new Node;
        p->next = 0;
        p->info = a;
        tail->next=p;
        tail=p;
    }
}

void AdjList::add_item_head(int a){
    
    Node* p= new Node;

    if (head==0){
        p->next = 0;
        p->info=a;
        tail=p;
        head=p;
    }
    else{
        p->next = head;
        p->info=a;
        head=p;
    }

}

int AdjList::del_item_tail(void){
    int tmp;
    tmp=tail->info;
    
    if (!isEmpty()){

        if (head==tail){
            delete head;
            head=0;
            tail=0;
        }
        else{
            Node* nn;

            for (nn=head; nn->next!=tail; nn=nn->next);
            delete tail;
            tail=nn;
            tail->next=0;
        }
    };
    return tmp;
}

int AdjList::del_item_head(void){
    int tmp=head->info;
    Node* p=head;
    head = p->next;
    delete p;
    return tmp;
}

bool AdjList::isEmpty(void){
    if (head == 0){
        return true;
    }
    else{
        return false;
    }
}

void AdjList::show_items(){
    Node* p;
    
    for (p = head;p != 0; p=p->next){
        std::cout << p->info << " ";
    }
    std::cout << std::endl;

}

void Graph::addEdge(Vertice* a, Vertice* b){
    a->list.add_item_tail(b->info);
}

bool Graph::DFS(int vertex,int *ans, int N){
    int a;
    nodes[vertex].color=1;
    if ((nodes[vertex].x==N-1)&&(nodes[vertex].y==N-1)){
        *ans=vertex;
        return true;
    }
    
    while (!nodes[vertex].list.isEmpty()){
        a= nodes[vertex].list.del_item_tail();
        if (nodes[a].color!=1){
        nodes[a].prev=vertex;
        //if (DFS(a, ans, N)) {*ans=vertex;return true;}
        DFS(a, ans, N);
        }
    }
    //if (vertex==0){
    return false;
    //}
    
}