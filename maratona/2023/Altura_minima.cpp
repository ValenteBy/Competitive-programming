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
    
    int n, alt; cin >> n >> alt;
    int cont = 0;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(x <= alt){
            cont++;
        }
    } 
    cout << cont;
    return 0;
}

