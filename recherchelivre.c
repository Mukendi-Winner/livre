void recherchelivre(const char *nom) {
    FILE *fichier = fopen(FICHIER_LIVRE, "r");

    if (fichier != NULL) {
        struct livre a;
        int livreTrouve = 0;
        while (fscanf(fichier, "%d;%[^;];%[^;];%[^;];%d\n", &a.id, a.nom, a.auteur, a.genre, &a.annee_publication)== 5){
            if (strcmp(a.nom, nom)==0){
                printf("Livre trouvé :\n");
                printf("ID : %d\n", a.id);
                printf("nom : %s\n", a.auteur);
                printf("genre : %s\n", a.genre);
                printf("Année de publication : %d\n", a.annee_publication);
                livreTrouve = 1;
                break;
            }
        }
        fclose(fichier);

        if (!livreTrouve){
            printf("Aucun livre trouvé avec le nom : %s\n", nom);
        }
    }else{
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
}
