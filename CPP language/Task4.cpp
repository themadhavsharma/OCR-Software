#include <iostream>
using namespace std;

class STACK{
   int top= -1;
   int MAX_SIZE= 50;
   int STK[50];
   public:
   void PUSH(){
      int item;
      cout<<"enter the element to insert: "<<endl;
      cin>>item;
      if(top==MAX_SIZE){
         cout<<"OVERFLOW"<<endl;
      }
      else{
         top++;
         STK[top]= item;
      }
   }
   void POP(){
      int temp;
      if(top==-1){
         cout<<"UNDERFLOW"<<endl;
      }
      else{
         temp= STK[top];
         top--;
      }
      for(int i=0; i<=top; i++){
         cout<<STK[i]<<" ";
      }
      cout<<endl;
   }

   void PEEK(){
      if(top==-1){
         cout<<"UNDERFLOW"<<endl;
      }

      else{
         cout<<STK[top]<<endl;
      }

   }

   void DISPLAY(){
      for(int i=0; i<=top; i++){
         cout<<STK[i]<<" ";
      }
      cout<<endl;
   }
};
int main(){ 
   STACK S1;
   int item;
   int op;
   abc:
   cout<<"enter the operation to be performed: ";
   cin>>op;
   switch(op){
      case 1:{
         S1.PUSH();
         goto abc;      
      }

      case 2:{
         S1.POP();
         goto abc;
      }
      case 3:{
         S1.PEEK();
         goto abc;
      }
      case 4:{
         S1.DISPLAY();
         goto abc;
      }
      default:{
         cout<<"WRONG INPUT"<<endl;
      }
   }
   
     

return 0;
}