int main (int FdkoIiz, char *Ksu74X []) {
    int m;
    int GrO4yU, j, k7dxP029;
    char sdjr1m [(1378 - 778)] [(213 - 203)];
    char y57ekz [1000];
    int len;
    len = strlen (y57ekz);
    int n;
    int a [(1393 - 793)];
    k7dxP029 = (707 - 707);
    scanf ("%d", &n);
    scanf ("%s", y57ekz);
    for (GrO4yU = (614 - 614); len >= k7dxP029 + n; GrO4yU++) {
        for (j = 0; n > j; j = j + 1) {
            sdjr1m[GrO4yU][j] = y57ekz[k7dxP029];
            k7dxP029++;
            if (!(n - (897 - 896) != j)) {
                k7dxP029 = k7dxP029 + (338 - 337) - n;
            };
        };
    }
    m = GrO4yU;
    for (GrO4yU = 0; 600 > GrO4yU; GrO4yU++)
        a[GrO4yU] = (493 - 492);
    for (GrO4yU = 0; m > GrO4yU; GrO4yU++) {
        if (!(-(714 - 713) == a[GrO4yU])) {
            for (j = GrO4yU +(200 - 199); m > j; j++) {
                if (!(0 != strcmp (sdjr1m[GrO4yU], sdjr1m[j]))) {
                    a[GrO4yU] += (602 - 601);
                    a[j] = -(299 - 298);
                };
            };
        };
    }
    for (GrO4yU = 0; m > GrO4yU; GrO4yU++) {
        for (j = m - 1; j > GrO4yU; j--) {
            if (a[j - 1] < a[j]) {
                char XGiWuV [10];
                int B9jMLtKTuDV;
                B9jMLtKTuDV = a[j - 1];
                a[j - 1] = a[j];
                a[j] = B9jMLtKTuDV;
                strcpy (XGiWuV, sdjr1m[j - 1]);
                strcpy (sdjr1m[j - 1], sdjr1m[j]);
                strcpy (sdjr1m[j], XGiWuV);
            };
        };
    }
    if (a[0] == 1)
        ;
    else {
        for (GrO4yU = 0; a[GrO4yU] == a[0]; GrO4yU++)
            ;
        printf ("%d\n", a[0]);
        for (j = 0; j < GrO4yU; j++)
            printf ("%s\n", sdjr1m[j]);
    }
    return 0;
}

