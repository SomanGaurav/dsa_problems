#include<iostream>
#include<vector>
using namespace std ;  

long long int NCRrec(int n , int r , vector<vector<long long int>> &memo){
    if(r > n) return 0 ;

    if(r == 0 || r == n) return 1 ; 

    if(memo[n][r] != -1)return memo[n][r];

    return NCRrec(n-1 , r , memo) + NCRrec(n-1 , r-1 , memo); 
}


void NCRtab(vector<vector<long long int>> &memo){
    for(int i = 0 ; i <= 32; i++){
        for(int j = 0 ; j <= i ; j++){
            
            if(j == 0 ) memo[i][j] = 1 ; 
            else if(i == j) memo[i][j] = 1 ; 
            else {
                memo[i][j] = memo[max(0 , i-1)][j] + memo[max(0 , i-1)][max(0,j-1)] ; 
            }

        }
    }

}

int main(){
    int n , k ; 
    cin >> n >> k ; 
    vector<vector<long long int>> memo(33 , vector<long long int> (33 , -1)); 
    NCRtab(memo); 
    cout << memo[n][k] << endl ; 

}