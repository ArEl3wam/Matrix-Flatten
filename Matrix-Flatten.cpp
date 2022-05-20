#include <bits/stdc++.h>

using namespace std;


template<typename T>
vector <T> matrixToVector(vector<vector<vector<T>>> matrix){
    vector<T> output;
    int n=matrix.size();
    int m=matrix[0].size();
    int p=matrix[0][0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<p; k++){
                output.push_back(matrix[i][j][k]);
            }
        }
    }
    return output;
}

template<typename T>
int MatrixIndexTo1DIndex(vector<vector<vector<T>>> matrix, int i , int j , int k){
    int n=matrix.size();
    int m=matrix[0].size();
    int p=matrix[0][0].size();
    if(k>=p || j>=m || i>=n){
        return -1;
    }
    return (i*m*p)+(j*p)+k;

}

int main(){

vector<vector<vector<int>>> matrix={
    {{1,2,3},{7,8,9}},
    {{10,11,12},{20,21,22}}

};

cout << MatrixIndexTo1DIndex(matrix , 1 , 1,1)<< endl;



vector<int>temp = matrixToVector<int>(matrix);
for(int i=0; i<temp.size(); i++){
    cout << temp[i]<< " ";
}



}
