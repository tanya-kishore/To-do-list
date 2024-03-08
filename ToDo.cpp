#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back({ description, false });
        cout << "Task added: " << description << endl;
    }

    void markTaskAsComplete(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as complete: " << tasks[index].description << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void displayTasks() {
        cout << "To-Do List:" << endl;
        for (int i = 0; i < tasks.size(); ++i) {
            cout << i << ". ";
            if (tasks[i].completed) {
                cout << "[X] ";
            } else {
                cout << "[ ] ";
            }
            cout << tasks[i].description << endl;
        }
    }
};

int main() {
    ToDoList toDoList;

    int choice;
    string description;
    while (true) {
        cout << "1. Add Task\n";
        cout << "2. Mark Task as Complete\n";
        cout << "3. Display Tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, description);
                toDoList.addTask(description);
                break;
            case 2:
                int index;
                cout << "Enter task index to mark as complete: ";
                cin >> index;
                toDoList.markTaskAsComplete(index);
                break;
            case 3:
                toDoList.displayTasks();
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }

        cout << endl;
    }
}
