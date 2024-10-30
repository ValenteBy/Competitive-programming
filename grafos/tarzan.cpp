#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
#define PRINT(x) cout << x << endl;
#define MAXN 50050
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int componentes[MAXN] = {-1};
llv lista[MAXN];
int cont = 0;

void dfs(int x){
    for(int i = 0; i < (int)lista[x].size(); i++){
        int v = lista[x][i];
        if(componentes[v] == -1){
            componentes[v] = componentes[x];
            //PRINT(v);
            dfs(v);
        }
    }
}

signed main(){ _
    
    int n, d; cin >> n >> d;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if(abs(x - y) <= d){
            lista[x].pb(y);
            lista[y].pb(x);
        }
    }

    for(int i = 1; i <= n; i++){
        if(componentes[i] == -1){
            cont++;
            componentes[i] = cont;
            dfs(i);
        }
    }
    PRINT(cont);
    if(cont){
        cout << "S";
    }else
        cout << "N";

    return 0;
}