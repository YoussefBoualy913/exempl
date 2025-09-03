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
     for(int i=0;i<N-1;i++){
         for(int j=i+1;j<N;j++){
             int c;
             if(T[i]>T[j]){
                 c=T[i];
                 T[i]=T[j];
                 T[j]=c;
             }
         }
    
    }
     for(int i=0;i<N;i++){
        printf(" %d",T[i]);
    }
    
    
   
    return 0;
}