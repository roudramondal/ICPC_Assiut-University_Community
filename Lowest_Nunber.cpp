#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n;i++)
  {
    cin >> a[i];
  }
  int min = a[0];
  int position = 1;

  for (int i = 0; i < n;i++)
  {
   if (a[i]<min)
   {
    min = a[i];
    position = i +1;
   }
  }
   cout << min<<" "<<position<< endl;

  return 0;
}