#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int size; cin >> size;
    vector<int> Notes(size);
    for (int i = 0; i < size; i++) {
        cin >> Notes[i];
    }
    
    for (int i = 0; i < size; i++) {
        int n = Notes[i] / 10; n *= 10;
        int num = Notes[i] - n;
        
        if (num >= 3 && num <= 4) { num = 5; }
        else if (num >= 8 && num <= 9) { num = 10; }
        
        if (num+n < 40) 
            cout << Notes[i] << endl;
        else 
            cout << num+n << endl;
    }
    
    return 0;
}
