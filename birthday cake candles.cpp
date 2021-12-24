#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    
    vector<int> Arr(size);
    for (int i = 0; i < size; i++) {
        cin >> Arr[i];
    }
    
    bool bV;
    int temp;
    int max = Arr[0];
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (Arr[i] > max) {
            max = Arr[i];
            count = 0;
        }
        if (Arr[i] == max)
            count++;
    }
    
    cout << count;
    return 0;
}
