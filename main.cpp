#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_board(int rows, int cols);

int main(){
    
    int rows = 15;
    int cols = 50;

    vector<vector<int>> pointer_array(rows, vector<int>(cols));
    print_board(rows, cols);
}

void print_board(int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i ==  0 || i == rows - 1){
                cout << "*";
            }
            else if(j == 0 || j == cols - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}