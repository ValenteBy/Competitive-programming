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
    
    set<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        nums.insert(x);
    }

    cout << nums.size();

    return 0;
}