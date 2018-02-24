#include<stdio.h>
int main(){
    int H,W,i,j;
    while(1){
        scanf("%d %d",&H,&W);
        if(H==0&&W==0) break;
        for(i=1;W>=i;i++){
            printf("#");
            if(i==W) printf("\n");
        }
        for(i=2;H>i;i++){
            for(j=1;W>=j;j++){
                if(j==1||j==W){
                printf("#");
                }
                else printf(".");
                if(j==W) printf("\n");
            }
        }
        for(i=1;W>=i;i++){
            printf("#");
            if(i==W) printf("\n");
        }
        printf("\n");
    }   
}