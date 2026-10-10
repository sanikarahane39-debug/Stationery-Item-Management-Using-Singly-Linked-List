Stationery Item Management System Using Singly Linked List

Overview

This project is a simple Stationery Item Management System developed in C++ using a Singly Linked List. It allows users to add new stationery items, delete existing items, search for items, and display all available items with their quantities.


Features

- Add a new stationery item
- Delete a stationery item
- Search for a stationery item
- Display all stationery items
- Store item names and quantities
- Menu-driven program

Data Structure Used

Singly Linked List

Each node contains:

- Stationery item name
- Item quantity
- Pointer to the next node

The Singly Linked List connects each stationery item to the next node. The last node points to "NULL".

Example:

"Pen → Pencil → Notebook → Eraser → NULL"

Technologies Used

- C++
- Singly Linked List
- Pointers
- Dynamic Memory Allocation
- Console-Based Programming

Algorithm: 

Step 1: Start.

Step 2: Initialize "head = NULL".

Step 3: Display the menu:

1. Insert Item
2. Delete Item
3. Search Item
4. Display Items
5. Exit

Step 4: Accept the user's choice.

Step 5: Perform the selected operation:

- Insert: Create a new node, enter the item name and quantity, and insert it at the end of the linked list.
- Delete: Enter the item name, search for it, and delete the node if found.
- Search: Enter the item name and display its quantity if found.
- Display: If the list is empty, display a message. Otherwise, traverse the linked list from "head" to "NULL" and display all items with their quantities.
- Exit: Display the termination message and terminate the program.

Step 6: If the choice is invalid, display an error message.

Step 7: Repeat Steps 3–6 until the user selects Exit.

Step 8: Stop.

Operations

1. Insert Item

Adds a new stationery item and its quantity to the list.

2. Delete Item

Removes the specified stationery item from the list.

3. Search Item

Searches for a stationery item and displays its quantity if found.

4. Display Items

Displays all stationery items and their quantities.

5. Exit

Terminates the application.

Learning Outcomes

- Understanding Singly Linked List implementation
- Understanding pointers and nodes
- Learning dynamic memory allocation
- Performing insertion, deletion, searching, and traversal
- Developing menu-driven applications in C++
- Understanding linked-list operations in data structures

Sample Menu

1. Insert Item
2. Delete Item
3. Search Item
4. Display Items
5. Exit

Conclusion

The Stationery Item Management System demonstrates how a Singly Linked List can be used to manage stationery records efficiently. This project helps in understanding fundamental data structure concepts and their practical implementation using C++.