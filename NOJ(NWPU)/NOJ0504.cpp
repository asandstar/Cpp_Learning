#include <iostream>
#include <iomanip>
using namespace std;
double avg(int A[], int s, int e)
{
    int i, sum;
    sum = 0;
    double avg = 0;
    for (i = s; i <= e; i++)
        sum = A[i] + sum;
    avg = sum * 1.0 / (e - s + 1);
    return avg;
}
int main()
{
    int n, i, s, e;
    cin >> n;
    int *A = new int[n];
    for (i = 0; i < n; i++)
        cin >> A[i];
    cin >> s >> e;
    cout << fixed << setprecision(6) << avg(A, s, e);
    delete[] A;
    return 0;
}