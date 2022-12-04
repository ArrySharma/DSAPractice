#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cin >> n;
    // int i = 1;
    // int counter = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int counter = i;

    //     while (j <= i)
    //     {

    //         cout << " " << counter;
    //         j++;
    //         counter = counter - 1;
    //     }
    //     cout << endl;
    //     i++;



        int n;
        cin >> n;
        int i = 1;

        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << " " << i - j + 1;
                j++;
            }
            i++;
            cout << endl;
        }
    }
