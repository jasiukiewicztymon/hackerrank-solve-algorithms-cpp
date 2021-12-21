#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long int sum=0, temp;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        sum+=temp;
    }

    cout<<sum;
    return 0;
}
