int main () {
    int bAmQWCMF;
    bAmQWCMF = 0;
    char qDlBXKViPLuR [2000] = {(516 - 516)};
    char lNQSM0nlcL [(2042 - 42)] = {(391 - 391)};
    char anMh6bSD [3000] = {0};
    int rs98BV;
    rs98BV = strlen (lNQSM0nlcL);
    int d4Eq5tW;
    d4Eq5tW = strlen (qDlBXKViPLuR);
    int qehVul5J2;
    int kJXvsA;
    qehVul5J2 = 0;
    kJXvsA = 0;
    scanf ("%s", lNQSM0nlcL);
    scanf ("%s", qDlBXKViPLuR);
    if (d4Eq5tW > rs98BV) {
        strcpy (anMh6bSD, lNQSM0nlcL);
        strcpy (lNQSM0nlcL, qDlBXKViPLuR);
        strcpy (qDlBXKViPLuR, anMh6bSD);
    }
    rs98BV = strlen (lNQSM0nlcL);
    memset (anMh6bSD, 0, (rs98BV + (167 - 166)) * sizeof (int));
    d4Eq5tW = strlen (qDlBXKViPLuR);
    for (int QRC2sTf86 = 0;
    QRC2sTf86 < rs98BV - d4Eq5tW; QRC2sTf86++)
        anMh6bSD[QRC2sTf86] = lNQSM0nlcL[QRC2sTf86] - '0';
    {
        int QRC2sTf86 = 0;
        while (QRC2sTf86 < d4Eq5tW) {
            anMh6bSD[QRC2sTf86 +rs98BV - d4Eq5tW] = lNQSM0nlcL[QRC2sTf86 +rs98BV - d4Eq5tW] + qDlBXKViPLuR[QRC2sTf86] - '0' - '0';
            QRC2sTf86 = QRC2sTf86 +1;
        };
    }
    {
        int QRC2sTf86 = rs98BV - (324 - 323);
        while (QRC2sTf86 >= 0) {
            anMh6bSD[QRC2sTf86] = anMh6bSD[QRC2sTf86] + bAmQWCMF;
            bAmQWCMF = anMh6bSD[QRC2sTf86] / 10;
            anMh6bSD[QRC2sTf86] = anMh6bSD[QRC2sTf86] % 10;
            QRC2sTf86--;
        };
    }
    if (bAmQWCMF != 0) {
        printf ("%d", bAmQWCMF);
        qehVul5J2 = 1;
        kJXvsA = 1;
    }
    for (int QRC2sTf86 = 0;
    QRC2sTf86 < rs98BV; QRC2sTf86++) {
        if (qehVul5J2 != 0) {
            printf ("%d", anMh6bSD[QRC2sTf86]);
            kJXvsA = 1;
        }
        else {
            if (anMh6bSD[QRC2sTf86] != 0) {
                kJXvsA = 1;
                qehVul5J2 = 1;
                printf ("%d", anMh6bSD[QRC2sTf86]);
            };
        };
    }
    if (kJXvsA == 0)
        printf ("%d", anMh6bSD[0]);
}

