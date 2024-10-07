#include <iostream>
using namespace std;

#define SIZE 5 // Define the size of the circular queue

class CircularQueue
{
private:
    int queue[SIZE]; // Array to store queue elements
    int front, rear; // Front and rear pointers

public:
    // Constructor to initialize the front and rear pointers
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }

    // Check if the queue is empty
    bool isEmpty()
    {
        return (front == -1);
    }

    // Check if the queue is full
    bool isFull()
    {
        return ((rear + 1) % SIZE == front);
    }

    // Insert an element into the queue
    void insert(int value)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot insert " << value << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        rear = (rear + 1) % SIZE; // Circular increment
        queue[rear] = value;
        cout << value << " inserted into the queue." << endl;
    }

    // Delete an element from the queue
    void del()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot delete." << endl;
            return;
        }
        cout << queue[front] << " deleted from the queue." << endl;
        if (front == rear)
        {
            // If only one element is present in the queue
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE; // Circular increment
        }
    }

    // Display the elements of the queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true)
        {
            cout << queue[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE; // Circular increment
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue cq;
    int choice, value;

    do
    {
        cout << "\nCircular Queue Operations:";
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Check if Empty";
        cout << "\n5. Check if Full";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to insert: ";
            cin >> value;
            cq.insert(value);
            break;
        case 2:
            cq.del();
            break;
        case 3:
            cq.display();
            break;
        case 4:
            if (cq.isEmpty())
                cout << "Queue is empty." << endl;
            else
                cout << "Queue is not empty." << endl;
            break;
        case 5:
            if (cq.isFull())
                cout << "Queue is full." << endl;
            else
                cout << "Queue is not full." << endl;
            break;
        case 6:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
