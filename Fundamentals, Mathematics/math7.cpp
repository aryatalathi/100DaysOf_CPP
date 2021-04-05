#include<iostream>
using namespace std;
int main()
{
//code
    int T;
    cin >> T;
    while(T--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n ;
        int num = n-3, sum = 0;
        while(num--)
        {
            sum=a+b+c;
            a = b ;
            b = c ;
            c = sum ;
        }
        cout << sum << endl;
    }
    return 0;
}
