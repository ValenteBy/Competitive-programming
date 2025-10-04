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
    
    llv pratos(3);
    int totalSobrando = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> pratos[i];
    }

    for(int i = 0; i < 3; i++)
    {
        int x; cin >> x;
        if(x - pratos[i] > 0)
        {
            totalSobrando += x - pratos[i];
        }
    }

    cout << totalSobrando << endl; 

    return 0;
}