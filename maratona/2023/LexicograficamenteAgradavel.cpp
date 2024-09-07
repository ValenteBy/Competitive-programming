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
    
    string str; cin >> str;
    int k; cin >> k;
    vector<vector<char>> show(k);
    int i = 0;
    while(i < k){
        int cont = i;
        while(cont < str.size()){
            show[i].pb(str[cont]);
            cont += k;
        }
        i++;
    }
    
    int maior = 0;
    for(int j = 0; j < k; j++){
        sort(show[j].begin(), show[j].end());
        int t = show[j].size();
        maior = max(t, maior);
    }

    for(int t = 0; t < maior; t++){
        int ate = 0;
        while(ate < k){
            if(t < show[ate].size()){
                cout << show[ate][t];
            }
            ate++;
        }
    }

    return 0;
}
