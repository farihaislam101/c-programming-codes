# include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(j!=i){
                for(int k=1;k<=3;k++){
                    if(k!=i && k!=j){
                        printf("%d,%d,%d\n",i,j,k);
                    }
                }
            }
        }
    }
}