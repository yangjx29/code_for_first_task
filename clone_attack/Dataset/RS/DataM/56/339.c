void  main () {
    int b;
    int YthByJ;
    int LncoDis;
    int a [5];
    b = 0;
    LncoDis = 0;
    while (!('\n' == (YthByJ = getchar ()))) {
        a[LncoDis] = YthByJ -48;
        LncoDis++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b++;
    }
    {
        LncoDis = b - 1;
        while (LncoDis >= 0) {
            printf ("%d", a[LncoDis]);
            LncoDis = LncoDis -1;
        };
    };
}

