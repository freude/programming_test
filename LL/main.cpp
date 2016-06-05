//
//  main.cpp
//  LL
//
//  Created by freude on 5/31/16.
//  Copyright © 2016 freude. All rights reserved.
//
//  Linked List if integers
//

#include <stdio.h>
#include <iostream>
#include "graph.hpp"

int N=7;

int conv_coords_to_index(int a, int b, int N);

int main(int argc, const char * argv[]) {
    
    int** Board;
    
    Board = new int*[N];
    for (int j=0;j<N;j++) Board[j] = new int[N];
    
    for (int j1=0;j1<N;j1++){
        for (int j2=0;j2<N;j2++){
            Board[j1][j2] = 0;
        }
    }
    
    Board[1][1] = 1;
    Board[1][2] = 1;
    Board[1][3] = 1;
    Board[1][1] = 1;
    Board[2][1] = 1;
    
    Board[3][0] = 1;
    Board[3][2] = 1;
    Board[3][3] = 1;
    
    Board[4][3] = 1;
    Board[5][3] = 1;
    Board[5][4] = 1;
    Board[5][5] = 1;
    Board[6][5] = 1;

    
    for (int j1=0;j1<N;j1++){
        for (int j2=0;j2<N;j2++){
            std::cout << Board[j1][j2] << " ";
        }
        std::cout << std::endl;
    }
    
    
    Graph gr(N*N);
    
    int j=0;
    
    for (int j1=0;j1<N;j1++){
        for (int j2=0;j2<N;j2++){
            gr.nodes[j].x=j1;
            gr.nodes[j].y=j2;
            j++;
        }
    }
    
    j=0;
    
    for (int j1=0;j1<N;j1++){
        for (int j2=0;j2<N;j2++){
            if (((gr.nodes[j].x-1)>=0)&&((gr.nodes[j].x-1)<N)&&((gr.nodes[j].y-1)>=0)&&((gr.nodes[j].y-1)<N)&&(Board[gr.nodes[j].x-1][gr.nodes[j].y-1]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x-1,gr.nodes[j].y-1,N)]));
            }
            if (((gr.nodes[j].x-1)>=0)&&((gr.nodes[j].x-1)<N)&&((gr.nodes[j].y)>=0)&&((gr.nodes[j].y)<N)&&(Board[gr.nodes[j].x-1][gr.nodes[j].y]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x-1,gr.nodes[j].y,N)]));
            }
            if (((gr.nodes[j].x-1)>=0)&&((gr.nodes[j].x-1)<N)&&((gr.nodes[j].y+1)>=0)&&((gr.nodes[j].y+1)<N)&&(Board[gr.nodes[j].x-1][gr.nodes[j].y+1]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x-1,gr.nodes[j].y+1,N)]));
            }
            if (((gr.nodes[j].x)>=0)&&((gr.nodes[j].x)<N)&&((gr.nodes[j].y-1)>=0)&&((gr.nodes[j].y-1)<N)&&(Board[gr.nodes[j].x][gr.nodes[j].y-1]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x,gr.nodes[j].y-1,N)]));
            }
            if (((gr.nodes[j].x)>=0)&&((gr.nodes[j].x)<N)&&((gr.nodes[j].y+1)>=0)&&((gr.nodes[j].y+1)<N)&&(Board[gr.nodes[j].x][gr.nodes[j].y+1]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x,gr.nodes[j].y+1,N)]));
            }
            if (((gr.nodes[j].x+1)>=0)&&((gr.nodes[j].x+1)<N)&&((gr.nodes[j].y-1)>=0)&&((gr.nodes[j].y-1)<N)&&(Board[gr.nodes[j].x+1][gr.nodes[j].y-1]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x+1,gr.nodes[j].y-1,N)]));
            }
            if (((gr.nodes[j].x+1)>=0)&&((gr.nodes[j].x+1)<N)&&((gr.nodes[j].y)>=0)&&((gr.nodes[j].y)<N)&&(Board[gr.nodes[j].x+1][gr.nodes[j].y]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x+1,gr.nodes[j].y,N)]));
                            }
            if (((gr.nodes[j].x+1)>=0)&&((gr.nodes[j].x+1)<N)&&((gr.nodes[j].y+1)>=0)&&((gr.nodes[j].y+1)<N)&&(Board[gr.nodes[j].x+1][gr.nodes[j].y+1]!=1))
            {
                gr.addEdge(&(gr.nodes[j]), &(gr.nodes[conv_coords_to_index(gr.nodes[j].x+1,gr.nodes[j].y+1,N)]));
            }
            
            
            j++;
        }
    }
    
    int ans;
    
    bool sss=gr.DFS(0, &ans, N);
    
    std::cout << sss << std::endl;
    
    int num=0;
    int answer[100][2];
    
    while (ans!=0){
        answer[num][0]=gr.nodes[ans].x+1;
        answer[num][1]=gr.nodes[ans].y+1;
        ans=gr.nodes[ans].prev;
        std::cout << answer[num][0] << " " << answer[num][1] << std::endl;
        num++;
       
    }
    
    return 0;
}

int conv_coords_to_index(int a, int b, int N){
    
    return a*N+b;

}








