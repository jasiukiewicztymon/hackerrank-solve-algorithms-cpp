#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int h , m , s;
    string str;
    char temp;
    cin >> h >> temp >> m >> temp >> s >> str;   
        
    if(str=="PM" && h!=12) h = h+12;
    if(str=="AM" && h==12) h = 0;
    if (h < 10) { cout << "0" << h << ":"; }
    else { cout << h << ":"; }
    if (m < 10) { cout << "0" << m << ":"; }
    else { cout << m << ":"; }
    if (s < 10) { cout << "0" << s; }
    else { cout << s; }
    return 0;
}
