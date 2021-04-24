#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    string caseSort(string str, int n){
        string lowerCase = "";
        string upperCase = "";
        string res = "";
        for(int i=0; i<n; i++)
        { 
            if(str[i]>='a' && str[i] <= 'z')
            {
                lowerCase += str[i];
            }
            else
                upperCase += str[i];
        }
        sort(lowerCase.begin(), lowerCase.end());
        sort(upperCase.begin(), upperCase.end());

        int j=0;
        int k = 0;
        for(int i=0; i<n; i++)
        {
            if(str[i]>= 'a' && str[i] <= 'z')
            {
                res += lowerCase[j];
                j++;
            }
        else
        {
            res += upperCase[k];
            k++;
        }
        }
        return res;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
} 
