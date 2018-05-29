#include<iostream>
using namespace std;

int main(){
    int n,a,i=0,max=-1000000,min=1000000;
    long int sum=0;
    cin >> n;
    while(n!=i){
        cin >> a;
        if(a<min) min=a;
        if(max<a) max=a;       
        sum+=a; 
        i++;
    }
    cout << min << ' ' << max  <<  ' ' << sum << endl;
    return 0;
}
