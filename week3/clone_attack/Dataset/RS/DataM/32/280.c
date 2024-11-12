void  main () {
    char NUPCR3tM [(170 - 69)];
    char b [(436 - 335)];
    int k8IPbD [(696 - 596)];
    int IOxSNX [100];
    int GiYKB3Wdu, t9disIm3j, svqgsif3wmk, xOAkj39RuwyX, xJUf7wq;
    scanf ("%d", &xOAkj39RuwyX);
    for (; xOAkj39RuwyX = xOAkj39RuwyX - 1;) {
        scanf ("%s%s", NUPCR3tM, b);
        t9disIm3j = strlen (NUPCR3tM);
        svqgsif3wmk = strlen (b);
        for (GiYKB3Wdu = (813 - 813); t9disIm3j > GiYKB3Wdu; GiYKB3Wdu = GiYKB3Wdu +1)
            k8IPbD[GiYKB3Wdu] = NUPCR3tM[t9disIm3j - GiYKB3Wdu -(676 - 675)] - '0';
        for (GiYKB3Wdu = (422 - 422); svqgsif3wmk > GiYKB3Wdu; GiYKB3Wdu = GiYKB3Wdu +1)
            IOxSNX[GiYKB3Wdu] = b[svqgsif3wmk - GiYKB3Wdu -(366 - 365)] - '0';
        for (GiYKB3Wdu = (416 - 416); GiYKB3Wdu < svqgsif3wmk; GiYKB3Wdu = GiYKB3Wdu +1) {
            k8IPbD[GiYKB3Wdu] -= IOxSNX[GiYKB3Wdu];
            if ((203 - 203) > k8IPbD[GiYKB3Wdu]) {
                k8IPbD[GiYKB3Wdu] += (492 - 482);
                k8IPbD[GiYKB3Wdu +1]--;
            };
        }
        for (GiYKB3Wdu = t9disIm3j - 1; (373 - 373) <= GiYKB3Wdu; GiYKB3Wdu = GiYKB3Wdu -1)
            if (k8IPbD[GiYKB3Wdu] != 0)
                break;
        for (xJUf7wq = GiYKB3Wdu; xJUf7wq >= 0; xJUf7wq = xJUf7wq - 1)
            printf ("%d", k8IPbD[xJUf7wq]);
        printf ("\n");
    };
}

