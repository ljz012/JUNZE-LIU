#ifndef UNTITLED_SJF_H
#define UNTITLED_SJF_H
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct PCB{
    int no;
    char name[10];
    char State;
    int ArrivalTime;
    int ServeTime;
    int StartTime;
    int EndTime;
    float TurnaroundTime;
    float TakePowerTime;
    struct PCB *next;
}PCB;

PCB Queue[MAX] = {0};
int time;
int n;

void CreateProcessQueue(){

}

#endif //UNTITLED_SJF_H
