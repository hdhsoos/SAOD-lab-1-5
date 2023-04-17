#include "Queue.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    Queue q;
    char choice;
    int data{};
    while (true) {
        cout << "1. Проверка пустоты очереди" << endl;
        cout << "2. Проверка заполненности очереди" << endl;
        cout << "3. Добавить элемент в конец очереди" << endl;
        cout << "4. Удалить элемент из начала очереди" << endl;
        cout << "5. Вывод очереди на экран" << endl;
        cout << "6. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;
        cout << "\n";
        switch (choice) {
        case '1':
            if (isEmpty(q)) {
                cout << "Очередь пуста" << endl;
            }
            else {
                cout << "Очередь не пуста" << endl;
            }
            cout << "\n";
            break;
        case '2':
            if (isFull(q)) {
                cout << "Очередь заполнена" << endl;
            }
            else {
                cout << "Очередь не заполнена" << endl;
            }
            cout << "\n";
            break;
        case '3':
            if (!isFull(q)) {
                cout << "Введите значение нового элемента: ";
                cin >> data;
            }
            add(&q, data);
            cout << "\n";
            break;
        case '4':
            remove(&q);
            cout << "\n";
            break;
        case '5':
            display(q);
            cout << "\n";
            break;
        case '6':
            return 0;
        default:
            cout << "Ошибка ввода" << endl;
            cout << "\n";
        }
    }
}