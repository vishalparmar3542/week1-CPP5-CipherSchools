#include<iostream>
using namespace std;
int findsum (int a, int b)
{
    return a + b;
}
int main()
{
    int i, j;
    cin >> i >> j;
    int sum = findsum(i,j);
    cout << "\n sum is  : "<<sum;
    return 0;
}