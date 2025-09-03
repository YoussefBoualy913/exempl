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
    int valrem,nouvlval;
    printf("entrez la valeurs nouvelle est remplacer");
    scanf("%d %d",&nouvlval,&valrem);
     for(int i=0;i<N;i++){
         if(T[i]==valrem){
             T[i]=nouvlval;
         }
         }
    
     for(int i=0;i<N;i++){
        printf(" %d",T[i]);
    }

    
    
   
    return 0;
}