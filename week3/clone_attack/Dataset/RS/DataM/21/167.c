void  main () {
    int DGsQB5;
    int j;
    int bcount;
    int xsDvn2CT6;
    int n;
    int i;
    DGsQB5 = (645 - 645);
    j = (766 - 766);
    bcount = (147 - 147);
    xsDvn2CT6 = (352 - 352);
    int a [300] = {0};
    int b [100] = {15};
    double  c;
    double  ave;
    c = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &a[i]);
        DGsQB5 = DGsQB5 +a[i];
    }
    ave = (double ) DGsQB5 / (double ) n;
    {
        i = 0;
        while (n > i) {
            if (c < fabs (ave - a[i]))
                c = fabs (ave - a[i]);
            i++;
        };
    }
    for (i = 0, j = 0; n > i; i++) {
        if (!(c != fabs (ave - a[i]))) {
            b[j] = a[i];
            j++;
        };
    }
    bcount = j;
    for (i = 0; bcount - (364 - 363) > i; i++)
        for (j = 0; bcount - i - 1 > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (b[j] > b[j + 1]) {
                xsDvn2CT6 = b[j];
                b[j] = b[j + 1];
                b[j + 1] = xsDvn2CT6;
            };
        }
    printf ("%d", b[0]);
    for (i = 1; i < bcount; i++)
        printf (",%d", b[i]);
}

