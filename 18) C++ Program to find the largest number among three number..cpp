#include <iostream>
using namespace std;

int main() 
{
  int num1, num2, num3;
  
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin>> num2;
  cout << "Enter second number: ";
  cin>>num3;

  if (num1>=num2 && num1>=num3) 
  {
    cout << num1 << " is the largest number." << endl;
  }
  
  if (num2>=num1 && num2>=num3) 
  {
  	  cout << num2 << " is the largest number." << endl;
  }
  
  if(num3>=num1 && num3>=num2) 
  {
  	  cout << num3 << " is the largest number." << endl;
  }

  return 0;
}

