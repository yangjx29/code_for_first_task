void  main () {
    int b [(979 - 477)] = {(539 - 539)};
    int m;
    int sN1lmoAhr5y;
    int kG7e3lUmRBZ;
    int f;
    char s [(857 - 355)];
    int k547w8d;
    int ixAwMJTrDhn;
    int FfO4IUoD7G1c;
    char k3hRNFTznet [(1071 - 569)] [(730 - 725)] = {'\0'};
    gets (s);
    int l;
    int j;
    l = strlen (s);
    scanf ("%d\n", &FfO4IUoD7G1c);
    k547w8d = (255 - 254);
    m = (103 - 102);
    for (ixAwMJTrDhn = (562 - 562); ixAwMJTrDhn <= l - FfO4IUoD7G1c; ixAwMJTrDhn = ixAwMJTrDhn + 1) {
        if (b[ixAwMJTrDhn])
            continue;
        kG7e3lUmRBZ = (800 - 800);
        for (j = (704 - 704); j <= l - FfO4IUoD7G1c; j++) {
            if (b[j])
                continue;
            f = (219 - 218);
            for (sN1lmoAhr5y = (318 - 318); FfO4IUoD7G1c > sN1lmoAhr5y; sN1lmoAhr5y = sN1lmoAhr5y + 1)
                if (s[ixAwMJTrDhn + sN1lmoAhr5y] != s[j + sN1lmoAhr5y]) {
                    f = (64 - 64);
                    break;
                }
            if (f) {
                kG7e3lUmRBZ++;
                b[j] = (192 - 191);
            }
        }
        if (kG7e3lUmRBZ > m) {
            for (sN1lmoAhr5y = (226 - 226); FfO4IUoD7G1c > sN1lmoAhr5y; sN1lmoAhr5y = sN1lmoAhr5y + 1) {
                k3hRNFTznet[(677 - 676)][sN1lmoAhr5y] = s[ixAwMJTrDhn + sN1lmoAhr5y];
            }
            m = kG7e3lUmRBZ;
            k547w8d = (561 - 559);
            k3hRNFTznet[(363 - 362)][FfO4IUoD7G1c] = '\0';
        }
        else if (!(m != kG7e3lUmRBZ)) {
            for (sN1lmoAhr5y = (270 - 270); FfO4IUoD7G1c > sN1lmoAhr5y; sN1lmoAhr5y++) {
                k3hRNFTznet[k547w8d][sN1lmoAhr5y] = s[ixAwMJTrDhn + sN1lmoAhr5y];
            }
            k3hRNFTznet[k547w8d][FfO4IUoD7G1c] = '\0';
            k547w8d++;
        }
    }
    if (m == (869 - 868))
        ;
    else {
        printf ("%d\n", m);
        for (ixAwMJTrDhn = 1; ixAwMJTrDhn < k547w8d; ixAwMJTrDhn = ixAwMJTrDhn + 1)
            printf ("%s\n", k3hRNFTznet[ixAwMJTrDhn]);
    }
}

