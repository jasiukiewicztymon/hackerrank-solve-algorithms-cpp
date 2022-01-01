#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[3], b[3];
    int pointA = 0, pointB = 0;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
        
        if (a[i] > b[i])
            pointA++;
        else if (b[i] > a[i])
            pointB++;
    }
    
    cout << pointA << " " << pointB;
    return 0;
}
