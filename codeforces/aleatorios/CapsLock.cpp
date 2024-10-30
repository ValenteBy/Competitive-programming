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
    
    string str; cin >> str;

    

    for(int i = 0; i < str.size(); i++){
        if(i == 0){
            str[i] = toupper(str[i]);
        }else{
            str[i] = tolower(str[i]);
        }
    }
    PRINT(str);
    return 0;
}