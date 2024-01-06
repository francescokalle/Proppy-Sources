#include <stdio.h>
#include <string.h>

#define MAX_URL_LENGTH 100
#define MAX_URLS 5

//ansi colors

#define ANSI_RESET "\033[0m"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"

#define ANSI_PURPLE_BOLD "\033[1;35m"



// Definizione di una struttura per rappresentare un sito
struct Site {
    char name[MAX_URL_LENGTH];
    char link[MAX_URL_LENGTH];
};

// Funzione per stampare i siti di una categoria
void printSites(struct Site *sites, const char *category) {
    printf("\n%s Sites:\n", category);

    for (int i = 0; i < MAX_URLS && strcmp(sites[i].name, "E_N_D") != 0; i++) {
        printf(ANSI_COLOR_RED "%s:" ANSI_COLOR_BLUE "%s\n" ANSI_RESET, sites[i].name, sites[i].link);
    }

}

int main() {
    // Creazione di liste di siti per diverse categorie
    struct Site crackedGamesSites[MAX_URLS] = {
        {"Game3rb", "https://game3rb.com/"},
        {"Steam Rip", "https://steamrip.com/"},
        {"FreeGamesDl", "https://www.freegamesdl.net/"},
        {"Noban Discord Server", "https://discord.gg/ytgN3uznzN"},
        {"E_N_D", ""}  // Segnale di fine
    };

    struct Site crackedSoftwareSites[MAX_URLS] = {
        {"Programmi e dove trovarli", "https://www.programmiedovetrovarli.it/"},
        {"FileCR", "https://filecr.com/en/?id=099803600000"},
        {"Igetintopc", "https://igetintopc.com/"},
        {"GitHub", "https://github.com/"},
        {"E_N_D", ""}  // Segnale di fine
    };

    struct Site hackingResourcesSites[MAX_URLS] = {
        {"cracked.io", "https://cracked.io/"},
        {"Ultimate hacking tools list", "https://pastebin.com/Qzd6V7Tv"},
        {"Kali Linux download", "https://www.kali.org/get-kali/#kali-installer-images"},
        {"Github", "https://github.com/"},
        {"E_N_D", ""}  // Segnale di fine
    };

    struct Site aiSites[MAX_URLS] = {
        {"UNCENSORED Chat Bot: Ollama", "https://github.com/jmorganca/ollama"},
        {"UNCENSORED Image Generator: Fooocus", "https://github.com/lllyasviel/Fooocus"},
        {"E_N_D", ""}  // Segnale di fine
    };

    int choice;

    printf(ANSI_PURPLE_BOLD "[PROPPY SOURCES]\n" ANSI_RESET);

    do {
        // Mostra il menu
        printf("Scegli la categoria da stampare:\n");
        printf("1. Cracked Games\n");
        printf("2. Cracked Software\n");
        printf("3. Hacking Resources\n");
        printf("4. AI Sites\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &choice);

        // Elabora la scelta dell'utente
        switch (choice) {
            case 1:
                printSites(crackedGamesSites, "Cracked Games");
                break;
            case 2:
                printSites(crackedSoftwareSites, "Cracked Software");
                break;
            case 3:
                printSites(hackingResourcesSites, "Hacking Resources");
                break;
            case 4:
                printSites(aiSites, "AI Sites");
                break;
            case 0:
                printf("\nUscita dal programma.\n");
                break;
            default:
                printf("\nScelta non valida. Riprova.\n");
        }

    } while (choice != 0);

    return 0;
}