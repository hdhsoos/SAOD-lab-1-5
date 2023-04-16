#pragma once
#include <iostream>
#include <cstdlib> // ��� ������� rand � srand
#include <ctime> // ��� ������� time

// ��������� ��������� ���� �����
struct Node {
	int data; // ������ ����
	Node* next; // ��������� �� ���� ���� � �����
};

// ��������� ��������� �����
struct Stack {
	Node* top; // ��������� �� ������� ������
};

void createStack(Stack& s); // ������� ��� �������� ������� �����
bool isEmpty(Stack& s); // ������� ��� �������� �� ������� �����
void push(Stack& s, int data); // ������� ���������� �������� � ������� �����
void pop(Stack& s); // ������� �������� �������� �� ������� �����
void display(Stack& s); // ������� ��� ������ �������� ��������� �����
void move(Stack& s, Stack& extraStack); // ������� ����������� � �������������� ����
void take(Stack& extraStack, Stack& s); // ������� ����������� �� ��������������� �����