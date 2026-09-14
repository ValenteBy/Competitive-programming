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

    while(n--)
    {
        int m; cin >> m;

        string str1, str2; cin >> str1 >> str2;

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if(str1 == str2)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}