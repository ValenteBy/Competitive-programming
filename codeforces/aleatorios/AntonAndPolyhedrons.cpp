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
    
    int n, cont = 0; cin >> n;

    while(n--){
        string str; cin >> str;
        if(str == "Tetrahedron")
            cont += 4;
        else if(str == "Cube")
            cont += 6;
        else if(str == "Octahedron")
            cont += 8;
        else if(str == "Dodecahedron")
            cont += 12;
        else if(str == "Icosahedron")
            cont += 20;
    }
    PRINT(cont);
    return 0;
}