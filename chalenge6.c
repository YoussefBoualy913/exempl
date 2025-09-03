#include <stdio.h>

int main() {
    int N,f;
    printf("entrez la taille de tableau et le facteur de moltiplication");
    scanf("%d %d",&N,&f);
    int T[N];
    for(int i=0;i<N;i++){
        printf("entrez l element %d",i+1);
        scanf("%d",&T[i]);
    }
     for(int i=0;i<N;i++){
        T[i]*=f;
    }
     for(int i=0;i<N;i++){
        printf(" %d",T[i]);
    }
    
    
   
    return 0;
}