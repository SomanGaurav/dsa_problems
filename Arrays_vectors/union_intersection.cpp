#include<iostream>
#include<vector>
using namespace std ; 


void _union(int arr1[] , int arr2[] , int size1 , int size2){

    int counter1 = 0 , counter2 = 0 , counter = 0; 


    vector<int> _union  ; 
    
    _union.push_back(min(arr1[0] , arr2[0])); 

    while(counter1 < size1 && counter2 < size2){
        if(arr1[counter1] <= arr2[counter2]){
            if(_union[counter] != arr1[counter1]){
                _union.push_back(arr1[counter1]); 
                counter++ ; 
            }

            counter1++ ; 
        }

        else {
            if(_union[counter] != arr2[counter2]){
                _union.push_back(arr2[counter2]); 
                counter++ ; 
            }

            counter2++ ; 
        }
    }
    
    while(counter1 < size1){
        if(_union[counter] != arr1[counter1]){
            _union.push_back(arr1[counter1]); 
            counter++ ; 
        }
        
        counter1++ ; 
    }
    
    while(counter2 < size2){
        if(_union[counter] != arr2[counter2]){
            _union.push_back(arr2[counter2]); 
            counter++ ; 
        }
        
        counter2++ ; 
    }
    
    for(int i = 0 ; i <= counter ; i++){
        cout << _union[i] << " "  ; 
    }
}

void _intersection(int arr1[] , int arr2[] , int size1 , int size2){


    int counter1 = 0 , counter2 = 0 , counter = -1; 


    vector<int> _intersection;

    while(counter1 < size1 && counter2 < size2){
        if(arr1[counter1] == arr2[counter2]){
            if(counter < 0 ) _intersection.push_back(arr1[counter1]); 
            else if(arr1[counter1] != _intersection[counter]){
                _intersection.push_back(arr1[counter1]); 
            }

            counter1++ ; 
            counter2++ ; 
            counter++ ; 
        }

        else if(arr1[counter1] < arr2[counter2]){
            counter1++; 
        }
        else{
            counter2++ ; 
        }
    } 

    for(int i = 0 ; i <= counter ; i++){
        cout << _intersection[i] << " " ; 
    }


}


int main(){
    int arr1[] = {2,3,5,7,8,9,10};
    int arr2[] = {2,4,5,8,10}; 

    _union(arr1 , arr2 , 7 , 5); 
    cout << endl ; 
    _intersection(arr1 , arr2 , 7 , 5 ); 
}
