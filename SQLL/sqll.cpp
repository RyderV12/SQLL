#include "sqll.h"

//======================= STACK ===========================

Stack::Stack()
{
    top = nullptr; 
}

Stack::~Stack() 
{
    while (!isEmpty()) 
    {
        pop();
    }
}

void Stack::push(string& value) 
{
    node* newNode = new node(value);
    newNode->next = top; //points to top
    top = newNode; //moves it to new node
}

string Stack::pop() 
{
    if (isEmpty()) 
    {
        throw runtime_error("Stack is empty");
    }

    node* temp = top;
    top = top->next; // moves top down
    string data = temp->data;
    delete temp;
    return data;
}

string Stack::peek() 
{
    if (isEmpty()) 
    {
        throw runtime_error("Stack is empty");
    }

    return top->data;  
}

bool Stack::isEmpty() 
{
    return top == nullptr;
}

void Stack::display()
{
    node* current = top;
    cout << "Stack: ";
    while (current != nullptr) 
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

//======================= QUEUE ===========================

Queue::Queue()
{
    front = nullptr;
    rear = nullptr; 
}

Queue::~Queue() 
{
    while (!isEmpty()) 
    {
        dequeue();
    }
}

void Queue::enqueue(string& value) 
{
    node* newNode = new node(value);
    if (rear == nullptr) 
    {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

string Queue::dequeue() 
{
    if (isEmpty()) 
    {
        throw runtime_error("Queue is empty");
    }

    node* temp = front;
    front = front->next;
    if (front == nullptr) 
    {
        rear = nullptr;
    }

    string data = temp->data;
    delete temp;
    return data;
}

bool Queue::isEmpty() 
{
    return front == nullptr;
}

void Queue::display()
{
    node* current = front;
    cout << "Queue: ";
    
    while (current != nullptr) 
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
//======================= DIJKSTRA'S TWO STACK ===========================
double evaluateExpression(string& expr) 
{
    // complete this using stacks
}

// ============= JOSEPHUS PROBLEM ===========================
void josephus(int n, int k) 
{
    // complete this using queue
}