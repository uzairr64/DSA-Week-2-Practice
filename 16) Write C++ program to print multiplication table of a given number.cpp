#include <iostream>
#include<conio.h>

using namespace std;

int main() 
{
    int num,i;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":\n";
    
	for(i=1; i<=10; i++) {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    return 0;
}

