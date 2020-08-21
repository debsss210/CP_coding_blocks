#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float per = 1.0;
    // per denotes the probality of 2 people having same birthday

    int person = 0;
    float num = 365;
    float den = 365;

    float perChoice;
    cout << "Enter the float for having same birthday : ";
    cin >> perChoice;

    if (perChoice == 1)
    {
        cout << "366 : 100%" << endl;
        return 0;
    }

    while ((1 - per) <= perChoice)
    {
        per *= (num - person) / den;
        person++;
    }

    cout << person << " : " << (1 - per) * 100 << "%" << endl;
    return 0;
}