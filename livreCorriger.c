int corrigerLivre() {
    int id;
    printf("Entrez l'ID du livre à corriger : ");
    scanf("%d", &id);
    getchar(); // Pour consommer le '\n' restant

    FILE *fichierLecture, *fichierEcriture;
    fichierLecture = fopen(FICHIER_LIVRE, "r");
    fichierEcriture = fopen(FICHIER_TEMP, "w");

    if (fichierLecture == NULL || fichierEcriture == NULL) {
        printf("Erreur lors de l'ouverture des fichiers.\n");
        return 0;
    }

    int livreTrouve = 0;
    struct livre a;

    while (fscanf(fichierLecture, "%d;%[^;];%[^;];%[^;];%d\n", &a.id, a.nom, a.auteur, a.genre, &a.annee_publication) == 5) {
        if (a.id == id) {
            livreTrouve = 1;
            printf("Livre trouvé :\n");
            printf("ID : %d\n", a.id);
            printf("Nom : %s\n", a.nom);
            printf("Auteur : %s\n", a.auteur);
            printf("Genre : %s\n", a.genre);
            printf("Année de publication : %d\n", a.annee_publication);

            printf("Entrez les nouvelles informations du livre :\n");
            struct livre aCorrige = lireLivre();
            aCorrige.id = a.id; // On garde le même ID

            fprintf(fichierEcriture, "%d;%s;%s;%s;%d\n", aCorrige.id, aCorrige.nom, aCorrige.auteur, aCorrige.genre, aCorrige.annee_publication);
        } else {
            fprintf(fichierEcriture, "%d;%s;%s;%s;%d\n", a.id, a.nom, a.auteur, a.genre, a.annee_publication);
        }
    }

    fclose(fichierLecture);
    fclose(fichierEcriture);

    if (!livreTrouve) {
        remove(FICHIER_TEMP);
        printf("Aucun livre avec l'ID %d n'a été trouvé.\n", id);
        return 0;
    }

    if (remove(FICHIER_LIVRE) != 0) {
        printf("Erreur lors de la suppression de l'ancien fichier.\n");
        perror("remove");
        return 0;
    }

    if (rename(FICHIER_TEMP, FICHIER_LIVRE) != 0) {
        printf("Erreur lors du remplacement du fichier.\n");
        perror("rename");
        return 0;
    }

    printf("Livre avec l'ID %d corrigé avec succès.\n", id);
    return 1;
}