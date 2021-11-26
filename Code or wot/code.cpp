#include <bits/stdc++.h>
using namespace std;

void Mahasena(int arr[], int n){
  int even = 0, odd = 0;
  for (int i = 0; i < n; ++i)
  {
    if(arr[i] % 2 == 0)
      even++;
    else 
      odd++;
  }
  if(even > odd)
    cout << "READY FOR BATTLE";
  else
    cout << "NOT READY";
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 1; i < n; ++i)
  {
      cin >> arr[i];
  }
  Mahasena(arr, n);
}