#include<iostream>
#include<vector>
using namespace std ; 


void sorter(vector<int> &arr){
    int arr1[3] = {0 , 0 , 0}; 
    for(int i = 0 ; i < arr.size() ; i++){
        arr1[arr[i]]++ ; 
    }


    int counter = 0 ;
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < arr1[j] ; i++){
            arr[counter++] = j; 
        }
    }
}




int main(){
    vector<int> vect = { 0 , 1 , 2 ,0 , 2 ,1 ,0 , 1 ,2 , 1 , 0 , 2}; 

    sorter(vect); 

    for(int i = 0 ; i < vect.size() ; i++){
        cout << vect[i] << " " ; 
    }
}