void  main () {
    int num;
    int DDMsGQuflx;
    int x54aDhN38XjG;
    int TrZsRuNv3ey8;
    int lasl;
    int i;
    int j;
    int g0J6Y2;
    int col;
    int a [(681 - 576)] [(272 - 167)];
    num = (519 - 519);
    DDMsGQuflx = (524 - 524);
    x54aDhN38XjG = (108 - 108);
    scanf ("%d %d", &g0J6Y2, &col);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (g0J6Y2 > i) {
            {
                j = 0;
                while (col > j) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    TrZsRuNv3ey8 = g0J6Y2 - (894 - 893);
    lasl = col - 1;
    while ((g0J6Y2 * col) >= num) {
        {
            i = x54aDhN38XjG;
            while (lasl >= i) {
                printf ("%d\n", a[DDMsGQuflx][i]);
                num++;
                i++;
            };
        }
        if (!(g0J6Y2 * col != num))
            break;
        DDMsGQuflx = DDMsGQuflx +1;
        {
            i = DDMsGQuflx;
            while (TrZsRuNv3ey8 >= i) {
                printf ("%d\n", a[i][lasl]);
                i++;
                num++;
            };
        }
        if (num == g0J6Y2 * col)
            break;
        lasl--;
        {
            i = lasl;
            while (i >= x54aDhN38XjG) {
                num++;
                printf ("%d\n", a[TrZsRuNv3ey8][i]);
                i = i - 1;
            };
        }
        if (num == g0J6Y2 * col)
            break;
        TrZsRuNv3ey8--;
        for (i = TrZsRuNv3ey8; i >= DDMsGQuflx; i--) {
            num++;
            printf ("%d\n", a[i][x54aDhN38XjG]);
        }
        if (num == g0J6Y2 * col)
            break;
        x54aDhN38XjG++;
    };
}

