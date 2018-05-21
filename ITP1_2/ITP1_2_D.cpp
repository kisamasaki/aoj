#include<iostream>
using namespace std;

int main()
{
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >>r;
    if(x<0 || y<0 || W<x+r || H<y+r){        
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;            
    }
    return 0;
}
