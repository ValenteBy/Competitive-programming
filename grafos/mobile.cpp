#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
#define PRINT(x) cout << x << endl;
#define MAXN 100005
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int n;
int componentes[n];
llv lista[MAXN];
vector<vector<int>> resultado; 
bool tf = true;

void dfs(int x){
    llv val;
    for(int i = 0; i < (int)lista[x].size(); i++){
        int v = lista[x][i];
        if(componentes[v] == -1){
            componentes[v] = componentes[x];
            int t = dfs(v);
        }
    }
    return 
}

signed main(){ _
    
    cin >> n;
   
    for(int i = 0; i < n; i++){
        int i, j; cin >> i >> j;
        lista[i].pb(j);
    }



    return 0;
}