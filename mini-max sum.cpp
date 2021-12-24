#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    long long Arr[5], total;
    for (int i = 0; i < 5; i++) {
        cin >> Arr[i];
        total += Arr[i];
    }
    
    vector<long long> V;
    for (int i = 0; i < 5; i++) {
        V.emplace_back((total - Arr[i]));
    }
    
    long long Max = *max_element(V.begin(), V.end());
    long long Min = *min_element(V.begin(), V.end());
    
    cout << Min << " " << Max;
    
    return 0;
}
