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
    
    string str; cin >> str;
    bool vetor[5] = {0};

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'h' && vetor[0] == 0 && vetor[1] == 0){
            vetor[0] = true;
        }else if(vetor[0] == 1 && (str[i] == 'e') && (vetor[1] == 0 && vetor[2] == 0)){
            vetor[1] = true;
        }else if(vetor[1] == true && (str[i] == 'l') && (vetor[2] == 0 && vetor[4] == 0)){
            vetor[2] = true;
        }else if(vetor[2] == true && (str[i] == 'l') && (vetor[3] == 0 && vetor[4] == 0)){
            vetor[3] = true;
        }else if(vetor[3] == true && str[i] == 'o' && vetor[4] == 0){
            vetor[4] = true;
        }
    }
    if(vetor[4])
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}
