#include<stdio.h>

int main(){
    int i,n,j,k;
    int b,f,r,v;
    int p[4][3][10]={0};

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&b,&f,&r,&v);
        p[b-1][f-1][r-1]+=v;
    }
    for(k=0;k<4;k++){
        for(j=0;j<3;j++){
            for(i=0;i<10;i++){
                printf(" %d",p[k][j][i]);
            }
            printf("\n");
        }
        if(k==3){
            break;
        }
        printf("####################\n");
    }
    return 0;
}