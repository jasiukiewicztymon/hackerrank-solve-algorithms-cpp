#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    vector<int> Arr(n);

    for(int i = 0; i < n; i++)
    {
       cin >> Arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        sum+=Arr[i];
    }
    cout<<sum;
    return 0;
}
