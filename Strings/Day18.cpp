#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    vector<int> ar(26,0);
	    int n=s.length(),c=0;
	    for(int i=0;i<n;i++) {
	        if(ar[int(s[i])-97]==1)
	            c++;
	        else
	            ar[int(s[i])-97]=1;
	    }
	    cout<<c<<endl;
	    
	}
	return 0;
}
