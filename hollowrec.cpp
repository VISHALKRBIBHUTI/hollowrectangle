#include<iostream>
using namespace std;
int main(){
    int row;
    int column;
    cin>>row>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1||j==1||i==row||j==column){  // for less input we can equate rows=column;
                cout<<j;
            }
        
        else{
            cout<<" ";
        }                                      /*  pattern to print hollow rectangle .*/
        
                                                /* 12345
                                                   1   5
                                                   1   5
                                                   1   5
                                                   12345
                                                         */ 
                                                 
        }
        cout<<endl;
    }
    return 0; 

                     
}