#include <iostream>
using namespace std;
int main() {
  int a[]={9,8,1,2,0};
  //assuming the sum be 10
  for(int i=0;i<4;i++)
  {
    for(int j=i+1;j<5;j++)
  {
    if(a[i]+a[j]==10)
    {
      cout<<a[i]<<"&"<<a[j]<<" are the pairs\n";
    }
  }
  }
  return 0; 
}
