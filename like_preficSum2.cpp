#include<bits/stdc++.h>
using namespace std;
/*
N
A1 A2 A3…….AN
Q
L1  R1
L2  R2

Sample input:
6
1 2 3 4 5 6
3
1 3
4 6
2 4

Sample output:
4
11
3

*/
void findPrefex(int arr[],int L,int R,int q)
{
 int sum =0;
  for(int i= L-1; i<R; i++){
   if(arr[i]>=0){
     cout<<"i= "<<arr[i]<<endl;
     sum+=arr[i];
   }
  }
  cout<< sum<<endl;
}
int main()
{
 int n=6;
 int arr[n]={1,-2,3,-4,5,6};

 int q=3;
 int L,R;
 for(int i=1; i<=q; i++)
 {
   cin>>L>>R;
   findPrefex(arr,L,R,q);

 }

 return 0;
}
