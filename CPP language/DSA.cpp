//insertion sort
/*
#include <iostream>
using namespace std;
int main(){ 
   cout<<"Name: Madhav Sharma, UID: 21BCS5438, Sction: 810A"<<endl;
   int n;
   cout<<"Enter the number of elements you want: "; 
   cin>>n;
   int arr[n];
   cout<<"Enter the elements: ";
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   for(int i=1; i<n; i++){
      int current= arr[i];
      int j=i-1;
      while(arr[j]>current  && j>=0){
         arr[j+1]= arr[j];
         j--;
      }
      arr[j+1]= current;
   }
   cout<<"The array is sorted: ";
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;  
return 0;
}

*/

//merge sort
/*
#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int *arr1 = new int[l1];
    int *arr2 = new int[l2];
    int k = s;
    for (int i = 0; i < l1; i++)
    {
        arr1[i] = arr[k++];
    }
    for (int i = 0; i < l2; i++)
    {
        arr2[i] = arr[k++];
    }
    k = s;
    int i = 0;
    int j = 0;
    while (i < l1 && j < l2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    while (i < l1)
    {
        arr[k++] = arr1[i++];
    }
    while (i < l1)
    {
        arr[k++] = arr2[j++];
    }
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, (s + e) / 2, e);
}

int main(){
  int n, arr[100];
  cout<<"enter the no. of elements you want: "<<endl;
  cin>>n;
  cout<<"enter the elements: "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  mergesort(arr, 0, n-1);
  cout<<"the elements are sorted: "<<endl;

  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
*/

//insertionAtHead in linked list
/*
#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node *next;

  node(int data){
    this -> data= data;
    this -> next= NULL;

  }

};

void InsertAtHead(node * &head, int d){

  node* temp= new node(d);
  temp -> next= head;
  head= temp;


}

void print(node * &head){

  node* temp= head;
  while(temp!= NULL)
  {
    cout<< temp -> data<<" ";
    temp= temp-> next;
  }
  cout<<endl;

}

int main(){ 
  node * node1= new node(10);
  //cout<< node1 -> data <<endl;
  //cout<< node1 -> next<<endl;

    node* head= node1;
    print(head);
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 22);
    print(head);

return 0;
}
*/

//insertAtMiddle in linked list
/*
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this-> data= data;
        this-> next= NULL;
    }


};

void insertAtHead(node* &head, int d){
    node* temp= new node(d);
    temp->next= head;
    head= temp;
}

void insertAtTail(node* &tail, int d){
    node* temp= new node(d);

    tail-> next = temp;
    tail= temp;

    
}

void insertAtMiddle(node* &tail, node* &head, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return; 
    }

    node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;

    }

    if(temp-> next= NULL){
        insertAtTail(tail, d);
        return ;
    }

    node* nodetoinsert= new node(120);
    nodetoinsert-> next= temp->next;
    temp->next= nodetoinsert;

}

void print(node* &head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

    cout<<endl;
}
int main(){ 
      node* node1= new node(100);
      node* head= node1;
      node* tail= node1;

      print(head);

      insertAtHead(head,999);
      print(head);

      insertAtTail(tail, 320);
      print(head);

      insertAtMiddle(tail, head, 1, 1);
      print(head);

return 0;
}

*/

//insertionAtTail in linked list
/*
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this-> data= data;
        this-> next= NULL;
    }

};

void insertAtTail(node* &tail, int d){
    node* temp= new node(d);
    tail->next= temp;
    tail= temp;
}

void print(node* &head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

    cout<<endl;
}
int main(){ 

    node* node1= new node(100);
    node* head= node1;
    node* tail= node1;

    print(head);

    insertAtTail(tail, 120);
    print(head);

    insertAtTail(tail, 220);
    print(head);

      

return 0;
}

*/

