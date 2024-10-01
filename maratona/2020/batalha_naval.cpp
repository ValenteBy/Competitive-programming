#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define in insert
#define llv vector<ll>
#define int ll
#define DEBUG cout << "DEBUG";
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
            int y = C + L - 2;
            
            int maiorLado = max(x,y); 
           
            if(maiorLado == x){
                for(int i = y; i >= 0; i--){    
                    mar[x][i]++;
                    if(mar[x][i] > 0){
                        tf = false;
                    }
                }
            }
            else{
                for(int i = y; i < 10; i++){
                    mar[x][i]++;
                    if(mar[x][i] > 0){
                        tf = false;
                    }
                }
            }
        }
        if(D == 1){
            int x = R - 1;
            int y = C + L - 2;
        }
    }

    return 0;
}

