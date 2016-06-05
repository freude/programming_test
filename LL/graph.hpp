//
//  graph.hpp
//  LL
//
//  Created by freude on 6/1/16.
//  Copyright © 2016 freude. All rights reserved.
//

#ifndef graph_hpp
#define graph_hpp

#include <stdio.h>

class AdjList{
public:
    class Node{
    public:
        Node(){info = 0; next = 0;};
        int info;
        Node* next;
    };
    
    AdjList(){head = 0; tail=0;};
    AdjList(int a){
        Node* p= new Node;
        p->next = 0;
        p->info=a;
        tail=p;
        head=p;
        
        //head = 0; tail=0;
        //add_item_head(a);
    };
    ~AdjList(){
        if (head != 0){
            for (Node* p; p!=0; p=p->next){
                p = head;
                head=p->next;
                delete p;
            }
        }
    };
    void add_item_tail(int item);
    int del_item_tail(void);
    void add_item_head(int item);
    int del_item_head(void);
    bool isEmpty(void);
    void show_items();
    
    Node* head;
    Node* tail;
};

class Vertice{
public:
    Vertice(){info=0; color=0;};
    Vertice(int a) : info(a){color=0;};
    int info;
    int color;
    int x;
    int y;
    int prev;
    AdjList list;
};

class Graph{
public:
    Graph(){num_nodes=0;};
    Graph(int N) : num_nodes(N) {
        nodes = new Vertice[N];
        num_nodes=N;
        for (int j=0;j<num_nodes;j++){
            nodes[j].info = j;
            nodes[j].color = 0;
            nodes[j].prev = 0;
        }
    };
    ~Graph(){
        delete [] nodes;
    };
    
    void addEdge(Vertice* a, Vertice* b);
    bool DFS(int vertex, int *ans, int N);
    
    Vertice* nodes;
    int num_nodes;

};

 
#endif /* graph_hpp */
