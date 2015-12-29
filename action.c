#include<stdlib.h>
#include<stdio.h>


void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m);

int fclose(FILE* pointeurSurFichier);  // pour fermer un fichier a metttre dans le .h associé

// le parametre est le pointeur sur le fichier renvoie un int 0 si cela a marché et EOF si echec n define situé dans stdio.h qui correspond à un nombre spécial, utilisé pour dire soit qu'il y a eu une erreur, soit que nous sommes arrivés à la fin du fichier. Dans le cas présent cela signifie qu'il y a eu une erreur.





FILE* fopen(const char* nomDuFichier, const char* modeOuverture);  // w+ mode d'ouverture : lecture et écriture, avec suppression du contenu au préalable. Le fichier est donc d'abord vidé de son contenu, vous pouvez y écrire, et le lire ensuite. Si le fichier n'existe pas, il sera créé.

/* meteore etant le nom du fichier dans lequel on va ecrire
 mode d'ouverture r pour lecture seule
mode d'ouverture r+ pour lecture et ecriture
*/




int main( int argc , char *argv[])  // a commenter avant compilation et reporter les elements necessaires dans le fichier principal .c
{
    FILE* fichier = NULL;
    sauvegarder_configuration_courante(tab[MAX][MAX],n,m,fichier);
    return 0;
}







void sauvegarder_configuration_courante(int tab[MAX][MAX],int n,int m,FILE* fichier){
    
    int i=0;
    int j=0;
    int temps;
    
    fichier = fopen("test.txt", "w");// ouvre text.txt en lecture et ecriture
    //Le pointeur fichier devient alors un pointeur sur test.txt.
    
    if (fichier != NULL)
    {
        while (i<n) {
            while(j<m){
                temps = tab[i][j];
                fprintf(fichier, "%d", temps);
                j++;
            }
            j=0;
            i++;
        }
        
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
}

