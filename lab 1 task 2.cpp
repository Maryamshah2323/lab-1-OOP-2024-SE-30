#include<iostream>
#include "rectangle.h"
using namespace std;


int main() 
{
    Rectangle r;
    
    // Set dimensions
    r.setDimensions();
  cout<<"area"<<r.area()<<endl;
   cout<<"perimeter"<<r.perimeter()<<endl;

    return 0;
}
