void  main () {
    int na, ZPcC3k, i = 0, yGEaTzs, AoGctOz1Vp;
    char a [50], b [50];
    scanf ("%s %s", a, b);
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
    na = strlen (a);
    ZPcC3k = strlen (b);
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
        while (i <= ZPcC3k -na) {
            if (!(b[i] != a[0])) {
                AoGctOz1Vp = 0;
                for (yGEaTzs = 0; yGEaTzs < na; yGEaTzs = yGEaTzs + 1)
                    if (a[yGEaTzs] == b[yGEaTzs + i])
                        AoGctOz1Vp = AoGctOz1Vp +1;
                if (AoGctOz1Vp == na)
                    printf ("%d", i);
                break;
            }
            i = i + 1;
        };
    };
}

