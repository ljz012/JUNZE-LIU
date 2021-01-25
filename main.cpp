#include<stdio.h>
#include<iostream>
#include<algorithm>

#define n 6
using namespace std;

int M1[n] = {2,7,6,4,6,8};
int M2[n] = {5,3,2,7,9,2};
int c[n] = {0};

class Node{
public:
    int time;
    int index;
    int position;
};

bool cmp(Node a, Node b){
    return a.time<b.time;
}

int main(){
    Node* node = new Node[n];
    int first = 0;
    int end = n -1;
    int time1 = 0;
    int time2 = 0;

    for(int i = 0; i < n; i ++){
        node[i].index = i;
        if(M1[i] > M2[i]){
            node[i].time = M2[i];
            node[i].position = 2;
        }
        else{
            node[i].time = M1[i];
            node[i].position = 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(node[i].position == 1){
            c[first] = node[i].index;
            first++;
        }
        else{
            c[end] = node[i].index;
            end--;
        }
    }

    time1 = M1[c[0]];
    time2 = time1 + M2[c[0]];
    for(int i = 1; i < n; i++){
        time1 += M1[c[i]];
        time2=time1>time2?time1+M2[c[i]]:time2+M2[c[i]];
    }
    cout<<"次序为："<<endl;
    for(int i = 0; i<n ; i++){
        cout<<c[i]+1;
    }
    cout<<endl;
    cout<<time2<<endl;
    return 0;
}