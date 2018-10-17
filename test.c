//Il demande à l’utilisateur de choisir une opération parmi l’addition ou la multi- plication, puis de fournir deux nombres entiers ; il affiche alors le résultat correspondant.

/* ==============================================
               
                PSEUDO CODE :

	- Définir variable : char operation; ?
	
	- Définir variable : float n1, n2;
	
	- Demander à l'utilisateur de choisir un type d'opération ?
		○ Récupérer valeur et la stocker dans variable `operation`
		
	- Demander à l'utilisateur deux nombres ?
		○ Récupérer et stocker dans variable `n1` et `n2` = scanf("%f", &n1 &n2);
		
	- IF (operation == *) ALORS
		○ Printf : "Le résultat de l'opération est %.0f", n1*n2;
		
	- ELSE
		○ Printf : "Le resultat de l'opération est %.2f", n1/n2;

=============================================== */

#include <stdio.h>

int main(void)
{
    char operation;
    float n1, n2;

    printf ("Choose between (* or /):  ");
    scanf ("%c", &operation);

    printf ("First number : ");
    scanf ("%f", &n1);

    printf ("Second number : ");
    scanf ("%f", &n2);

    if (operation == '*') 
    {
        printf ("The result of %.0f * %.0f is %.0f\n",n1, n2, n1*n2);
    } 
    else 
    {
        printf ("The result of %.0f / %.0f is %.2f\n",n1, n2, n1/n2);
    }
}