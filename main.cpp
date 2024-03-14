#include <iostream>
#include <string>

using namespace std;

void bord(){
    
};

int main(){
    
    int *&rows = new int [20];
    int *&cols = new int [30];


    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 30; j++){
            rows[i] = 0;
            cols[j] = 0;
            cout << rows[i] << " " << cols[j] << " ";
        }
        cout << endl;
    }

}

void print_bord(introws[20],){
    for(int i =0; i < rows[]; i++)
};