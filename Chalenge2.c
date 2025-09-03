#include <stdio.h>

int main() {
    int n ;
   printf("entrez la taille de tableau");
    scanf("%d",&n);
    int tab[n];
    for(int i=0;i<n;i++){
        printf("entrez l element: %d",i+1);
        scanf("%d",&tab[i]);
    }
     for(int i=0;i<n;i++){
        printf("%d",tab[i]);
        
    }
    
   
    return 0;
}