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

const int infinito = 1e9 + 7;
const int maxn = 2 * 1e5 + 7;

signed main(){ _
    
    int n, a[maxn]; cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int soma = 0;
    int resp = infinito * -1;

    for(int i = 1; i <= n; i++){
        if(soma < 0)
            soma = 0;
        soma+=a[i];
        resp = max(resp, soma);
    }
    
    PRINT(resp);

    return 0;
}