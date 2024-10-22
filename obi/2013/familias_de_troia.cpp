#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
#define DEBUG(x) cout << x << endl;
#define MAXN 50050
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int n, m;
int componente[MAXN] = {0};
llv lista[MAXN];
int componentesQtd = 0;

void dfs(int x){
    for(int i = 0; i < (int)lista[x].size(); i++){

        int v = lista[x][i];

        if(componente[v] == -1){
            componente[v] = componente[x];
            dfs(v);
        }
    }
}

signed main(){ _
    
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        componente[i] = -1;
    }

    for(int i = 1; i <= m; i++){
        int u, v; cin >> u >> v;
        lista[u].pb(v);
        lista[v].pb(u);
    }

    for(int i = 1; i <= n; i++){

        if(componente[i]==-1){
            componentesQtd++;
            componente[i] = componentesQtd;
            dfs(i);
        }      
    }

    cout << componentesQtd;

    return 0;
}