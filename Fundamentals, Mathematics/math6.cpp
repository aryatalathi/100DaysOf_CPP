#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a, i, j, sum=0, lim;
        cin>>a;
        lim  = sqrt(a);
        for(i=2;i<=lim;i++)
        {
            if(a%i==0) 
            {
                sum += i;
                if (i != (a / i))  sum += a/i;
            } 
        }
        if(a > 1) sum += 1;
        if(sum==a)
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}
