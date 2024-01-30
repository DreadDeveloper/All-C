#include <iostream>
using namespace std;
int main()
{
    int arr[5][5], i, j, c = 0;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    if(arr[2][2] != 1)
    {
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if(arr[i][j] == 1)
                {
                    if(j < 2)
                    {
                        swap(arr[i][j + 1], arr[i][j]);
                        c++;
                    }
                    else if(j > 2)
                    {
                        swap(arr[i][j - 1], arr[i][j]);
                        c++;
                    }
                    if(i > 2)
                    {
                        swap(arr[i - 1][j], arr[i][j]);
                        c++;
                        if(i == 4 && arr[2][2] != 1)
                        {
                            i = 0;
                        }
                    }
                    else if(i < 2)
                    {
                        swap(arr[i + 1][j], arr[i][j]);
                        c++;
                    }
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}
