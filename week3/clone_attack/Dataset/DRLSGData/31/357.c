struct   student {
    char ZXm4McRFq9Lp [(360 - 340)];
    char EZF6C8 [(1018 - 998)];
    char JmR8zytrL3T;
    int Gp9kZKxoiz;
    float lszni967;
    char rCZfzH3g [(766 - 746)];
    struct   student *ZWdZme;
};
int JHvwWKes9t;

struct   student *HSqBxD41kPgy () {
    struct   student *JXQUmw0P;
    struct   student *hi0tvopC, *tz5MU1i;
    JXQUmw0P = NULL;
    hi0tvopC = tz5MU1i = (struct   student *) malloc (len);
    scanf ("%s", hi0tvopC->ZXm4McRFq9Lp);
    if (!('e' != hi0tvopC->ZXm4McRFq9Lp[(493 - 493)]))
        return (JXQUmw0P);
    JHvwWKes9t = (1000 - 1000);
    scanf ("%s %c %d%f %s", hi0tvopC->EZF6C8, &hi0tvopC->JmR8zytrL3T, &hi0tvopC->Gp9kZKxoiz, &hi0tvopC->lszni967, hi0tvopC->rCZfzH3g);
    for (; JHvwWKes9t != -(71 - 70);) {
        JHvwWKes9t = JHvwWKes9t +(520 - 519);
        if (!((851 - 850) != JHvwWKes9t))
            hi0tvopC->ZWdZme = NULL;
        else
            hi0tvopC->ZWdZme = tz5MU1i;
        tz5MU1i = hi0tvopC;
        hi0tvopC = (struct   student *) malloc (len);
        scanf ("%s", hi0tvopC->ZXm4McRFq9Lp);
        if (!('e' != hi0tvopC->ZXm4McRFq9Lp[(515 - 515)]))
            break;
        scanf ("%s %c %d%f %s", hi0tvopC->EZF6C8, &hi0tvopC->JmR8zytrL3T, &hi0tvopC->Gp9kZKxoiz, &hi0tvopC->lszni967, hi0tvopC->rCZfzH3g);
    }
    JXQUmw0P = tz5MU1i;
    return (JXQUmw0P);
}

void  t5OSzRL3HV (struct   student *OdkeryY) {
    while (OdkeryY != NULL) {
        printf ("%s %s %c %d %g %s\n", OdkeryY->ZXm4McRFq9Lp, OdkeryY->EZF6C8, OdkeryY->JmR8zytrL3T, OdkeryY->Gp9kZKxoiz, OdkeryY->lszni967, OdkeryY->rCZfzH3g);
        OdkeryY = OdkeryY->ZWdZme;
    }
}

void  main () {
    struct   student *OdkeryY;
    t5OSzRL3HV (OdkeryY);
    OdkeryY = HSqBxD41kPgy ();
}

