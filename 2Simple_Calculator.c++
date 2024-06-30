#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"\n`````````````````````````````````````````\n";
    cout << "!!!!!!!WELCOME TO CALCULATE ME!!!!!!";
    cout<<"\n`````````````````````````````````````````\n";
    cout << " \n enter the two numbers to be calculated: ";
    cin >> a >> b;
    cout << "\n Select 1 for addition \n select 2 for subtraction \n select 3 for multiplication \n select 4 for division";
    cout << "\n select the operation: ";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "The sum of the entered numbers is : " << (a + b);
        break;
    case 2:
        cout << "The difference of the entered numbers is : " << (a - b);
        break;

    case 3:
        cout << "The product of the entered numbers is : " << (a * b);
        break;

    case 4:
        cout << "The division of the entered numbers is : " << (a / b);
        break;
    default:
        cout << "!!!Error!!!  Please recheck your choice";
    }
    return 0;
}