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

int componentes[MAXN];
llv listas[MAXN];
int n, d;

void dfs(int x){

    for(int i = 0; i < (int)listas[x].size(); i++){
        int v = listas[x][i];

        if(componentes[x] == -1){
            componentes[v] = componentes[x];
            dfs(v);
        }
    }
}

signed main(){ _
    
    cin >> n >> d;

    for(int i = 1; i <= n; i++){
        componentes[i] = -1;
    }

    int comp = 0;
    for(int i = 1; i <= n; i++){
        int a,b; cin >> a >> b;
        int menor = min(a,b);
        int maior = max(a,b);
        if(a != b){
            listas[a].pb(b);
            listas[b].pb(a);
            if(maior - menor > d){
                cout << "N";
                return 0;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        if(componentes[i] == -1){
            comp++;
            componentes[i] = comp;
            dfs(1);
        }
    }
    DEBUG(comp);
    if(comp==1)
        cout << "S";
    else
        cout << "N";

    return 0;
}