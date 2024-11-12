int main () {
    char oxAjUzqXikcd [100];
    char FFlTZKJ [100];
    int gLDSO7k4Mei;
    int kcxswGS8AR;
    int ywZsOuV;
    int GmsHeB64Lui;
    gets (oxAjUzqXikcd);
    char KFwhpzKnA (char cVX1LDsP);
    gets (FFlTZKJ);
    gLDSO7k4Mei = strlen (oxAjUzqXikcd);
    kcxswGS8AR = strlen (FFlTZKJ);
    GmsHeB64Lui = (gLDSO7k4Mei < kcxswGS8AR) ? gLDSO7k4Mei : kcxswGS8AR;
    for (ywZsOuV = 0; ywZsOuV < gLDSO7k4Mei; ywZsOuV = ywZsOuV + 1)
        oxAjUzqXikcd[ywZsOuV] = KFwhpzKnA (oxAjUzqXikcd[ywZsOuV]);
    for (ywZsOuV = 0; ywZsOuV < kcxswGS8AR; ywZsOuV = ywZsOuV + 1)
        FFlTZKJ[ywZsOuV] = KFwhpzKnA (FFlTZKJ[ywZsOuV]);
    ywZsOuV = 0;
    for (; ywZsOuV < GmsHeB64Lui;) {
        if (oxAjUzqXikcd[ywZsOuV] == FFlTZKJ[ywZsOuV])
            ywZsOuV = ywZsOuV + 1;
        else {
            if (oxAjUzqXikcd[ywZsOuV] > FFlTZKJ[ywZsOuV])
                ;
            else
                ;
            break;
        }
    }
    if ((ywZsOuV == GmsHeB64Lui) && (gLDSO7k4Mei == GmsHeB64Lui) && (gLDSO7k4Mei != kcxswGS8AR))
        ;
    if ((ywZsOuV == GmsHeB64Lui) && (kcxswGS8AR == GmsHeB64Lui) && (gLDSO7k4Mei != kcxswGS8AR))
        ;
    if ((ywZsOuV == GmsHeB64Lui) && (gLDSO7k4Mei == kcxswGS8AR))
        ;
    return 0;
}

char KFwhpzKnA (char cVX1LDsP) {
    if ((cVX1LDsP >= 'A') && (cVX1LDsP <= 'Z'))
        cVX1LDsP = cVX1LDsP + 'a' - 'A';
    return (cVX1LDsP);
}

