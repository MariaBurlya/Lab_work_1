#include "Queue.h"

void Queue::QPUSH(int value) {
    q.push(value);
}

void Queue::QPOP() {
    if (q.empty()) {
        cout << "Очередь пуста" << endl;
        return;
    }
    q.pop();
}

void Queue::QGET() {
    if (q.empty()) {
        cout << "Очередь пуста" << endl;
        return;
    }
    cout << "Первый элемент в очереди: " << q.front() << endl;
}

void Queue::PRINT() {
    if (q.empty()) {
        cout << "Очередь пуста" << endl;
        return;
    }
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    Queue queue;
    string command;
    int value;

    while (true) {
        cout << "Введите команду QPUSH, QPOP, QGET, PRINT, EXIT: ";
        getline(cin, command);

        if (command.substr(0, 5) == "QPUSH") {
            sscanf(command.c_str(), "QPUSH %d", &value);
            queue.QPUSH(value);
        }
        else if (command == "QPOP") {
            queue.QPOP();
        }
        else if (command == "QGET") {
            queue.QGET();
        }
        else if (command == "PRINT") {
            queue.PRINT();
        }
        else if (command == "EXIT") {
            break;
        }
        else {
            cout << "Неизвестная команда" << endl;
        }
    }
    return 0;
}
