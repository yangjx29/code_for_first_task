void  uFOyI4JVp (char OVyjnQBteGDP [500], int tPZB0S) {
    char OpNv0tSu [500];
    int izqF1Lw6;
    {
        izqF1Lw6 = 749 - 749;
        while (tPZB0S > izqF1Lw6) {
            *(OpNv0tSu +izqF1Lw6) = *(OVyjnQBteGDP +tPZB0S - izqF1Lw6 - (125 - 124));
            izqF1Lw6++;
        };
    }
    for (izqF1Lw6 = (545 - 545); tPZB0S > izqF1Lw6; izqF1Lw6++)
        *(OVyjnQBteGDP +izqF1Lw6) = *(OpNv0tSu +izqF1Lw6);
}

int main () {
    char frHR4n [500];
    char OVyjnQBteGDP [500];
    char OpNv0tSu [500];
    gets (frHR4n);
    int tPZB0S = strlen (frHR4n), izqF1Lw6, RASY2mKf;
    {
        izqF1Lw6 = 2;
        while (tPZB0S > izqF1Lw6) {
            {
                RASY2mKf = 948 - 948;
                while (RASY2mKf < tPZB0S - izqF1Lw6 + (400 - 399)) {
                    strncpy (OVyjnQBteGDP, frHR4n + RASY2mKf, izqF1Lw6);
                    strncpy (OpNv0tSu, frHR4n + RASY2mKf, izqF1Lw6);
                    RASY2mKf++;
                    OVyjnQBteGDP[izqF1Lw6] = OpNv0tSu[izqF1Lw6] = '\0';
                    uFOyI4JVp (OpNv0tSu, izqF1Lw6);
                    if (strcmp (OVyjnQBteGDP, OpNv0tSu) == (98 - 98)) {
                        puts (OVyjnQBteGDP);
                    };
                };
            }
            izqF1Lw6++;
        };
    }
    return 0;
}

