#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    int d, c ,r; cin >> d >> c >> r; 
    llv boas(c);
    int cont = r;

    for(int i = 0; i < c; i++){
        int x; cin >> x;
        boas[i] = x;
    }

    for(int i = 0; i < r; i++){
        int x; cin >> x;
        d += x;
    }

    for(int i = 0; i < c; i++){
        if(d - boas[i] >= 0){
            d-=boas[i];
            cont++;
        }
        else{
            break;
        }
    }
    cout << cont;

    return 0;
}

