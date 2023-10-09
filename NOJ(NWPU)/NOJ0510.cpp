/*
题目内容：有一个N（1≤N≤100）个元素的数组A，按由小到大顺序存放。请编写程序，输入一个数m，用二分查找法找出该数在数组中的位置（即数组的下标）。如果该数不在数组中，则输出null。
输入格式：第1行输入n，第2行输入n个已排好序的数组元素，数据之间用空格分隔。第3行输入m。
输出格式：若找到输出它数组的下标，否则输出null
输入样例：
15
1 4 9 13 21 34 55 89 144 233 377 570 671 703 812
34
输出样例：
5
*/
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
