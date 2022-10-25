/*****************************************************************************
8. Write a C++ program to swap values of two int variables without using third variable
*******************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{   
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
   
    
    cout<<"after swapping "<<n1<<" "<<n2<<endl;
  
    return 0;
}
