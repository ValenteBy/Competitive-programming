#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
#define PRINT(x) cout << x << endl;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _

    int n; cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> strs;

    while(n--)
    {
        int m; cin >> m;
        string str;
        getline(cin, str);
        str.erase(str.begin());

        string um, dois;

        if(m >)

        while(m--)
        {
            char salva = str.front();
    
            str.push_back(salva);
    
            str.erase(str.begin());
        }
        strs.push_back(str);
    }
    
    for(const string& str : strs)
        cout << str << endl;
    
    return 0;
}