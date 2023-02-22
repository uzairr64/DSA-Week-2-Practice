
  		//Can you check whether a number is prime or not

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number : ";
	cin>>num;
	
	if(num%num==0)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not";
	}
	getch();
}
