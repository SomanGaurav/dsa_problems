#include<iostream>
#include<map>
using namespace std ; 

int main(){
    int n = 6 ; 
    int start[] = {1 , 3 , 0 , 5 , 8  , 6} ; 
    int end[] = {2 , 4 , 6 , 7 ,9 , 9}; 
    int count = 0 ; 
    int starting = 0 ; 
    //Given that the input data is sorted based on end time . If same bigger start time comes first . 
    for(int i = 0 ; i < n ;i++){
        if(start[i] > starting){
            starting = end[i] ; 
            count++ ; 
        }
    }
    cout << count << endl ; 
}

