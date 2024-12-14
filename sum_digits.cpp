#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, sum = 0;
  cin >> n;
  string a;
  cin >> a;
  for (int i = 0; i < n;i++)
  {
    sum += a[i] - '0';
  }
  cout << sum << endl;
  return 0;
}