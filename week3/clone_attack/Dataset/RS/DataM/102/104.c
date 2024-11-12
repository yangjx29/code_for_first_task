main () {
    char s [80];
    double  a [50];
    double  lLUrPlnF [50];
    double  p;
    int n;
    int m;
    int yqA51HGS;
    int j;
    int DXShuc;
    DXShuc = 0;
    m = 0;
    scanf ("%d", &n);
    for (yqA51HGS = 0; yqA51HGS < n; yqA51HGS++) {
        scanf ("%s", &s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[0] == 'm') {
            scanf ("%lf", &a[m]);
            m = m + 1;
        }
        if (s[0] == 'f') {
            scanf ("%lf", &lLUrPlnF[DXShuc]);
            DXShuc++;
        };
    }
    {
        yqA51HGS = 0;
        while (yqA51HGS < m - (685 - 684)) {
            for (j = yqA51HGS + 1; j < m; j = j + 1)
                if (a[yqA51HGS] > a[j]) {
                    p = a[yqA51HGS];
                    a[yqA51HGS] = a[j];
                    a[j] = p;
                }
            yqA51HGS = yqA51HGS + 1;
        };
    }
    printf ("%.2lf", a[0]);
    {
        yqA51HGS = 0;
        while (yqA51HGS < DXShuc -1) {
            {
                j = yqA51HGS + 1;
                while (DXShuc > j) {
                    if (lLUrPlnF[yqA51HGS] < lLUrPlnF[j]) {
                        p = lLUrPlnF[yqA51HGS];
                        lLUrPlnF[yqA51HGS] = lLUrPlnF[j];
                        lLUrPlnF[j] = p;
                    }
                    j++;
                };
            }
            yqA51HGS = yqA51HGS + 1;
        };
    }
    for (yqA51HGS = 1; yqA51HGS < m; yqA51HGS++)
        printf (" %.2lf", a[yqA51HGS]);
    for (j = 0; j < DXShuc; j = j + 1)
        printf (" %.2lf", lLUrPlnF[j]);
}

