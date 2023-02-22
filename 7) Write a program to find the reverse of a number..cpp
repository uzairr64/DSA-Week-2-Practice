#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
  int num, reverse=0;
  
  cout<<"Enter a number: ";
  cin>>num;

  while (num != 0) 
  {
		reverse=reverse*10+num%10;
    	num=num/10;
  }

	cout << "The reverse of the number is: " << reverse;

  getch();
}

