/*
Tack input of array from user. After that print all individual elements. and check if any element repeating or not, if yes print that element along with number of occurrence it from the given input
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int i,j, num[5];
   cout<< "Enter number of elements:"<< endl;
   for (int i = 0; i < 5; i++)
   {
      cin>> num[i];
   }
   cout << "Numbers is :"<< endl;
   for ( int i = 0; i < 5; i++)
   {
    cout<< num[i];
    cout<<endl;
   }
   cout << "Repeating element is :"<< endl;
   for ( int i = 0; i < 5; i++)
   {
   for ( j = i+1; j < 5; j++)
   {
    if (num[i]==num[j])
    {
       cout << num[j] << endl ;
    }
    
   }
   
   }
   
   
   
   

}
