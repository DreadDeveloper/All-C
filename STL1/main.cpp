#include <iostream>
#include <array>
using namespace std;
int main()
{
    std :: array <int, 5> myarray;
    myarray.fill(0); //Initializes the array
    for(int i = 0; i < 5; i++)
    {
        cout << myarray[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }
    cout << myarray.at(2) << endl; //Throws an exception if out of bounds;
    cout << myarray[2] << endl;
    cout << myarray.front() << endl;
    cout << myarray.back() << endl;
    cout << myarray.data() << endl;; //Gives the address of the array elements
    return 0;
}
