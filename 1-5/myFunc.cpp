#include "Stack.h"
#include <iostream>
using namespace std;

// ������� ��� �������� ������� �����
void createStack(Stack& s) {
	s.top = nullptr;
}

// ������� ��� �������� �� ������� �����
bool isEmpty(Stack& s) {
	return s.top == nullptr;
}

// ������� ���������� �������� � ������� �����
void push(Stack& s, int data) {
	Node* newNode = new Node; //��������� ������ ��� ����� ���� �����
	newNode->data = data; // ������ ������ � ����
	newNode->next = s.top; // ��������� ����� ����� ����� ����� � ���� ��������
	s.top = newNode; // ���������� ��������� ������� �� ����� ����
}

// ������� �������� �������� �� ������� �����
void pop(Stack& s) {
	if (isEmpty(s)) {
		cout << "���� ����" << endl;
	}
	else {
		Node* temp = s.top; // �������� ���������� ��������� 
		s.top = s.top->next; // ���������� ��������� �������
		delete temp; // ������������ ������
	}
}

// ������� ��� ������ �������� ��������� �����
void display(Stack& s) {
	if (isEmpty(s)) {
		cout << "���� ����" << endl;
	}
	else {
		Node* currNode = s.top;
		while (currNode != nullptr) {
			cout << currNode->data << " ";
			currNode = currNode->next;
		}
		cout << "\n";
	}
}

// ������� ����������� � �������������� ����
void move(Stack& s, Stack& extraStack) {
	Node* cur;
	if (not isEmpty(s)) {
		int data = s.top->data;
		cur = s.top;
		s.top = s.top->next;
		cur->next = extraStack.top;
		extraStack.top = cur;
		cout << "������� " << cur->data << " ��������� � ��������������� ����" << endl;
	}
	else {
		cout << "�������� ���� ����" << endl;
	}

}

// ������� ����������� �� ��������������� �����
void take(Stack& extraStack, Stack& s) {
	Node* cur;
	if (not isEmpty(extraStack)) {
		cur = extraStack.top;
		extraStack.top = extraStack.top->next;
		cur->next = s.top;
		s.top = cur;
		cout << "������� " << cur->data << " ��������� � �������� ����" << endl;
	}
	else {
		cout << "��������������� ���� ����" << endl;
	}
}