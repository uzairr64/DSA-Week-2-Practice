#include <iostream>
#include<conio.h>
using namespace std;

int main() 
{
    int num,org,rev=0,rem;

    cout<<"Enter a positive number: ";
    cin>>num;

    org=num;

    // reverse the number
    
    while (num!=0) 
	{
        rem=num % 10;
        rev= rev*10+rem;
        num /= 10;
    }

    // check if the number is a palindrome
    
    if (org==rev)
	{
        cout<<org<<" is a palindrome.";
    } 
	else 
	{
        cout<<org<< " is not a palindrome.";
    }
    getch();
}

