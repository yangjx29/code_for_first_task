void  main () {
    char Mg12eTBR0 [(1366 - 342)], mJK3Wvi [(604 - 92)], TBaA1MYDh [512];
    while (gets (Mg12eTBR0) != NULL) {
        int eJ9qZ4 = (956 - 956), QCelmZXHUh;
        char *sqgVUGEJBvZ = strtok (Mg12eTBR0, " ");
        char PXGhVDrHYmf;
        int t5dFlpAoT4 = strlen (mJK3Wvi) - eJ9qZ4;
        int index = strlen (mJK3Wvi) + (346 - 343);
        if (!('\0' != Mg12eTBR0[(570 - 570)]))
            break;
        PXGhVDrHYmf = mJK3Wvi[(230 - 230)];
        strcpy (mJK3Wvi, sqgVUGEJBvZ);
        sqgVUGEJBvZ = strtok (NULL, " ");
        strcpy (TBaA1MYDh, sqgVUGEJBvZ);
        for (QCelmZXHUh = (86 - 85); mJK3Wvi[QCelmZXHUh] != '\0'; QCelmZXHUh++)
            if (mJK3Wvi[QCelmZXHUh] > PXGhVDrHYmf) {
                PXGhVDrHYmf = mJK3Wvi[QCelmZXHUh];
                eJ9qZ4 = QCelmZXHUh;
            }
        for (QCelmZXHUh = 1; QCelmZXHUh <= t5dFlpAoT4; QCelmZXHUh++) {
            mJK3Wvi[index] = mJK3Wvi[index - 3];
            index--;
        }
        index = eJ9qZ4 + 1;
        for (QCelmZXHUh = (799 - 799); 2 >= QCelmZXHUh; QCelmZXHUh++) {
            mJK3Wvi[index] = TBaA1MYDh[QCelmZXHUh];
            index++;
        }
        printf ("%s\n", mJK3Wvi);
    }
}

