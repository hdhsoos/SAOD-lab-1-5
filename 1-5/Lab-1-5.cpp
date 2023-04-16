#include "Stack.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Stack s;
	createStack(s);
	Stack extraStack;
	createStack(extraStack);
	char choice;
	int data, n;
	int dop_choice;
	while (true) {
		cout << "1. �������� ������� �� ������� �����" << endl;
		cout << "2. ������� ������� �� ������� �����" << endl;
		cout << "3. ������� ���� �� �����" << endl;
		cout << "4. �������� ������������� �����" << endl;
		cout << "5. �������� ��������� ���������" << endl;
		cout << "6. ������� ��������������� ���� �� �����" << endl;
		cout << "7. �����" << endl;
		cout << "�������� ��������: ";
		cin >> choice;
		cout << "\n";
		switch (choice) {
		case '1':
			cout << "1. �������� ����� ������� �� �������" << endl;
			cout << "2. �������� ������� � ������� ���������������� �����" << endl;
			cout << "�������� ��������: ";
			cin >> dop_choice;
			if (dop_choice == 1) {
				cout << "������� �������� ������ ��������: ";
				cin >> data;
				push(s, data);
			}
			else {
				if (dop_choice == 2) {
					take(extraStack, s);
				}
				else {
				cout << "������ �����" << endl;
				}
			}
			cout << "\n";
			break;
		case '2':
			cout << "1. ������� ������� � ������������� ������" << endl;
			cout << "2. ������� ������� � �������� ��� �� ������� ���������������� �����" << endl;
			cin >> dop_choice;
			if (dop_choice == 1) {
				pop(s);
			}
			else {
				move(s, extraStack);
			}
			cout << "\n";
			break;
		case '3':
			display(s);
			cout << "\n";
			break;
		case '4':
			if (isEmpty(s)) { cout << "���� ����" << endl; }
			else { cout << "���� �� ����" << endl; }
			cout << "\n";
			break;
		case '5':
			cout << "�������, ������� ��������� �������� � ����: ";
			cin >> n;
			for (int i = 0; i < n; i++) {
				int data = rand() & 100;
				push(s, data);
			}
			cout << "\n";
			break;
		case '6':
			display(extraStack);
			cout << "\n";
			break;
		case '7':
			return 0;
		default:
			cout << "������ �����" << endl;
			cout << "\n";
		}
	}
}