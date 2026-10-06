#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string item;
    int quantity;
    Node *next;
};

Node *head = NULL;

// Insert item
void insertItem()
{
    Node *newNode = new Node;

    cout << "Enter stationery item: ";
    cin >> newNode->item;

    cout << "Enter quantity: ";
    cin >> newNode->quantity;

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Item added successfully.\n";
}

// Delete item
void deleteItem()
{
    string item;

    cout << "Enter item to delete: ";
    cin >> item;

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL && temp->item != item)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Item not found.\n";
        return;
    }

    if (prev == NULL)
    {
        head = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    delete temp;

    cout << "Item deleted successfully.\n";
}

// Search item
void searchItem()
{
    string item;

    cout << "Enter item to search: ";
    cin >> item;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->item == item)
        {
            cout << "Item found!\n";
            cout << "Quantity: " << temp->quantity << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Item not found.\n";
}

// Display items
void displayItems()
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "Stationery list is empty.\n";
        return;
    }

    cout << "\n--- Stationery List ---\n";

    while (temp != NULL)
    {
        cout << "Item: " << temp->item
             << "  Quantity: " << temp->quantity << endl;

        temp = temp->next;
    }
}

// Main function
int main()
{
    int choice;

    do
    {
        cout << "\n===== Stationery Item Management =====\n";
        cout << "1. Insert Item\n";
        cout << "2. Delete Item\n";
        cout << "3. Search Item\n";
        cout << "4. Display Items\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                insertItem();
                break;

            case 2:
                deleteItem();
                break;

            case 3:
                searchItem();
                break;

            case 4:
                displayItems();
                break;

            case 5:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
