#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

void sort012(int a[], int n)
{
    int x1=0, x2=0, x3=n-1;     
    while(x2<=x3)
    {
        switch(a[x2])
        {
            case 0: swap(a[x1],a[x2]);
                    x1++; x2++;
                    break;
            case 1: x2++;
                    break;
            case 2: swap(a[x2],a[x3]);
                    x3--;
                    break;
        }
    }
    
    
}
