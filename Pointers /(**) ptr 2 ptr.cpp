#include <bits/stdc++.h>
using namespace  std;
#define test int t; cin>>t; while(t--)

void fast(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

int **create(int n,int m)
{
  int **ptr2d = new int *[n];
  for(int i=0;i<n;++i)
  {
    ptr2d[i] = new int[m];
    for(int j=0;j<m;++j)
      ptr2d[i][j] = (i+1)*(j+1); 
  }
  return ptr2d;
}

void print(int **arr , int n , int m)
{
  for(int i=0 ; i<n ; ++i)
    {
      for(int j=0;j<m;++j)
        cout << arr[i][j] << " ";
      cout << "\n";
    }
}

void free(int **arr , int n)
{
  for(int i=0;i<n ;++i)delete [] arr[i];
  delete [] arr;
}

void solve ()
{
  int n,m; cin>>n>>m; 
  int **ptr2d = create(n,m);
  print(ptr2d,n,m);
  free(ptr2d,n);
}

int main() 
{
  fast(); 
  //test 
  solve();
}
