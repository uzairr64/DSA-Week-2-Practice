#include <iostream>
using namespace std;

int main() 
{
    int days, years, weeks, rem;
    
    cout << "Enter number of days: ";
    cin >> days;
    
    years = days/365;
    weeks = (days%365)/7;
    rem = (days%365)%7;
    cout << days << " days = " << years << " years, " << weeks << " weeks, and " << rem<< " days." << endl;
    return 0;
}

