#include <iostream>
using namespace std;
int main()
{
    int n, i, c = 0, solution = 0;
    cin >> n;
    int arr[n][3];
    while(n--)
    {
        for(i = 0; i < 3; i++)
        {
            cin >> arr[n][i];
            if(arr[n][i] == 1)
                c++;
        }
        if(c >= 2)
            solution++;
        c = 0;
    }
    cout << solution << endl;
    return 0;
}
