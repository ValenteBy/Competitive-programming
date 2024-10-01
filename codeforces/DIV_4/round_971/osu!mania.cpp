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

    for(int k = 0; k < n; k++){
        
        int t; cin >> t;
        llv ans;

        for(int i = 0; i < t; i++){
            for(int j = 1; j <= 4; j++){
                char x; cin >> x;
                if(x == '#'){
                    ans.pb(j);
                }
            }
        }

        for(int i = t - 1; i >= 0; i--){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}