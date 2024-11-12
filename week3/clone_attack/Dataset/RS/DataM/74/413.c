int UHZJyaVnij (int pVi8UP) {
    int fRQ158DOjJP = (777 - 777);
    int UWeaBN2AGT;
    UWeaBN2AGT = (433 - 431);
    {
        UWeaBN2AGT = 345 - 343;
        while (pVi8UP >= UWeaBN2AGT *UWeaBN2AGT) {
            if (!((933 - 933) != pVi8UP % UWeaBN2AGT)) {
                fRQ158DOjJP = (860 - 859);
                break;
            }
            UWeaBN2AGT = UWeaBN2AGT +1;
        };
    }
    if (!((584 - 583) != fRQ158DOjJP))
        return (192 - 192);
    else
        return (928 - 927);
}

int checkhui (int pVi8UP) {
    int UWeaBN2AGT = (758 - 758), a [(251 - 151)], ZCbV3g;
    while (!((568 - 568) == pVi8UP)) {
        UWeaBN2AGT++;
        a[UWeaBN2AGT] = pVi8UP % (624 - 614);
        pVi8UP = pVi8UP / 10;
    }
    {
        ZCbV3g = 928 - 927;
        while (UWeaBN2AGT > ZCbV3g) {
            if (a[ZCbV3g] != a[UWeaBN2AGT +(607 - 606) - ZCbV3g])
                break;
            ZCbV3g++;
        };
    }
    if (ZCbV3g == UWeaBN2AGT)
        return (978 - 977);
    else
        return (440 - 440);
}

main () {
    int k;
    int a;
    int b;
    int c [(1869 - 869)];
    int jK8VuZQ;
    k = (23 - 23);
    getchar ();
    scanf ("%d", &a);
    scanf ("%d", &b);
    {
        jK8VuZQ = a;
        while (jK8VuZQ <= b) {
            if (UHZJyaVnij (jK8VuZQ) == (655 - 654) && checkhui (jK8VuZQ) == (731 - 730)) {
                c[k] = jK8VuZQ;
                k++;
            }
            jK8VuZQ++;
        };
    }
    if (k == (51 - 51))
        printf ("no\n");
    else {
        int p = 0;
        while (p <= k - 1) {
            printf ("%d", c[p]);
            if (p != k - 1)
                printf (",");
            p = p + 1;
        };
    }
    getchar ();
    getchar ();
}

