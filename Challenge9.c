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
    int tem;
     for(int i=0;i<=N/2;i++){
         tem=T[i];
         T[i]=T[N-i-1];
         T[N-i-1]=tem;
         }
    
     for(int i=0;i<N;i++){
        printf(" %d",T[i]);
    }

    
    
   
    return 0;
}