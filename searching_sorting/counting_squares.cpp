#include<iostream>
#include<cmath>
using namespace std ; 



int countSquares(int num){
    int n = (int)sqrt(num); 
    for(int i = 1 ; i <= n ; i++){
        cout << i*i << " " ; 
    }

    cout << endl ; 
    return n ; 
}




int main(){
    int n = 3; 
    cout << countSquares(n) << endl ; 
}