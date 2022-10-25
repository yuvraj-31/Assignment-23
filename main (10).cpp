/*****************************************************************************
10. Write a C++ program to add all the numbers of an array of size 10.. 
*******************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{   
    int arr[10];
    int sum=0;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
        
    }
   
    cout<<"sum is "<<sum;
   
   
  
    return 0;
}
