#pragma once
#include <iostream>

const int MAX_SIZE = 3;

// структура очереди
struct Queue {
	int data[MAX_SIZE];
	int front=0; 
	int rear=0; 
	int count = 0;
};

bool isEmpty(Queue q);
bool isFull(Queue q);
void add(Queue *q, int data);
int remove(Queue *q);
void display(Queue q);
