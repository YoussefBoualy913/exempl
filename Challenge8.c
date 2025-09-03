#include <stdio.h>

int main() {
    int N;
    printf("entrez la taille de tableau ");
    scanf("%d",&N);
    int T[N],B[N];
    for(int i=0;i<N;i++){
        printf("entrez l element %d",i+1);
        scanf("%d",&T[i]);
    }
     for(int i=0;i<N;i++){
         B[i]=T[i];
         }
    
     for(int i=0;i<N;i++){
        printf(" %d",T[i]);
    }
printf("\n");
 for(int i=0;i<N;i++){
        printf(" %d",B[i]);
    }
    
    
   
    return 0;
}