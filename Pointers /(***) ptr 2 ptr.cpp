#include <bits/stdc++.h>
using namespace  std;
#define test int t; cin>>t; while(t--)

void fast(){ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);}

int ***create(int n,int m ,int l)
{
  int ***ptr3d = new int **[n];
  for(int i=0;i<n;++i)
  {
      ptr3d[i] = new int *[m];
      for(int j=0;j<m;++j)
      {
        ptr3d[i][j] = new int[l];
        for(int k=0;k<l;++k)
          ptr3d[i][j][k] = (i+1)*(j+1)*(k+1);
      }
  }
  return ptr3d;
}

void print(int ***arr , int n , int m , int l)
{
  for(int i=0 ; i<n ; ++i)
    {
      cout << "Slice " << i + 1 << ":\n";
      for(int j=0;j<m;++j)
        {
           for(int k=0;k<l;++k)
            cout << arr[i][j][k] << " ";
          cout << "\n";
        }
      cout << "\n";
    }
}

void free(int ***arr , int n , int m) // Deallocation
{
  for (int i = 0; i < n; ++i) 
  {
    for (int j = 0; j < m; ++j)
        delete[] arr[i][j];
    delete[] arr[i];
  }
  delete[] arr;
}

void solve ()
{
  int n,m,l; cin>>n>>m>>l; 
  int ***ptr3d = create(n,m,l);
  print(ptr3d,n,m,l);
  free(ptr3d,n,m);
}

int main() 
{
  fast(); 
  //test 
  solve();
}
