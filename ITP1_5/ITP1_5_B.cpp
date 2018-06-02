#include<iostream>
using namespace std;

int main(){
    int H,W;
    while(cin >> H >> W,H!=0 && W!=0){
        for(int i=1;W>=i;i++){
            cout << "#";
            if(i==W) cout << endl;
        }
        for(int i=2;H>i;i++){
            for(int j=1;W>=j;j++){
                if(j==1||j==W){
                    cout << "#";                    
                } else {
                    cout << ".";
                }
                if(j==W) cout << endl;
            }
        }
        for(int i=1;W>=i;i++){
            cout << "#";
            if(i==W) cout << endl;
        }
        cout << endl;
    }
    return 0;
}
