#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = n; i > 0; --i){
        for(int j = 0 ; j < i - 1; ++j){
            cout<< " ";
        }
        for(int k = i - 1; k < n; ++k){
            cout<< "#";
        }
        cout<<endl;
    }
    return 0;
}
