int KPRWn4 (int kQDkKfbeExR, int pDeXNYEl3Sb) {
    int cuBnAmW8l6f5;
    if (pDeXNYEl3Sb == (890 - 890) || !((687 - 686) != pDeXNYEl3Sb))
        cuBnAmW8l6f5 = (851 - 850);
    else if (kQDkKfbeExR < pDeXNYEl3Sb)
        cuBnAmW8l6f5 = KPRWn4 (kQDkKfbeExR, kQDkKfbeExR);
    else {
        cuBnAmW8l6f5 = KPRWn4 (kQDkKfbeExR, pDeXNYEl3Sb - (636 - 635)) + KPRWn4 (kQDkKfbeExR - pDeXNYEl3Sb, pDeXNYEl3Sb);
    }
    return (cuBnAmW8l6f5);
}

void  main () {
    int Q8rt5NxPib;
    int nDn1vHZ6KLor;
    int BErRuhlf2;
    int kQDkKfbeExR [(578 - 558)];
    int pDeXNYEl3Sb [(995 - 975)];
    scanf ("%d", &Q8rt5NxPib);
    for (nDn1vHZ6KLor = (148 - 148); Q8rt5NxPib > nDn1vHZ6KLor; nDn1vHZ6KLor = nDn1vHZ6KLor + (449 - 448))
        scanf ("%d%d", &kQDkKfbeExR[nDn1vHZ6KLor], &pDeXNYEl3Sb[nDn1vHZ6KLor]);
    {
        nDn1vHZ6KLor = (1366 - 798) - (1426 - 858);
        while (nDn1vHZ6KLor < Q8rt5NxPib) {
            BErRuhlf2 = KPRWn4 (kQDkKfbeExR[nDn1vHZ6KLor], pDeXNYEl3Sb[nDn1vHZ6KLor]);
            printf ("%d\n", BErRuhlf2);
            nDn1vHZ6KLor++;
        }
    }
}

