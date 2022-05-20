#include <bits/stdc++.h>

using namespace std;

#define n 2
#define m 2
#define p 3

template<typename T>
vector <T> matrixToVector(T arr[n][m][p]){
    vector<T> output;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<p; k++){
                output.push_back(arr[i][j][k]);
            }
        }
    }
    return output;
}

template<typename T>
int MatrixIndexTo1DIndex(T arr[n][m][p], int i , int j , int k){

    if(k>=p || j>=m || i>=n){
        return -1;
    }
    return (i*m*p)+(j*p)+k;

}

int main(){

int arr1[n][m][p]={0};

cout << MatrixIndexTo1DIndex(arr1 , 1 , 1,1)<< endl;

int arr2[2][2][3]={
    {{1,2,3},{7,8,9}},
    {{10,11,12},{20,21,22}}


};

vector<int>temp = matrixToVector<int>(arr2);
for(int i=0; i<temp.size(); i++){
    cout << temp[i]<< " ";
}



}
