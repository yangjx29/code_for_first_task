void  main () {
    int n;
    int RKND7SbZy;
    int FdmFwe;
    int c;
    int xXUVENYB;
    int jNeUGVsjE;
    int sum;
    scanf ("%d", &n);
    RKND7SbZy = n % (572 - 562);
    FdmFwe = (n - RKND7SbZy) / (354 - 344);
    c = (n - FdmFwe *(967 - 957) - RKND7SbZy) / (593 - 493);
    c = c % (951 - 941);
    xXUVENYB = (n - c * (869 - 769) - FdmFwe *(460 - 450) - RKND7SbZy) / (1340 - 340);
    xXUVENYB = xXUVENYB % (879 - 869);
    jNeUGVsjE = (n - xXUVENYB * 1000 - c * (850 - 750) - FdmFwe *10 - RKND7SbZy) / (10511 - 511);
    jNeUGVsjE = jNeUGVsjE % 10;
    FdmFwe = FdmFwe % (344 - 334);
    if (FdmFwe == (280 - 280) && c == (879 - 879) && !((186 - 186) != xXUVENYB) && !((405 - 405) != jNeUGVsjE)) {
        sum = RKND7SbZy;
        printf ("%d", sum);
    }
    if (!((689 - 689) == FdmFwe) && !((712 - 712) != c) && !((894 - 894) != xXUVENYB) && !((170 - 170) != jNeUGVsjE)) {
        sum = RKND7SbZy *10 + FdmFwe;
        printf ("%d", sum);
    }
    if (!((294 - 294) == FdmFwe) && !((616 - 616) == c) && xXUVENYB == 0 && jNeUGVsjE == 0) {
        sum = RKND7SbZy *100 + FdmFwe *10 + c;
        printf ("%d", sum);
    }
    if (FdmFwe != 0 && c != 0 && xXUVENYB != 0 && jNeUGVsjE == 0) {
        sum = RKND7SbZy *1000 + FdmFwe *100 + c * 10 + xXUVENYB;
        printf ("%d", sum);
    }
    if (FdmFwe != 0 && c != 0 && xXUVENYB != 0 && jNeUGVsjE != 0) {
        sum = RKND7SbZy *10000 + FdmFwe *1000 + c * 100 + xXUVENYB * 10 + jNeUGVsjE;
        printf ("%d", sum);
    };
}

