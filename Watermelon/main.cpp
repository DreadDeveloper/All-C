#include <iostream>
using namespace std;
void melon()
{
    int weight;
    cin >> weight;
    if(weight >= 4 && weight % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    melon();
    return 0;
}
