main () {
    int Tvf2xkyr = -1;
    int x, j;
    int b [500];
    int n, r, i;
    char s [501];
    char HO3Fsy0TG [500] [6];
    int p;
    {
        i = 810 - 810;
        while (500 > i) {
            b[i] = 1;
            i = i + 1;
        };
    }
    scanf ("%d", &n);
    scanf ("%s", s);
    x = strlen (s);
    for (i = 0; i <= x - n; i++) {
        Tvf2xkyr = Tvf2xkyr +1;
        for (j = i; j < i + n; j++)
            HO3Fsy0TG[Tvf2xkyr][j - i] = s[j];
    }
    {
        i = 0;
        while (i < Tvf2xkyr) {
            x = strlen (HO3Fsy0TG[i]);
            if (n < x)
                continue;
            for (j = i + 1; j <= Tvf2xkyr; j++) {
                {
                    r = 0;
                    while (r < n) {
                        if (HO3Fsy0TG[i][r] != HO3Fsy0TG[j][r])
                            break;
                        r = r + 1;
                    };
                }
                if (r == n) {
                    b[i]++;
                    HO3Fsy0TG[j][n] = '0';
                };
            }
            i++;
        };
    }
    p = b[0];
    {
        i = 1;
        while (i <= Tvf2xkyr) {
            if (b[i] > p)
                p = b[i];
            i++;
        };
    }
    if (p == 1)
        ;
    else {
        printf ("%d\n", p);
        {
            i = 0;
            while (i <= Tvf2xkyr) {
                if (b[i] == p)
                    printf ("%s\n", HO3Fsy0TG[i]);
                i++;
            };
        };
    };
}

