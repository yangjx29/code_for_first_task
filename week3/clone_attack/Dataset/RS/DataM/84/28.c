void  main () {
    int PzPwUrlo;
    int i, j;
    double  a [100];
    double  mokgzbTG9Nl;
    scanf ("%d", &PzPwUrlo);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (498 - 498); i < PzPwUrlo -1; i = i + 1) {
        scanf ("\n");
        scanf ("%lf", &a[i]);
    }
    scanf ("%lf", &a[PzPwUrlo -1]);
    for (j = 0; j < PzPwUrlo; j = j + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (i = 0; i < PzPwUrlo -j; i++) {
            if (a[i + 1] > a[i]) {
                mokgzbTG9Nl = a[i + 1];
                a[i + 1] = a[i];
                a[i] = mokgzbTG9Nl;
            };
        };
    }
    printf ("%.0lf\n", a[0]);
    printf ("%.0lf\n", a[1]);
}

