#include <stdio.h>

int main() {
    int N;
    printf("entrez la taille de tableau ");
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("entrez l element %d",i+1);
        scanf("%d",&T[i]);
    }
     for(int i=0;i<N;i++){
         if(T[i]%2==0){
        printf(" %d",T[i]);}
    }

       return 0;
}