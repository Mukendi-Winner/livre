int main() {
    int choix;

    do {
        // Affichage du menu
        printf("Menu :\n");
        printf("1. gestion des livres\n");
        printf("2. gestion des membres\n");
        printf("3. gestion des emprunts\n");
        printf("4. gestion des réservations\n");
        printf("5. gestion des catégories\n");
        printf("6. gestion des auteurs\n");
        printf("7. gestion des éditeurs\n");
        printf("8. gestion des statistiques\n");
        printf("9. gestion des amendes\n");
        printf("10. gestion des commentaires\n");
        printf("11. gestion des formats\n");
        printf("12. gestion des langues\n");
        printf("13. gestion des notifications\n");
        printf("14. gestion des préférences utilisateur\n");
        printf("15. gestion des rapports\n");
        printf("16. gestion des sécurité\n");
        printf("17. gestion des sauvegardes\n");
        printf("18. gestion de l\'interface utilisateur\n");
        printf("19. gestion de la documentation\n");
        printf("20. gestion des  tests et de la qualité\n");
        printf("0. quitter\n");

        // Demande à l'utilisateur de choisir une option
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        // Traitement des options
        switch(choix) {
            case 1:
                // Ajoutez le code correspondant
                break;
            case 2:
                // Ajoutez le code correspondant
                break;
            case 3:
                // Ajoutez le code correspondant
                break;
            case 4:
                // Ajoutez le code correspondant
                break;
            case 5:
                // Ajoutez le code correspondant
                break;
            case 6:
                // Ajoutez le code correspondant
                break;
            case 7:
                // Ajoutez le code correspondant
                break;
            case 8:
                // Ajoutez le code correspondant
                break;
            case 9:
                // Ajoutez le code correspondant
                break;
            case 10:
                // Ajoutez le code correspondant
                break;
            case 11:
                // Ajoutez le code correspondan
                break;
            case 12:
                // Ajoutez le code correspondant
                break;
            case 13:
                // Ajoutez le code correspondant
                break;
            case 14:
                // Ajoutez le code correspondant
                break;
            case 15:
                // Ajoutez le code correspondant
                break;
            case 16:
                // Ajoutez le code correspondant
                break;
            case 17:
                // Ajoutez le code correspondant
                break;
            case 18:
                // Ajoutez le code correspondant
                break;
            case 19:
                // Ajoutez le code correspondant
                break;
            case 20:
                // Ajoutez le code correspondant
                break;
            case 0:
                printf("Au revoir !\n");
            break;
            default:
                printf("Choix invalide. Veuillez entrer un numéro valide.\n");
            break;
        }
    } while(choix != 0); // Répéter tant que l'utilisateur ne choisit pas l'option de quitter

    return 0;
}

