#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    int n; cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;
        int men = min(a,b);
        int maior = max(a,b);
        cout << maior - men << endl;
    }
    
    return 0;
}