#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG(x) cout << x;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    int n; cin >> n;

    while(n--){
        int p, l, totalOuro = 0, totalDeZeros = 0; cin >> p >> l;

        for(int i = 0; i < p; i++){
            int x; cin >> x;
            if(x >= l){
                totalOuro += x;
            }
            else if(x == 0 && totalOuro > 0){
                totalDeZeros++;
                totalOuro--;
                //DEBUG(i);
            }
        }

        cout << "ans: "<<totalDeZeros << endl;

        // if(totalDeZeros >= totalOuro){
        //     cout << totalOuro << endl;
        // }
        // else{
        //     cout << totalDeZeros << endl;
        // } 
    }

    return 0;
}