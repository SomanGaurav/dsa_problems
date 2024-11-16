#include<iostream>
#include<limits>
using namespace std ; 

int main(){
    int arr[10] = {5 , 23 ,2425 , 12 ,523 , 3241, 354 ,224523 , 12412,109874}; 

    int min = arr[0] , max = arr[0] ; 

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] < min ) min = arr[i] ; 
        if(arr[i] > max) max = arr[i] ; 
    }

    cout << min << "  " << max  << endl ; 
}