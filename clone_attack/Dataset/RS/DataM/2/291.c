struct   xinxi {
    int iW9TMUt;
    char ARLBZrP [(463 - 443)];
}
iVfLlhX7 [(1302 - 302)];

void  main () {
    char PxrsOQ;
    int MYreWOL3cm, CkU7MPIOHJ, SKiM4HrGf, ONdJbAZuItl, dDlctpC [(681 - 655)] = {(301 - 301)}, JBx1gI = (110 - 110), jPdc3fH4k = (218 - 218);
    scanf ("%d", &MYreWOL3cm);
    for (CkU7MPIOHJ = (58 - 58); MYreWOL3cm > CkU7MPIOHJ; CkU7MPIOHJ = CkU7MPIOHJ +1)
        scanf ("%d%s", &iVfLlhX7[CkU7MPIOHJ].iW9TMUt, iVfLlhX7[CkU7MPIOHJ].ARLBZrP);
    {
        CkU7MPIOHJ = 538 - 538;
        while (MYreWOL3cm > CkU7MPIOHJ) {
            SKiM4HrGf = strlen (iVfLlhX7[CkU7MPIOHJ].ARLBZrP);
            for (ONdJbAZuItl = (316 - 316); SKiM4HrGf > ONdJbAZuItl; ONdJbAZuItl = ONdJbAZuItl +1)
                dDlctpC[iVfLlhX7[CkU7MPIOHJ].ARLBZrP[ONdJbAZuItl] - 65]++;
            CkU7MPIOHJ++;
        };
    }
    for (CkU7MPIOHJ = 0; (846 - 820) > CkU7MPIOHJ; CkU7MPIOHJ = CkU7MPIOHJ +1)
        if (JBx1gI < dDlctpC[CkU7MPIOHJ]) {
            JBx1gI = dDlctpC[CkU7MPIOHJ];
            jPdc3fH4k = CkU7MPIOHJ;
        }
    PxrsOQ = jPdc3fH4k + 65;
    printf ("%c\n%d\n", PxrsOQ, JBx1gI);
    for (CkU7MPIOHJ = 0; CkU7MPIOHJ < MYreWOL3cm; CkU7MPIOHJ++) {
        SKiM4HrGf = strlen (iVfLlhX7[CkU7MPIOHJ].ARLBZrP);
        for (ONdJbAZuItl = 0; SKiM4HrGf > ONdJbAZuItl; ONdJbAZuItl = ONdJbAZuItl +1)
            if (iVfLlhX7[CkU7MPIOHJ].ARLBZrP[ONdJbAZuItl] == PxrsOQ)
                printf ("%d\n", iVfLlhX7[CkU7MPIOHJ].iW9TMUt);
    };
}

