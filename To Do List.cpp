#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task>& tasks, const string& description) {
    Task newTask{description, false};
    tasks.push_back(newTask);
    cout << "Task added: " << description << endl;
}

void viewTasks(const vector<Task>& tasks) { 
    std::cout << "Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". ";
        if (tasks[i].completed) {
            cout << "[Completed] ";
        } else {
            cout << "[To Do] ";
        }
        cout << tasks[i].description << endl;
    }
}

void markAsCompleted(vector<Task>& tasks, size_t index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "Task marked as completed: " << tasks[index].description << endl;
    } else {
        cout << "Invalid task index.\n";
    }
}

void removeTask(vector<Task>& tasks, size_t index) {
    if (index >= 0 && index < tasks.size()) {
        std::cout << "Task removed: " << tasks[index].description << endl;
        tasks.erase(tasks.begin() + index);
    } else {
        cout << "Invalid task index.\n";
    }
}

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "\n===== To-Do List Manager =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); 
                cout << "Enter task description: ";
                string description;
                getline(cin, description);
                addTask(tasks, description);
                break;
            }
            case 2:
                viewTasks(tasks);
                break;
            case 3: {
                size_t index;
                cout << "Enter the task number to mark as completed: ";
                cin >> index;
                markAsCompleted(tasks, index - 1);
                break;
            }
            case 4: {
                size_t index;
                cout << "Enter the task number to remove: ";
                cin >> index;
                removeTask(tasks, index - 1);
                break;
            }
            case 5:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5.\n";
                break;
        }
    }

    return 0;
}

