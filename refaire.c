#include<stdio.h>
#include<string.h>
#define n 30
int main()
{
    typedef struct
    {
        char nom[20];
        char prenom[20];
        char numero[20];
        char email[20];
    }
    Etudiant;
    Etudiant E[n];
    int i;nb;
    do{
        printf("Entrer le nombre d etudiant");
        scanf("%d",&nb);
    }
    while((nb<0)||(nb>100));
    for(i=0;i<nb;i++)
    {
        printf("Entrer le nom de l etudiant");
        scanf(E[i].nom);
        printf("Entrer le prenom de l etudiant");
        scanf(E[i].prenom);
        printf("Entrer le numero de l etudiant");
        scanf(E[i].numero);
        printf("Entrer l email de l etudiant");
        scanf(E[i].email);
    }
    printf("Nom||\tPrenom|\t|Numero|\t|Email");
    printf("\n-----------------------------------------------------");
    while(i<nb)
    {
      printf("%s\t%s\t%s\t%s",E[i].nom,E[i].prenom,E[i].numero,E[i].email);  
      i++;
    }
    
return 0;
}