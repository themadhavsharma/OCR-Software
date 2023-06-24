#include <iostream>
using namespace std;

int swap(int n1, int n2){
   int temp=0;
   temp=n1;
   n1= n2;
   n2= temp;
   return n1, n2;
}
int main(){ 
    int arr[6]= {1,2,3,4,5,6};
    cout<<"The given array is: ";
    for(int i=0; i<5; i++) {
      cout<<arr[i]<<" ";
    }
    int a, temp=0, n1=0, n2=1;

    int n=6;
    if(n%2==0){
      a=n/2;
    }
    else if(n%2!=0){
      a=(n-1)/2;
    }
    

    for(int j=0; j<a; j++)
    {
      int a1= arr[n1];
      int a2= arr[n2];
      
      swap(a1, a2);
      cout<<a1<<", "<<a2<<endl;
      a1=a1+2;
      a2= a2+2;

      
    }

return 0;
}