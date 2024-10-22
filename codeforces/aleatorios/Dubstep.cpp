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
    string strnew="";
    bool tf = false, cont = false;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'W' and str[i+1] == 'U' and str[i+2] == 'B'){
            i += 2;
            if(cont == true and tf == false){
                cout << " ";
                //strnew[i]+=' ';
                tf = true;
            }
        }
        else{
            cout << str[i];
            //strnew += str[i];
            cont = true;
            tf = false;
        }
    }
    //WUB WE WUB ARE WUB WUB THE WUB CHAMPIONS WUB MY WUB FRIEND WUB

    return 0;
}