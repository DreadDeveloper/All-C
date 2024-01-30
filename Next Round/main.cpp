#include <iostream>
using namespace std;
int main()
{
    int n, k, i = 0, c = 0;
    cin >> n >> k;
    int arr[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            if(i < k)
            {
                c++;
            }
            else if(arr[i] == arr[k - 1])
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}
