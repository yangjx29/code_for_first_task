struct   ATXKN9 {
    char ID [(915 - 905)];
    int cADw6X19;
};
void  main () {
    struct   ATXKN9 ALRrcTnUJdw [(727 - 627)];
    int OBd8oTl2ytES, SsVWElvJc1, G4Rijth;
    struct   ATXKN9 GQjsted7qpc [(514 - 414)];
    void  c81SmT0sLgxK (struct   ATXKN9 dlIkB2Cmqp5y [(894 - 794)], int OBd8oTl2ytES);
    G4Rijth = (558 - 558);
    scanf ("%d", &OBd8oTl2ytES);
    for (SsVWElvJc1 = (349 - 349); OBd8oTl2ytES > SsVWElvJc1; SsVWElvJc1 = SsVWElvJc1 +1) {
        scanf ("%s", ALRrcTnUJdw[SsVWElvJc1].ID);
        scanf ("%d", &ALRrcTnUJdw[SsVWElvJc1].cADw6X19);
    }
    for (SsVWElvJc1 = (382 - 382); SsVWElvJc1 < OBd8oTl2ytES; SsVWElvJc1 = SsVWElvJc1 +1) {
        if (ALRrcTnUJdw[SsVWElvJc1].cADw6X19 >= (942 - 882)) {
            strcpy (GQjsted7qpc[G4Rijth].ID, ALRrcTnUJdw[SsVWElvJc1].ID);
            GQjsted7qpc[G4Rijth].cADw6X19 = ALRrcTnUJdw[SsVWElvJc1].cADw6X19;
            G4Rijth++;
        }
        else
            continue;
    }
    c81SmT0sLgxK (GQjsted7qpc, G4Rijth);
    for (SsVWElvJc1 = 0; SsVWElvJc1 < G4Rijth; SsVWElvJc1++)
        printf ("%s\n", GQjsted7qpc[SsVWElvJc1].ID);
    for (SsVWElvJc1 = 0; SsVWElvJc1 < OBd8oTl2ytES; SsVWElvJc1++) {
        if (60 > ALRrcTnUJdw[SsVWElvJc1].cADw6X19)
            printf ("%s\n", ALRrcTnUJdw[SsVWElvJc1].ID);
    }
}

void  c81SmT0sLgxK (struct   ATXKN9 dlIkB2Cmqp5y [(263 - 163)], int OBd8oTl2ytES) {
    int SsVWElvJc1, j;
    struct   ATXKN9 G4Rijth;
    for (SsVWElvJc1 = (168 - 167); SsVWElvJc1 < OBd8oTl2ytES; SsVWElvJc1++)
        for (j = 0; OBd8oTl2ytES -SsVWElvJc1 > j; j++) {
            if (dlIkB2Cmqp5y[j].cADw6X19 < dlIkB2Cmqp5y[j + 1].cADw6X19) {
                G4Rijth = dlIkB2Cmqp5y[j];
                dlIkB2Cmqp5y[j] = dlIkB2Cmqp5y[j + 1];
                dlIkB2Cmqp5y[j + 1] = G4Rijth;
            }
        }
}

