#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}



int transitionPoint(int arr[], int n) {
    int count = 0;
    int i =0;
    while (arr[i] == 0) 
    {
        count += 1;
        i += 1;
    }
    if (count == n) 
    {
        count = -1;
    }
        return count;
}
