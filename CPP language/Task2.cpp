// #include <iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;

//     node(int data){
//         this-> data= data;
//         this-> next= NULL;
//     }
//     ~node(){
//         int value= this-> data;
//         //memory free
//         if(this-> next!= NULL){
//             delete next;2
//             this-> next= NULL;
//         }
//         cout<<"memory is free for node with data "<<value<<endl;
//     }
// };  

// void insertAtHead(node* &head, int d){

//     node* temp= new node(d);
//     temp->next= head;
//     head= temp;

// }

// void insertAtTail(node* &tail, int d){
    
//     node* temp= new node(d);
//     tail->next=temp;
//     tail= temp;
// }

// void insertAtPost(node* &tail, node* &head, int position, int d){
//     if(position==1){
//         insertAtHead(head, d);
//         return ;
//     }
//     node* temp= head;
//     int cnt=1;
//     while(cnt<position-1){
//         temp= temp->next;
//         cnt++;
//     }

//     if(temp->next== NULL){
//         insertAtTail(tail, d);
//         return ;
//     }

//     node* nodetoinsert= new node(d);
//     nodetoinsert->next= temp->next;
//     temp->next= nodetoinsert;
// }

// void deletion(node* &head, int position){
//     if(position==1){
//         node* temp= head;
//         head= head->next;
//         //memeory free
//         temp->next= NULL;
//         delete temp;

//     }
//     else{
//         node* current= head;
//         node* previous= NULL;

//         int cnt=1;
//         while(cnt<position)
//         {
//             previous = current;
//             current= current-> next;
//             cnt++;
//         }

//         previous->next= current->next;
//         current->next= NULL;
//         delete current;

//     }
// }

// void print(node* &head){
//     node* temp= head;
//     while(temp!=NULL){
//         cout<<temp-> data<<" ";
//         temp= temp->next;
//     }

//     cout<<endl;
// }

// void search(node* &head, int data){
//     if(head==NULL){
//         cout<<"empty"<<endl;
//     }
//     else{
//         int flag=0;
//         node* temp= head;
       
//         while(temp!=NULL){
            
//             if(temp->data==data){
//                 cout<<"value is present at "<<cnt<<endl;
                
//                 flag=1; 
//             }
//             temp= temp-> next;
    
//         }
//         if(flag==0){
//             cout<<"not present"<<endl;
//         }
//     }

// }
// int main(){ 
//      int op,se, po, de;
//     int no;
//     node* node1= new node(100);
    
//     node* head= node1;
//     node* tail= node1;
//     insertAtHead(head, 200);
//     insertAtHead(head, 300);
//     print(head);

    
   
//     cout<<"enter the operation you want to perform: "<<endl;
//     cin>>op;
//     switch(op){
//         case 1:{

        
    
//     cout<<"enter the element you want to insert: "<<endl;
//     cin>>no;

//     cout<<"enter the position: "<<endl;
//     cin>>po;
//     insertAtPost(tail, head, po, no);
//     print(head);
//     break;

//     }
//     case 2:
//     {
//       cout<<"enter the position you want to delete: "<<endl;
//       cin>>de;

//     deletion(head, de);
//     print(head);
//     break;
//     }

//     case 3:
//     {
//         cout<<"enter the element you want to find: "<<endl;
//         cin>>se;

//         search(head, se);
//         print(head);
//         break;
//     }

//     default:
//     {
//         cout<<"wrong input"<<endl;
//     }

//     }

// return 0;
// }