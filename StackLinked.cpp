#include <iostream>
using namespace std;
//----------------------Q1--------------------------//
class StackLinked
{
private:
    struct Node
    {
        int data;
        Node *next;
    };
    Node *top;

public:
    StackLinked()
    {
        top = NULL;
    }
    void push(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }
    void pop()
    {
        
            Node *start = top;
            top = top->next;
            start->next = NULL;
            delete start;
        
    }
    void display()
    {
        
            Node *start = top;
            while (start != NULL)
            {
                cout << start->data << " ";
                start = start->next;
            }
            cout << endl;
    }
    void printTop()
    {
            cout<< top->data << endl;
    }
    
};

int main()
{
    StackLinked stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    stack.printTop();
    return 0;
}
