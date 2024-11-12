struct   student {
    char num [100];
    int qSfThEcB;
    int rA1XPgV;
    char SA5wkPV;
    char B0cAKGZRnylD;
    int pnCq1S;
};
void  main () {
    struct   student JsFE6R [100];
    int CXO9SmZDf;
    int i;
    int MDrtaHwOnW;
    int ET6Ff4v7W;
    int lPeQNhudCX;
    int yZR3Gex0M;
    int lipEPLnVO5MN [100];
    CXO9SmZDf = 0;
    ET6Ff4v7W = 0;
    scanf ("%d", &yZR3Gex0M);
    for (i = 0; i < yZR3Gex0M; i = i + 1) {
        lipEPLnVO5MN[i] = 0;
        scanf ("%s %d %d %c %c %d", JsFE6R[i].num, &JsFE6R[i].qSfThEcB, &JsFE6R[i].rA1XPgV, &JsFE6R[i].SA5wkPV, &JsFE6R[i].B0cAKGZRnylD, &JsFE6R[i].pnCq1S);
    }
    for (i = 0; i < yZR3Gex0M; i = i + 1) {
        if (80 < JsFE6R[i].qSfThEcB && 1 <= JsFE6R[i].pnCq1S)
            lipEPLnVO5MN[i] += 8000;
        if (85 < JsFE6R[i].qSfThEcB && JsFE6R[i].rA1XPgV > 80)
            lipEPLnVO5MN[i] += 4000;
        if (JsFE6R[i].qSfThEcB > 90)
            lipEPLnVO5MN[i] += 2000;
        if (JsFE6R[i].qSfThEcB > 85 && JsFE6R[i].B0cAKGZRnylD == 'Y')
            lipEPLnVO5MN[i] += 1000;
        if (JsFE6R[i].rA1XPgV > 80 && JsFE6R[i].SA5wkPV == 'Y')
            lipEPLnVO5MN[i] += 850;
    }
    for (i = 0; i < yZR3Gex0M; i++) {
        if (lipEPLnVO5MN[i] > ET6Ff4v7W)
            ET6Ff4v7W = lipEPLnVO5MN[i];
    }
    for (i = 0; i < yZR3Gex0M; i++)
        if (lipEPLnVO5MN[i] == ET6Ff4v7W)
            break;
    printf ("%s\n%d", JsFE6R[i].num, lipEPLnVO5MN[i]);
    for (i = 0; i < yZR3Gex0M; i++)
        CXO9SmZDf = CXO9SmZDf +lipEPLnVO5MN[i];
    printf ("\n%d", CXO9SmZDf);
}

