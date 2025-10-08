#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Simpelt gæt-et-tal spil hvor spilleren skal gætte
det korrekte tal mellem 1 og 100 */

int main() 
{

// Bruger rand funktionen til at generere et tilfældigt tal med aktuelt tidspunkt som seed
    srand( time(NULL) );

    int nummer = (rand() % 100) + 1; // Tallet som spilleren skal gætte
    int gæt;
    int forsøg = 0;
    const int max_forsøg = 8; // Max forsøg kan justeres for at ændre sværhedsgrad

    printf("\n********** GÆT ET TAL **********\n");
    printf("Jeg tænker på et tal mellem 1 og 100.\n");
    printf("Du har %d forsøg til at gætte det.\n", max_forsøg);

// Gamplay loop
    while (forsøg < max_forsøg)
    {
        printf("\nHvad er dit gæt?: ");
        scanf("%d", &gæt);
        forsøg++;

        if(gæt > nummer)
        {
        printf("\nFor højt!\n");      
        }
        else if (gæt < nummer)
        {
        printf("\nFor lavt!\n");          
        }
        
        else
        {
        printf("\nTillykke!!!\n");       
        printf("Du gættede tallet!\n");
        printf("Det tog dig %d forsøg!\n", forsøg);
        break;      
        }
        
    // Game over besked 
        if (forsøg == max_forsøg)
        {
            printf("\nDesværre, du har brugt alle %d forsøg\n", max_forsøg);
            printf("Tallet var %d.\n", nummer);
            printf("Kom igen, du vinder bare næste gang!\n");
        }
        
    //Player feedback
        else
        {
            printf("Du har %d forsøg tilbage.\n", max_forsøg - forsøg); 
        }
    }
     // End game besked
    printf("\nTak for spillet!\n");
    
    return 0;
}