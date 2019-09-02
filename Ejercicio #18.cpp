#include <iostream>
using namespace std;

int main()
{
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i<=j){
            cout<<"Digite un numero: ";
            cin>>mat[i][j];}
            if(i>j){
                mat[i][j]=0;
            }
        }
            
}
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<mat[i][j]<<" ";}
            cout<<endl;
    }
    return 0;
}
