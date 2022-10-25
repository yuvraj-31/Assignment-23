/*****************************************************************************
9. Write a C++ program to find the maximum of two numbers.
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
    
   n1>n2?cout<<"max in between these two is "<<n1:cout<<"max in between these two is "<<n2;
    
   
  
    return 0;
}
