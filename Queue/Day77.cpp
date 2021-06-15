#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        sort(arr, arr+n);
        long long num1 = 0;
        long long num2 = 0;
         
        for(int i=0; i<n; i++)
        {
            if (i % 2 == 0)
                num1 = num1 * 10 + arr[i];
            else
                num2 = num2 * 10 + arr[i];
         
        }
        return (num2 + num1);
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
/* USING QUEUE
int minSum(int arr[], int n)
{
    // min Heap
    priority_queue <int, vector<int>, greater<int> > pq;
 
    // to store the 2 numbers formed by array elements to
    // minimize the required sum
    string num1, num2;
 
    // Adding elements in Priority Queue
    for(int i=0; i<n; i++)
        pq.push(arr[i]);
 
    // checking if the priority queue is non empty
    while(!pq.empty())
    {
        // appending top of the queue to the string
        num1+=(48 + pq.top());
        pq.pop();
        if(!pq.empty())
        {
            num2+=(48 + pq.top());
            pq.pop();
        }
    }
 
    // converting string to integer
    int a = atoi(num1.c_str());
    int b = atoi(num2.c_str());
 
    // returning the sum
    return a+b;
}*/
