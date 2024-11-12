void  main () {
    int mj7C4Ktka [100];
    int KYhpg1WKsX;
    int JzLBcnX2RDJ;
    int Z6gk7sj5REF;
    int lwMvGoYdSXR;
    scanf ("%d", &JzLBcnX2RDJ);
    for (KYhpg1WKsX = (290 - 290); JzLBcnX2RDJ > KYhpg1WKsX; KYhpg1WKsX++)
        scanf ("%d", &mj7C4Ktka[KYhpg1WKsX]);
    Z6gk7sj5REF = mj7C4Ktka[0];
    for (KYhpg1WKsX = (37 - 36); JzLBcnX2RDJ > KYhpg1WKsX; KYhpg1WKsX++) {
        if (Z6gk7sj5REF < mj7C4Ktka[KYhpg1WKsX]) {
            Z6gk7sj5REF = mj7C4Ktka[KYhpg1WKsX];
            continue;
        }
        else
            continue;
    }
    lwMvGoYdSXR = mj7C4Ktka[0];
    for (KYhpg1WKsX = 1; JzLBcnX2RDJ > KYhpg1WKsX; KYhpg1WKsX++) {
        if (mj7C4Ktka[KYhpg1WKsX] < Z6gk7sj5REF &&mj7C4Ktka[KYhpg1WKsX] > lwMvGoYdSXR) {
            lwMvGoYdSXR = mj7C4Ktka[KYhpg1WKsX];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            continue;
        }
        else
            continue;
    }
    printf ("%d\n%d\n", Z6gk7sj5REF, lwMvGoYdSXR);
}

