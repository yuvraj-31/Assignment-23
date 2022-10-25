/*****************************************************************************
 *Write a C++ program to calculate the volume of a cuboid.
*******************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{   
    int l,b,h;
    cout<<"Enter length"<<endl;
    cin>>l;
    cout<<"Enter breadth"<<endl;
    cin>>b;
    cout<<"Enter height"<<endl;
    cin>>h;
    
    cout<<"volume of the cuboid is "<<l*b*h<<endl;
  
    return 0;
}