//insertion in array
/*
#include <iostream>
using namespace std;
int main(){ 
     int  arr[100], num, index, item;
     cin>>num;
     for(int i=0; i<num; i++)
     {
        cin>>arr[i];
     }
     cin>>index;
     cin>>item;
     for(int i=(num-1); i>=index; i--)
     {
        arr[i+1]= arr[i];
     }

     arr[index]= item;

     for(int i=0; i<(num+1); i++)
     {
        cout<<arr[i]<<endl;
     }



return 0;
}
*/

//deletion in array
/*
#include <iostream>
using namespace std;
int main(){ 
     int arr[100], num, index;

     cin>>num;
     for(int i=0; i<num; i++) 
     {
        cin>>arr[i];
     }

     cin>>index;

     for(int i=index; i<num; i++)
     {
        arr[i]= arr[i+1];
     }

     for(int i=0; i<(num-1); i++)
     {
        cout<<arr[i]<<endl;
     }

return 0;
}
*/

//binary search and linear search
/*
#include <iostream>
using namespace std;
int main(){ 
   int num, loc, arr[100], op, item, i;
   cout<<"enter the no. of elements you want: "<<endl;
   cin>>num;
   cout<<"enter the elements: "<<endl;
   for(int i=0; i<num; i++){
      cin>>arr[i];
   } 
   cout<<"enter the item: "<<endl;
   cin>>item;
   cout<<"enter which search you want to perform 1/2: "<<endl;
   cin>>op;
   switch(op){
      case 1:{
         int flag=0;
         for( i=0; i<num; i++){
            if(arr[i]==item){
               flag=1;
               loc=i;
               
            }
         }    
         if(flag==1){
            cout<<"item found at"<<loc<<endl;
            break;
         }     
         else{
            cout<<"item not found"<<endl;
            break;
         }

      }
      case 2:
      int s=0;
      int e=num;
      

      while(s<=e){
         int mid= (s+e)/2;
         if(arr[mid]==item){
            cout<<"item found at"<<mid;
            break;
         }
         else if(arr[mid]>item){
            e= mid-1;
         }
         else{
            s= mid+1;
         }
      }
   }


return 0;
}

*/

//Insertion, deletion, searching and traversal in linked list
/*
#include <iostream>
using namespace std;
class node{
 public:
 int data;
 node* next;
};
node *Insert(node *head){
 int value;
 cout<<"Enter the element for insertion: ";
 cin>>value;
 node *ptr=(node *)malloc(sizeof(node));
 node *p=head; node *q=p->next;
 ptr->data=value;
 if(value<(p->data)){
 ptr->next=p;
 head=ptr;
 return head; }
 while(value>(q->data) && q->next!=NULL){
 p=p->next;
 q=q->next; }
 if(q->next!=NULL){
 ptr->next=p->next;
 p->next=ptr;
 return head; }
 else if(q->next==NULL){
 ptr->next=q->next;
 q->next=ptr;
 return head; }
 return head; }
node *Delete(node *head){
 int n;
 cout<<"Enter the element for deletion: ";
 cin>>n;
 node *p=head; node *q=head->next;
 if(n==(p->data)){
 head=p->next;
 free(p);
 return head; }
 while(n!=(q->data) && q->next!=NULL){
 p=p->next; q=q->next; }
 if(n==(q->data)){
 p->next=q->next;
 free(q);
 return head; }
 else{
 cout<<"not present";
 return head; }}
void Search(node *head){
 int e,i=0;
 cout<<"Enter element for searching: ";
 cin>>e;
 node *ptr=head;
 while(e!=(ptr->data) && ptr->next!=NULL){
 ptr=ptr->next;
 i++;}
 if(e==(ptr->data)){
 cout<<"found at index "<<i<<endl;}
 else{
 cout<<"not present\n"; }}
void display(node *head){
 int i=0;
 while(head!=NULL){
 cout<<i<<" = "<<head->data<<endl;
 head=head->next;i++;}}
int main(){
 cout<<"Madhav Sharma, UId:21BCS5438, Section: 810(A) \n";
 int choice,v;
 node *head=(node *)malloc(sizeof(node));
 node *second=(node *)malloc(sizeof(node));
 node *third=(node *)malloc(sizeof(node));
 node *tail=(node *)malloc(sizeof(node));
 head->data=100;
 head->next=second;
 second->data=200;
 second->next=third;
 third->data=300;
 third->next=tail;
 tail->data=400;
 tail->next=NULL;
 display(head);
 abc:

 cin>>choice;
 switch(choice){
 case 1:{
 head=Insert(head);
 cout<<"Inserted..."<<endl;
 goto abc;
 }
 case 2:{
 head=Delete(head);
 cout<<"Deleted..."<<endl;
 goto abc;
 }
 case 3:{
 Search(head); goto abc;
 }
 case 4:{
 display(head); goto abc;
 }
 default:{
 cout<<"Wrong input\n";} }
return 0;
}

*/

