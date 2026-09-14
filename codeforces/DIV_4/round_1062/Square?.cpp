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
    int i; cin >> i;

    while(i--){

        int valAnt = -1, cont = 0;
        for(int i = 0; i < 4; i++)
        {
            int x; cin >> x;
            if(valAnt == -1)
            {
                cont++;
                valAnt = x;
            }

            else if(x == valAnt)
            {
                cont++;
            }
        }
        
        if(cont == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}