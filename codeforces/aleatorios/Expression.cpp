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
    
    llv v(3);

    for(int i = 0; i < 3; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    if(v[0]==1 and v[1]==1 and v[2]==1){
        PRINT((v[0] + v[1]) + v[2]);
    }else if(v[0] == 1){
        PRINT((v[0] + v[1]) * v[2]);
    }else{
        PRINT((v[0] * v[1]) * v[2]);
    }
    
    return 0;
}