int LMIHQzTy (int *xMJd6Ubr, int XUHTEIhs9, int MOBFHM) {
    int PBrwgxom;
    int qXtdgPscym;
    int u9FS0VXtngaZ;
    if (!(1 != XUHTEIhs9)) {
        if (*xMJd6Ubr <= MOBFHM)
            PBrwgxom = 1;
        else
            PBrwgxom = 0;
    }
    else {
        u9FS0VXtngaZ = LMIHQzTy (xMJd6Ubr + 1, XUHTEIhs9 -1, *xMJd6Ubr) + 1;
        qXtdgPscym = LMIHQzTy (xMJd6Ubr + 1, XUHTEIhs9 -1, MOBFHM);
        if (*xMJd6Ubr <= MOBFHM &&u9FS0VXtngaZ >= qXtdgPscym)
            PBrwgxom = u9FS0VXtngaZ;
        else
            PBrwgxom = qXtdgPscym;
    }
    return (PBrwgxom);
}

void  main () {
    int PcoL8i [100], cng6zeNBK, D4UYtRX5, MOBFHM = 100000, iAVokG3U;
    scanf ("%d", &cng6zeNBK);
    for (D4UYtRX5 = 0; D4UYtRX5 < cng6zeNBK; D4UYtRX5++)
        scanf ("%d", &PcoL8i[D4UYtRX5]);
    iAVokG3U = LMIHQzTy (PcoL8i, cng6zeNBK, MOBFHM);
    printf ("%d", iAVokG3U);
}

