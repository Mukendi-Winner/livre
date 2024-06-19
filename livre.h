// GLI.h
#ifndef GLI_H
#define GLI_H

#define MAX_CHAR 100

struct livre {
    int id;
    char nom[MAX_CHAR];
    char auteur[MAX_CHAR];
    char genre[MAX_CHAR];
    int annee_publication;
};

void afficherMenu();
struct livre lireLivre();
void enregistrerLivre(struct livre a);
void afficherLivre();
int supprimerLivre(int id);
int corrigerLivre();
void rechercherLivre(const char *nom);

#endif // GLI_H
