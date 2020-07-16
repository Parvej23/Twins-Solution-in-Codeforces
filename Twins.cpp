#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n],sum1=0, sum2=0, counts=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum1+=a[i];
    }
    sum1/=2;
    sort(a,a+n);
    for(int j=n-1;j>=0;j--)
    {
        sum2+=a[j];
        counts++;
        if(sum2>sum1)
            break;
    }
    cout<<counts<<endl;
}
