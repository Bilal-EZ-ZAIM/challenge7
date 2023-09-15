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
    
    // last number nub % 10 = a
    // num / 100 = first number
    // (num / 10 ) % 10 = secend number
    
    inverse = (number % 10) * 100 + ((number / 10) % 10) * 10 + number / 100;
    
    printf("inverse : %d\n", inverse);
    



    return 0;
}
