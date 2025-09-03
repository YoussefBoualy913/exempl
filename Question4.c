#include <stdio.h>

int main(){
    float m;
    printf("entrez un montant");
    scanf("%f",&m);
    printf("votre montant apres ajoute d'un tax :%f",m+(m*5/100));
    return 0;
}