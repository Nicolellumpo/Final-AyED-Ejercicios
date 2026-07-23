#include <iostream>

using namespace std;

int main(){

    int vector[5]={4,6,200,2,0};

    for(int j = 0 ; j<5 ; j++){

        for(int i=0 ; i<5 ; i++){
            if(vector[i] > vector[i+1]){
                int aux = vector[i];

                vector[i] = vector[i+1];
                vector[i+1] = aux;
            }
        }
        
    }

    int h = 0 ;

    while(h<5){
        cout << vector[h] << " ";
        h++;
    }
    
    return 0 ;
}
