// Program to perform Square root of any positive number.
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    
   float a;    //variable
  
   
   cout<<"Enter A number to perform square root: ";    //command to user

  cin>>a;  //input from user

 float result= sqrt(a);    //applying built in function

// if else statement to handel error

  if(a<0){
      cout<<"inviled number or imaginary number";
  }
  else{
      cout<<"square root is: "<<result<<"\n";//for output
  }
 
   
   
   
    return 0;
}
