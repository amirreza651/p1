/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
    using namespace std;
int main()
{
  int i; 
  cout<< "please enter numbers : ";
  int posetive ;
  int negative ;
  int zero ;
  for(i=1; i<50; i++){
      cin >> i;
      if(i >0){
    posetive++;
 cout << " posetive : "<<posetive;
  }
  else if(i<0){
  negative++;
  cout<<"negative : "<<negative;
  }
  else if (0==0){
  zero++;
  cout<<"zeros : "<<zero;
  }
  } 
 

}

