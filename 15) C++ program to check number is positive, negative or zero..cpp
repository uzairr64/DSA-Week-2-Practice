#include <iostream>
#include<conio.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin>>num;
    if (num > 0) 
	{
        cout << "Positive number";
    } 
	else
	{ 
		if (num < 0) 
		{
   			 cout << "Negative number" << std::endl;
   		} 
		else 
		{
    	    cout << "Zero" << std::endl;
   		}
	}
    getch();
}

