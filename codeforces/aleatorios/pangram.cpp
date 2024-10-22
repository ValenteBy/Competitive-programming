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
    set<char> alfa;

    while(n--){
        char l; cin >> l;
        l = tolower(l);
        alfa.insert(l);
    }

    if(alfa.size() == 26)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}