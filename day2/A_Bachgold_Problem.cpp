#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
cout<<n/2<<endl;
 int val = n;
    for(int i=1;i<n/2;i++) {
        cout<<2<<" ";
        val-=2;
    }
    cout<<val<<endl;


    return 0;
}