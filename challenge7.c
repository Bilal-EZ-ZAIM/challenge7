#include <stdio.h>

// Challenge 7 : Nombre entier à trois chiffres en ordre inverse
// prof Aymane
// prof Said
// étudiant Bilal EZZAIM
// function welcom to project
void premierFonction()
{
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
    printf("                 ======== Challenge 7 : Nombre entier à trois chiffres en ordre inverse ==========\n");
    printf("                 =================================================================================\n");
    printf("                 =================================================================================\n");
}

int main()
{
    premierFonction();



    int number , inverse;
    
    printf("erivez le nomber ");
    scanf("%d", &number);
    
    // nub % 10 = akhir ra9m
    // num / 100 = awl ra9m
    // (num / 10 ) % 10 = ra9m alwasat
    
    inverse = (number % 10) * 100 + ((number / 10) % 10) * 10 + number / 100;
    
    printf("inverse : %d\n", inverse);
    



    return 0;
}