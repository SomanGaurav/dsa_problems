#include<iostream>
#include<vector>
using namespace std ; 




int main(){
    vector<int> arr;
    int n , temp ; 
    cin >> n ; 
    for(int i = 0 ; i < n ; i++){
        cin >> temp ;
        arr.push_back(temp); 
    }

    int i = 0 , j = n-1 ; 
    while(i <= j){
        temp = arr[i]; 
        arr[i] = arr[j]; 
        arr[j] = temp; 

        j-- ; i++ ; 
    }


    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << ' ' ; 
    }
}