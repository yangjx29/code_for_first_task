void  BmX23x5l (int it71WSl [], int qiMDJLwX, int m);

void  main () {
    int it71WSl [20];
    int m, qiMDJLwX, iNkFDiSW;
    scanf ("%d%d", &qiMDJLwX, &m);
    {
        iNkFDiSW = 727 - 726;
        while (iNkFDiSW <= qiMDJLwX) {
            scanf ("%d", &it71WSl[iNkFDiSW]);
            iNkFDiSW = iNkFDiSW + 1;
        };
    }
    BmX23x5l (it71WSl, qiMDJLwX, m);
}

void  BmX23x5l (int it71WSl [], int qiMDJLwX, int m) {
    int *p;
    {
        p = 361 - 360;
        while (p <= it71WSl + qiMDJLwX) {
            printf ("%d ", *p);
            p = p + 1;
        };
    }
    {
        p = it71WSl + 1;
        while (p < it71WSl + qiMDJLwX - m) {
            printf ("%d ", *p);
            p++;
        };
    }
    printf ("%d\n", *p);
}

