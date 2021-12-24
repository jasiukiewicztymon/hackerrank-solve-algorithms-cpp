#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int size, temp;
    double zero = 0, minus = 0, plus = 0;
    cin>>size;
    
    for (int i = 0; i < size; i++) {
        cin>>temp;
        if (temp < 0)
            minus++;
        else if (temp > 0)
            plus++;
        else 
            zero++;
    }
    
    zero /= size;
    minus /= size;
    plus /= size;
    cout << fixed << setprecision(6);
    
    cout << plus << endl << minus << endl << zero;
    
    return 0;
}
