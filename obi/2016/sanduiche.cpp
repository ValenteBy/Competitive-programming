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
    
    int n,d; cin >> n >> d;
    llv p;
    
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        p.pb(x);
    }

    sort(p.begin(), p.end());

    int r = 0, l = n - 1;
    int TotalAndado = 0, totalComido = 0;
    while(r<=l){
        if(totalComido + p[l] <= d){
            totalComido += p[l];
            TotalAndado++;
            l--;
        }
        else if(totalComido + p[r] <= d){
            totalComido += p[r];
            TotalAndado++;
            r++;
        }
        else{
            break;
        }
    }

    if(totalComido == d){
        cout << TotalAndado;
    }else
        cout << 0;

    return 0;
}