#include <iostream>
using namespace std;
int BinarySearch(int A[], int n, int find)
{
    int low, upper, mid;
    low = 0, upper = n - 1;
    while (low <= upper)
    {
        mid = low + (upper - low) / 2;
        if (A[mid] < find)
            low = mid + 1;
        else if (A[mid] > find)
            upper = mid - 1;
        else
            return mid;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int i, j, t;
    int *num = new int[n];
    int count = 0;
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int find, f, found;
    cin >> find;
    f = BinarySearch(num, n, find);
    if (f >= 0)
        cout << f;
    else
        cout << "null";
    return 0;
}