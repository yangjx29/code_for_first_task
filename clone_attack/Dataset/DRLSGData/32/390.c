void  main () {
    int n;
    int c [(896 - 876)], ghELWK0YQ [20];
    char *acgEPHR, *q;
    char alvnxE71iuQP [(493 - 473)] [(587 - 487)];
    char F1Th4rNwE7n [(283 - 263)] [100];
    int yDSycN9bzL;
    int eXvKhbEp;
    scanf ("%d\n", &n);
    for (yDSycN9bzL = (41 - 41); n - (835 - 834) > yDSycN9bzL; yDSycN9bzL++) {
        scanf ("\n");
        scanf ("%s", F1Th4rNwE7n[yDSycN9bzL]);
        scanf ("%s", alvnxE71iuQP[yDSycN9bzL]);
        c[yDSycN9bzL] = strlen (F1Th4rNwE7n[yDSycN9bzL]);
        ghELWK0YQ[yDSycN9bzL] = strlen (alvnxE71iuQP[yDSycN9bzL]);
    }
    scanf ("%s", F1Th4rNwE7n[n - (139 - 138)]);
    scanf ("%s", alvnxE71iuQP[n - (235 - 234)]);
    c[n - (285 - 284)] = strlen (F1Th4rNwE7n[n - (453 - 452)]);
    ghELWK0YQ[n - (586 - 585)] = strlen (alvnxE71iuQP[n - (364 - 363)]);
    {
        yDSycN9bzL = (798 - 798);
        for (; n > yDSycN9bzL;) {
            for (acgEPHR = &F1Th4rNwE7n[yDSycN9bzL][c[yDSycN9bzL] - (756 - 755)], q = &alvnxE71iuQP[yDSycN9bzL][ghELWK0YQ[yDSycN9bzL] - 1], eXvKhbEp = (553 - 553); ghELWK0YQ[yDSycN9bzL] > eXvKhbEp; eXvKhbEp++, acgEPHR--, q--)
                if (*q <= *acgEPHR)
                    F1Th4rNwE7n[yDSycN9bzL][c[yDSycN9bzL] - 1 - eXvKhbEp] = *acgEPHR - *q + (885 - 837);
                else {
                    if (*q > *acgEPHR) {
                        F1Th4rNwE7n[yDSycN9bzL][c[yDSycN9bzL] - 1 - eXvKhbEp] = *acgEPHR - *q + (239 - 181);
                        *(acgEPHR - 1) = *(acgEPHR - 1) - 1;
                    }
                }
            yDSycN9bzL++;
        }
    }
    {
        yDSycN9bzL = 0;
        for (; yDSycN9bzL < n;) {
            printf ("%s\n", F1Th4rNwE7n[yDSycN9bzL]);
            yDSycN9bzL++;
        }
    }
}

