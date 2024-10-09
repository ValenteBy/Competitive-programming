#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
// #define DEBUG(x) cout << x << endl;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    int n, t; cin >> n >> t;
    vector<char> letras(n);

    for(int i = 0; i < n; i++){
        cin >> letras[i];
    }

    while(t > 0){
        for(int i = 0; i < n - 1; i++){
            if(letras[i] == 'B' && letras[i + 1] == 'G')
            {
                swap(letras[i], letras[i + 1]);
                i++;
            }
        }
        t--;
    }

    for(int i = 0; i < n; i++){
        cout << letras[i];
    }
        
    return 0;
}
