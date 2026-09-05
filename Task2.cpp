#include <iostream>
using namespace std;
//----------------------Q2--------------------------//
class QueueLinked
{
private:
    struct Node
    {
        int data;
        Node *next;
    };
    Node *front;
    Node *rear;
    int size;

public:
    QueueLinked()
    {
        front = NULL;
        rear = NULL;
        size = 0;
    }
    void enqueue(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            Node *start = front;
            front = front->next;
            start->next = NULL;
            delete start;
        }
    }
    void print()
    {
        Node *start = front;
        while (start != NULL)
        {
            cout << start->data << endl;
            start = start->next;
        }
    }
    void printFront()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front element is: " << front->data << endl;
        }
    }
};

int main()
{
    QueueLinked queue;
    queue.enqueue(100);
    queue.enqueue(200);
    queue.enqueue(300);
    queue.print();
    queue.dequeue();
    queue.print();
    queue.printFront();
    return 0;
}
//use queue linked list in printer CPU
//use stack linked list in undo and redo operations