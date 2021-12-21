#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
  int N, Sum1 = 0, Sum2 = 0;
  cin >> N;
  int A[N][N];
  for (int i = 0; i < N; i++) 
  {
    for (int j = 0; j < N; j++) 
    {
      cin >> A[i][j];
      if (i == j) 
        Sum1 += A[i][j];
    }
  }
  
  for (int i = 0; i < N; i++) 
  {
    for (int j = N - 1 - i; j >= 0;) 
    {
      Sum2 += A[i][j];
      break;
    }
  }
  cout << abs(Sum1 - Sum2) << endl;
  return 0;
}
