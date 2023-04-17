#include "Queue.h"
using namespace std;

bool isEmpty(Queue q) {
    return q.count == 0;
}

bool isFull(Queue q) {
    return q.count >= MAX_SIZE;
}

void add(Queue *q, int data) {
    if (isFull(*q)) {
        cout << "ќчередь переполнена" << endl;
        return;
    }
    else {
        q->data[q->rear] = data;
        q->rear = (q->rear + 1) % MAX_SIZE;
        q->count++;
        cout << "Ёлемент " << data << " добавлен в конец очереди" << endl;
    }
}

int remove(Queue *q) {
    int del = -1;
    if (isEmpty(*q)) {
        cout << "ќчередь пуста" << endl; 
    }
    else {
        del = q->data[q->front];
        q->front = (q->front + 1) % MAX_SIZE;
        q->count--;
        cout << "Ёлемент " << del << " удален из начала очереди" << endl;
    }
    return del;
}

void display(Queue q) {
    if (isEmpty(q)) {
        cout << "ќчередь пуста" << endl;
        return;
    }
    else {
        int current = q.front;
        int i = 0;
        do {
            cout << q.data[current] << " ";
            current = (current + 1) % MAX_SIZE;
            i++;
        } while (current != q.rear);
    }
    cout << endl;
}