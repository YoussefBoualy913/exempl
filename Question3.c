#include <stdio.h>

int main(){
    float r;
    printf("entrez le rayon de sphere");
    scanf("%f",&r);
    printf("le volume de sphere est:%f",(4.0f/3.0f)*3.14*(r*r*r));
    return 0;
}