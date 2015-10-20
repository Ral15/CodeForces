#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main (){

  int n, max, i, x, num, value;
  cin >> n;
  vector<int> house(n);
  for (i = 0; i < n; i ++){
    cin >> x;
    house[i] = x;
  }

  for (i = 0; i <= n; i ++){
    if (house[i] < house[i + 1])
      max = house[i +1];
  }

  for (i = 0; i < n; i ++){
    if (house[i] == max)
      house[i] = 0;
    if (house[i] )


  }

  return 0;
}
