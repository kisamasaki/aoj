#include<stdio.h>
int main(){
    int H,W,i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if(H==0&&W==0) break;
        for(i=1;H>=i;i++){
            for(j=1;W>=j;j++){
                printf("#");
                if(W==j) printf("\n");
            }
        }
        printf("\n");
    }   
}