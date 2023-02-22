#include <iostream>
#include<conio.h>
using namespace std;

int main() 
{
  	int n,i,f=1;
  	cout<<"enter a number ";
  	cin>>n;
  	
	for(i=n ; i>=1 ; i--)
  	{
    	f= f*i;
  	}
cout << "\nThe factorial of the number is: " << f;
getch();
}
