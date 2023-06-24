//practical 7

//part 1 (for queue)
/*
#include<iostream>
using namespace std;
class queue
{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool isempty()
    {
        if (front==-1)
        {
            return true;
        }
        return false;
    }
    bool isfull()
    {
        if (rear==size-1)
        {
            return true;
        }
        return false;
    }
    void enqueue(int ele)
    {
        if (isfull())
        {
            cout<<"Queue overflow"<<endl;
        }
        else if (front==-1)
        {
            front++;
            rear++;
            arr[rear]=ele;
        }
        else
        {
            rear++;
            arr[rear]=ele;
        }   
    }
    void dequeue()
    {
        if (isempty())
        {
            cout<<"Queue underflow"<<endl;
        }
        else
        {
            front++;
        }
    }
    int top()
    {
        if (isempty())
        {
            cout<<"Queue is empty "<<endl;
            return 0;
        }
        return arr[front];
    }
    void display()
    {
        for (int i = front; i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int n, op, el;
    cout<<"enter the size of the queue: ";
    cin>>n;
    queue q(n);
    abc:
    cout<<"enter the operation you want to perform: ";
    cin>>op;
    switch(op){
        case 1:{
            cout<<"Enter the element you want to enqueue: ";
            cin>>el;
            q.enqueue(el);
            goto abc;
        }
        case 2:{
            q.dequeue();
            goto abc;
        }
        case 3:{
            cout<<q.top()<<endl;
            goto abc;

        }
        case 4:{
            q.display();
            goto abc;
        }
    }
    
    
    return 0;
}
*/

//part2 (for circular queue)
/*
#include<iostream>
using namespace std;
class circularqueue
{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    circularqueue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    bool isempty()
    {
        if (front==-1)
        {
            return true;
        }
        return false;
    }
    bool isfull()
    {
        if ((front==0 && rear==size-1) || (front!=0 &&  rear==(front-1)%(size-1)))
        {
            return true;
        }
        return false;
    }
    void enqueue(int ele)
    {
        //QUEUE FULL hai
        if (isfull())
        {
            cout<<"Queue overflow"<<endl;
        }
        //1st element
        else if (front==-1 && rear==-1)
        {
            front++;
            rear++;   
        }
        //Circulare
        else if (front!=0 && rear==size-1)
        {
            rear=0;
        }
        //Other cases
        else
        {
            rear++;
        }   
        arr[rear]=ele;

    }
    void dequeue()
    {
        if (isempty())
        {
            cout<<"Queue underflow"<<endl;
        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;
        }
        else{
            front++;
        }
    }
    int top()
    {
        if (isempty())
        {
            cout<<"Queue is empty "<<endl;
            return 0;
        }
        return arr[front];
    }
    void display()
    {
        for (int i = front; i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
int n, op, el;
    cout<<"enter the size of the queue: ";
    cin>>n;
    circularqueue q(n);
    abc:
    cout<<"enter the operation you want to perform: ";
    cin>>op;
    switch(op){
        case 1:{
            cout<<"Enter the element you want to enqueue: ";
            cin>>el;
            q.enqueue(el);
            goto abc;
        }
        case 2:{
            q.dequeue();
            goto abc;
        }
        case 3:{
            cout<<q.top()<<endl;
            goto abc;

        }
        case 4:{
            q.display();
            goto abc;
        }
    }
    
    
    return 0;
}


*/

//practical 8
/*
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class queue
{
    public:
    Node* front;
    Node* rear;
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    bool isempty()
    {
        if (front==NULL)
        {
            return true;
        }
        return false;
    }
    void enqueue(int ele)
    {
        Node *n1=new Node(ele);
        if (!n1)
        {
            cout<<"Stack overflow"<<endl;
        }
        else if(front==NULL)
        {
            front=n1;
            rear=n1;
        }
        else{
            rear->next=n1;
            rear=n1;
        }
    }
    void dequeue()
    {
        if (isempty())
        {
            cout<<"Queue underflow"<<endl;
        }
        else
        {
            if (front->next=NULL)
            {
                front=rear=NULL;
            }
            else
            {
                front=front->next;
            }
        }
    }
    int top()
    {
        if (isempty())
        {
            cout<<"Queue is empty "<<endl;
            return 0;
        }
        return front->data;
    }
    void display()
    {
        Node *front2=front;
        while(front2!=NULL)
        {
            cout<<front2->data<<" ";
            front2=front2->next;
        }
        cout<<endl;
    }
};
int main(){
int  op, el;
    
    
    queue q;
    abc:
    cout<<"enter the operation you want to perform: ";
    cin>>op;
    switch(op){
        case 1:{
            cout<<"Enter the element you want to enqueue: ";
            cin>>el;
            q.enqueue(el);
            goto abc;
        }
        case 2:{
            q.dequeue();
            goto abc;
        }
        case 3:{
            cout<<q.top()<<endl;
            goto abc;

        }
        case 4:{
            q.display();
            goto abc;
        }
    }
    
    
    return 0;
}



*/


//practical 9
/*

*/

