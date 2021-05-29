using namespace std;

string validString(string str)
{
    int count0 = 0;
    int count1 = 0;
    
    for(auto x: str)
    {
        if(x == '0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
        
        if(count0 < count1)
        {
            return "no";
        }
    }
    
    return (count0 == count1) ? "yes" : "no";
}

int main()
{
    
    
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        
        string str;
        cin >> str;
        
        cout << validString(str) << "\n";
    }
    
    return 0;
}