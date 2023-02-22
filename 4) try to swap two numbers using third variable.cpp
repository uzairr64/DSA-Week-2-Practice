
		//try to swap two numbers using third variable

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1, num2, temp;
	cout<<"enter first number :";
	cin>>num1;
	
	cout<<"enter second number :";
	cin>>num2;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"\nAfter Swapping :\n"<<"\nFirst number : "<<num1<<"\n"<<"Second number : "<<num2;
	getch();
}