//infix notation to postfix notation in stack
/*
#include <iostream>
#include <stack> 
using namespace std;
int prec(char c){
if (c == '^') {
return 3;}
else if (c == '/' || c == '*') {
return 2; }
else if (c == '+' || c == '-') { 
return 1;}
else{
return -1; } }
void infixToPostfix(string s) {
stack<char> st; 
string result;
for (int i = 0; i < s.length(); i++){ 
char c = s[i];
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')|| (c >= '0' && c <= '9')) 
result += c;
else if (c == '(')
st.push('(');
else if (c == ')') {
while (st.top() != '(') { result += st.top(); st.pop(); }
st.pop(); }
else {
while (!st.empty()
&& prec(s[i]) <= prec(st.top())) { result += st.top();
st.pop(); }
st.push(c); }}
while (!st.empty()) { result += st.top(); st.pop(); }
cout << result << endl; }
int main(){
string ex;
cout<<"Enter the expression: ";
cin>>ex; 
cout<<"Output: ";
infixToPostfix(ex); 
return 0;
}


*/

//DS3.3
/*

#include<iostream> 
#include	<list> 
using namespace std; 
class Graph { 
int numVertices; 
list<int>* adjLists;
bool* visited; 
public: Graph(int vertices); void addEdge(int src, int dest); 
void BFS(int startVertex); };
Graph::Graph(int vertices) { 
  numVertices=vertices; 
  adjLists= new list<int> [vertices];
 }
void Graph::addEdge(int src, int dest) { adjLists[src].push_back(dest); adjLists[dest].push_back(src); }
void Graph::BFS(int startVertex) {
   visited = new bool[numVertices]; for (int i
= 0; i < numVertices; i++) visited[i] = false; list<int> queue; visited[startVertex] = true; queue.push_back(startVertex);
list<int>::iterator i; while (!queue.empty()) {
int currVertex = queue.front();
 cout << "Visited " << currVertex << " "; 
queue.pop_front();
 for (i = adjLists[currVertex].begin();
 i != adjLists[currVertex].end();
++i) {
int adjVertex = *i; if (!visited[adjVertex])
{ visited[adjVertex]= true;
 queue.push_back(adjVertex);
}}}}
 int main() { Graph g(5);
g.addEdge(0, 1);
g.addEdge(0, 2);
g.addEdge(1, 2);
g.addEdge(2, 0);




g.addEdge(2, 3);
g.addEdge(3, 3);
g.BFS(3);
return 0;
}
*/

//PATTERN QUESTIONS
/*
#include <iostream>
using namespace std;
int main(){ 
     int n;
     cin>>n;
     int row=1;
     while(row<=n){
        //1st triangle with digits
        int col=row;
        int count=1;
        while(col<=n){
            cout<<count<<" ";
            count++;
            col++;
        }

        //2nd triangle with stars
        int start= 2*(row-1);
        while(start){
            cout<<"* ";
            start--;
        }

        //3rd triangle with reverse digits
        int count2=n-row+1;
        int col2=row;
        while(col2<=n){
            cout<<count2<<" ";
            count2--;
            col2++;
        }

        cout<<endl;
        row++;



     }

return 0;
}

*/


