// https://www.hackerrank.com/challenges/a-very-big-sum/problem

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; ++i)
    {
        long long a;
        cin >> a;
        sum += a;
    }
    cout << sum;
}