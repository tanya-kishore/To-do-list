To-Do List C++ Program

This C++ program implements a simple To-Do List manager using a vector of tasks. Users can add tasks, mark tasks as complete, and display the list of tasks.
Features

    Add tasks to the To-Do List.
    Mark tasks as complete.
    Display the current list of tasks.

Prerequisites

To compile and run this program, you need:

    C++ compiler (e.g., g++)
    Standard C++ library

Compiling and Running the Program

You can compile the program using the following command:

    g++ main.cpp -o todo

After compiling, you can run the To-Do List program by executing the generated executable:

    ./todo

Usage

    When the program starts, you will be presented with a menu:
        Enter 1 to add a task.
        Enter 2 to mark a task as complete.
        Enter 3 to display the list of tasks.
        Enter 4 to exit the program.

    Follow the on-screen prompts to perform the desired action:
        To add a task, enter the task description.
        To mark a task as complete, enter the task index.
        To exit the program, choose the exit option.

Sample Input/Output

1. Add Task
2. Mark Task as Complete
3. Display Tasks
4. Exit
Enter your choice: 1
Enter task description: Buy groceries
Task added: Buy groceries

1. Add Task
2. Mark Task as Complete
3. Display Tasks
4. Exit
Enter your choice: 3
To-Do List:
0. [ ] Buy groceries

1. Add Task
2. Mark Task as Complete
3. Display Tasks
4. Exit
Enter your choice: 2
Enter task index to mark as complete: 0
Task marked as complete: Buy groceries

1. Add Task
2. Mark Task as Complete
3. Display Tasks
4. Exit
Enter your choice: 3
To-Do List:
0. [X] Buy groceries

1. Add Task
2. Mark Task as Complete
3. Display Tasks
4. Exit
Enter your choice: 4
Exiting the program. Goodbye!
