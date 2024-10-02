#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG(x) cout << "Debug: " <<  x << endl;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

signed main(){ _
    
    int mar[10][10] = {0};
    int n; cin >> n;
    bool tf = true;

    // D L R C (R, C)
    // D = 0 deitado (R, C + L - 1) 
    // D = 1 pe (R + L - 1, C)

    while(n--){
        int D, L, R, C; cin >> D >> L >> R >> C;
        if(D == 0){// deitado
            int x = R - 1;
            int y = C - 1;

            if(y + L - 1 > 9){
                tf = false;
                break;
            }
              
            for(int i = y; i < y + L; i++){
                mar[x][i]++;
                //DEBUG(mar[x][i]);
                if(mar[x][i] > 1){
                    tf = false;
                }
           }                
        }

        else if(D == 1){
            int x = R - 1;
            int y = C - 1;

            if(x + L - 1 > 9){
                tf = false;
                break;          
            }

            for(int i = x; i < x + L; i++){
                mar[i][y]++;
                //DEBUG(mar[i][y]);
                if(mar[i][y] > 1){
                    tf = false;
                }
            }
            //else if(){} 
        }
    }

    if(tf){
        cout << "Y";
    }else{
        cout << "N";
    }

    return 0;
}

