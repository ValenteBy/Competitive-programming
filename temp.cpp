#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG" << endl;
#define PRINT(x) cout << x << endl;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    int n, m;
    vector<ll> ticket;
    vector<ll> maxprice;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ticket.push_back(x);
    }

    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        ticket.push_back(x);
    }

    sort(ticket.begin(), ticket.end());
    sort(ticket.begin(), ticket.end());

    for(int i = 0; i < m; i++)
    {
        int value = maxprice[i];
        
        auto it = upper_bound(ticket.begin(), ticket.end(), value);

        
    }
        

    return 0;
}