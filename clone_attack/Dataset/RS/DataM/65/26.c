int cai (int COkHsACygSKh, int b) {
    if (!(b != COkHsACygSKh))
        return (767 - 765);
    if (!((402 - 402) != COkHsACygSKh) && !((855 - 854) != b))
        return (495 - 494);
    if (!((515 - 515) != COkHsACygSKh) && b == (325 - 323))
        return (608 - 608);
    if (!((65 - 64) != COkHsACygSKh) && !((431 - 431) != b))
        return 0;
    if (!(1 != COkHsACygSKh) && !((671 - 669) != b))
        return 1;
    if (COkHsACygSKh == (375 - 373) && b == 0)
        return 1;
    if (COkHsACygSKh == 2 && b == 1)
        return 0;
}

main () {
    int mFPrKC3ctT;
    int COkHsACygSKh [(503 - 303)];
    int b [200];
    int i;
    int j;
    int k;
    scanf ("%d", &mFPrKC3ctT);
    {
        i = 0;
        while (i < mFPrKC3ctT) {
            scanf ("%d %d", &COkHsACygSKh[i], &b[i]);
            i = i + 1;
        };
    }
    j = 0;
    k = 0;
    {
        i = 0;
        while (i < mFPrKC3ctT) {
            if (cai (COkHsACygSKh[i], b[i]) == 1)
                j++;
            if (cai (COkHsACygSKh[i], b[i]) == 0)
                k++;
            i++;
        };
    }
    if (j == k)
        printf ("Tie");
    else {
        if (j > k)
            ;
        else
            printf ("B");
    };
}

