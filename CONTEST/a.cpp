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
    
    int t; cin >> t;

    int k = 0;
    int i = 1;
    while(t--){
        int n; cin >> n;
        int sinal = 1;
        while(abs(k) <= n){
            sinal *= -1;
            int x = ((2*i) - 1) * sinal;
            k += x;
            i++;
        }
        if(sinal == -1){
            PRINT("Sakurako");
        }else{
            PRINT("Kosuke");
        }
    }

    return 0;
}