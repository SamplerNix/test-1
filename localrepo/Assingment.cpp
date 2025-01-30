#include <iostream>
using namespace std;
int fib(int x)
{
    while (x >= 0)
    {
        return fib(x - 1) + (x - 2);
        x++;
    }
}
int sum(int num)
{
    int lastsum = 0;
    while (num > 0)
    {
        int dig = num % 10;
        num = num / 10;
        lastsum = lastsum + dig;
        // int sumdig=lastsum;
    }
    return lastsum;
}
int pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
int triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}
int find(int arr[], int sz)
{
    int search;
    cout << "Enter the search: ";
    cin >> search;
    for (int i = 0; i <= sz; i++)
    {
        if (search == arr[i])
        {
            // cout<<i<<"\n";
            return i;
        }
    }
    cout << "Number is not present" << "\n";
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // cout << fib(5);
    cout << find(arr, sz);
    return 0;
}
//     for (int i = 1; i <=5; i++)
//     {
//         for (int j = 5; j >= i; j--)
//         { // we using j<=i because the inner loop only that time it satisfy the value //
//             cout << "*" << " ";
//         }
//         cout << "\n";
//     }
