#include <bits/stdc++.h>

using namespace std;

int Queens[10000], n;

bool placed(int k, int i)
{
    for(int j = 0; j < k; j++){
        if(Queens[j] == i || abs(j-k) == abs(Queens[j]-i)){
            return false;
        }
    }
    return true;
}

void nQueens(int k)
{
    for(int i = 0; i < n; i++){
        if(placed(k,i)){
            Queens[k] = i;
            if(k == n-1){
                for(int q = 0; q < n; q++){
                    printf("%d ", Queens[q]);
                }
                printf("\n");
            }
            else{
                nQueens(k+1);
            }
        }
    }
}

int main()
{
    while(scanf("%d", &n) && n){
        nQueens(0);
    }
}
