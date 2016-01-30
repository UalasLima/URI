#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char A[128],B[128],C[128];

    scanf("%s", &A);
    scanf("%s", &B);
    scanf("%s", &C);

    if(strcmp(A,"vertebrado")==0){
        if(strcmp(B,"ave")==0){
            if(strcmp(C,"carnivoro")==0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        if(strcmp(B,"mamifero")==0){
            if(strcmp(C,"onivoro")==0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }

    if(strcmp(A,"invertebrado")==0){
        if(strcmp(B,"inseto")==0){
            if(strcmp(C,"hematofago")==0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        if(strcmp(B,"anelideo")==0){
            if(strcmp(C,"hematofago")==0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }


system("pause");
return 0;
}
