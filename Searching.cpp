#include<bits/stdc++.h>
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
  int key;
  cin >> key;
  bool found = false;
  for (int i = 0; i < n;i++)
  {
    if (a[i]==key)
    {
      cout <<i<< endl;
      found = true;
      break;
    }
  
  }
  if(!found)
    {
      cout << "-1" << endl;
    }
  return 0;
}