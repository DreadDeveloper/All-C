#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double accountbalance;
    int withdrawalamount;
    cout << "Enter the amount you wish to withdraw: ";
    cin >> withdrawalamount;
    cout << endl << "Enter the initial account balance: ";
    cin >> accountbalance;
    if((withdrawalamount + 0.5) < accountbalance)
    {
        if(withdrawalamount % 5 == 0)
        {
            cout << endl << "The remaining account balance is: " << fixed << setprecision(2) << double(accountbalance - withdrawalamount - 0.5);
        }
        else
        {
            cout << endl << "Incorrect withdrawal amount. It must be a multiple of 5." << endl;
            cout << "Account balance is: " << fixed << setprecision(2) << accountbalance << endl;
        }
    }
    else
    {
        cout << endl << "Insufficient account balance." << endl;
        cout << "Account balance is: " << fixed << setprecision(2) << accountbalance;
    }
    return 0;
}
