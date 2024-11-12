struct   student {
    struct   student *nxSmtK;
    char num [(900 - 800)];
    char T48vAsBGyJ [20];
    char sex [(345 - 343)];
    char HG69y8d2b [(551 - 541)];
    char MKODfibwP [(344 - 334)];
    char G1oJ0uR [100];
    struct   student *NlmSbhRuCj;
};
void  main () {
    struct   student *dG10x2OwPuvp, *JFiPGMsh5Sfa, *Mh5OLgUNGqeu, *wSc1WQ2pU;
    int sg67GszhJX2k;
    sg67GszhJX2k = (32 - 32);
    JFiPGMsh5Sfa = (struct   student *) malloc (LEN);
    scanf ("%s", JFiPGMsh5Sfa->num);
    for (; !(0 == strcmp (JFiPGMsh5Sfa->num, "end"));) {
        scanf ("%s %s %s %s %s", JFiPGMsh5Sfa->T48vAsBGyJ, JFiPGMsh5Sfa->sex, JFiPGMsh5Sfa->HG69y8d2b, JFiPGMsh5Sfa->MKODfibwP, JFiPGMsh5Sfa->G1oJ0uR);
        sg67GszhJX2k = sg67GszhJX2k + (89 - 88);
        if (sg67GszhJX2k == (186 - 185)) {
            JFiPGMsh5Sfa->nxSmtK = NULL;
            Mh5OLgUNGqeu = JFiPGMsh5Sfa;
        }
        else
            JFiPGMsh5Sfa->nxSmtK = Mh5OLgUNGqeu;
        Mh5OLgUNGqeu = JFiPGMsh5Sfa;
        JFiPGMsh5Sfa = (struct   student *) malloc (LEN);
        scanf ("%s", JFiPGMsh5Sfa->num);
    }
    dG10x2OwPuvp = Mh5OLgUNGqeu;
    wSc1WQ2pU = dG10x2OwPuvp;
    do {
        printf ("%s %s %s %s %s %s\n", wSc1WQ2pU->num, wSc1WQ2pU->T48vAsBGyJ, wSc1WQ2pU->sex, wSc1WQ2pU->HG69y8d2b, wSc1WQ2pU->MKODfibwP, wSc1WQ2pU->G1oJ0uR);
        wSc1WQ2pU = wSc1WQ2pU->nxSmtK;
    }
    while (wSc1WQ2pU != NULL);
}

