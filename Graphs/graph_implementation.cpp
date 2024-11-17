#include<iostream>
#include<vector>
using namespace std ; 





vector<vector<int>> list_graph(){
    cout << "Enter the number of vertices " ; 
    int vertices , temp ; cin >> vertices ; 
    vector<vector<int>> graph(vertices+1) ;

    for(int i = 1 ; i <= vertices ; i++){
        cout << "Enter the vertices connected to vertex " << i << " :- " ; 
        temp = -1 ;
        while(temp != 0){
            cin >> temp ; 
            if(temp != 0)graph[i].push_back(temp); 
        }
    } 


    for(int vertex = 1 ; vertex <= vertices ; vertex++){
        for(int nodes:graph[vertex]){
            cout << nodes << " " ; 
        }

        cout << endl ; 
    }

    return graph ; 
}


vector<vector<int>> matrix_graph(){
    
    cout << "Enter the number of vertices :- " ; 
    int vertices ; cin >> vertices ; 
    vector<vector<int>> graph(vertices + 1 , vector<int>(vertices+1 , 0)); 
    int a , b ; 
    jump : 
        cin >> a >> b ; 
        if(a == 0 || b == 0 )goto escape ; 
        graph[a][b] = graph[b][a] = 1 ; 
        goto jump ; 

    escape : 
    for(int a = 1 ; a <= vertices ; a++){
        for(int b = 1 ; b <= vertices ; b++){
            cout << graph[a][b] << " " ; 
        }
        cout << endl ; 
    }
    return graph ; 
}


