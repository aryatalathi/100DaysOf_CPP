#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int findAngle(int hour, int min)
{
    int h = (hour * 360) / 12 + (min * 360) / (12 * 60);
    int m = (min * 360) / (60);
    int angle = abs(h - m);

    if (angle > 180) 
	{
        angle = 360 - angle;
    }
    return angle;
}
 
int main()
{
	int t;
    int hour;
    int min;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
    	cin>>hour;
		cin>>min;
    	cout << findAngle(hour, min)<<endl;
    }
    return 0;
}
