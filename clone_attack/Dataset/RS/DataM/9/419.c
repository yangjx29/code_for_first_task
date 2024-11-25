void  main () {
    char M [11];
    int n;
    int bB1ToI;
    int PvsYMo6ifbQ;
    int aHJBeXCcDP;
    struct   patient {
        char ID [11];
        int GHxy38hF;
    };
    struct   patient *P9QbKs = (struct   patient *) malloc (sizeof (struct   patient) * n);
    free (P9QbKs);
    scanf ("%d", &n);
    for (bB1ToI = (806 - 806); n > bB1ToI; bB1ToI = bB1ToI + 1)
        scanf ("%s%d", P9QbKs[bB1ToI].ID, &P9QbKs[bB1ToI].GHxy38hF);
    for (PvsYMo6ifbQ = (777 - 777); n > PvsYMo6ifbQ; PvsYMo6ifbQ = PvsYMo6ifbQ +1)
        for (bB1ToI = 0; n - (310 - 309) > bB1ToI; bB1ToI = bB1ToI + 1) {
            if ((156 - 96) > P9QbKs[bB1ToI].GHxy38hF && (86 - 26) <= P9QbKs[bB1ToI + (524 - 523)].GHxy38hF) {
                aHJBeXCcDP = P9QbKs[bB1ToI].GHxy38hF;
                strcpy (M, P9QbKs[bB1ToI].ID);
                P9QbKs[bB1ToI].GHxy38hF = P9QbKs[bB1ToI + (888 - 887)].GHxy38hF;
                strcpy (P9QbKs[bB1ToI].ID, P9QbKs[bB1ToI + (141 - 140)].ID);
                P9QbKs[bB1ToI + 1].GHxy38hF = aHJBeXCcDP;
                strcpy (P9QbKs[bB1ToI + 1].ID, M);
            }
            if (60 <= P9QbKs[bB1ToI].GHxy38hF && P9QbKs[bB1ToI + 1].GHxy38hF >= 60 && P9QbKs[bB1ToI].GHxy38hF < P9QbKs[bB1ToI + 1].GHxy38hF) {
                aHJBeXCcDP = P9QbKs[bB1ToI].GHxy38hF;
                strcpy (M, P9QbKs[bB1ToI].ID);
                P9QbKs[bB1ToI].GHxy38hF = P9QbKs[bB1ToI + 1].GHxy38hF;
                strcpy (P9QbKs[bB1ToI].ID, P9QbKs[bB1ToI + 1].ID);
                P9QbKs[bB1ToI + 1].GHxy38hF = aHJBeXCcDP;
                strcpy (P9QbKs[bB1ToI + 1].ID, M);
            };
        }
    for (bB1ToI = 0; bB1ToI < n; bB1ToI = bB1ToI + 1)
        printf ("%s\n", P9QbKs[bB1ToI].ID);
}

