void  main () {
    int AscFjQOf7, iYCi9kcj8TMA, Xt8vUoudD, l = 0, UuvmUshy [300];
    do {
        scanf ("%d", &UuvmUshy[l]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        l = l + 1;
    }
    while (!('\n' == getchar ()));
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
    if (!(1 == l)) {
        {
            AscFjQOf7 = 0;
            while (l > AscFjQOf7) {
                AscFjQOf7 = AscFjQOf7 +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                {
                    iYCi9kcj8TMA = 0;
                    while (l - AscFjQOf7 -1 > iYCi9kcj8TMA) {
                        if (UuvmUshy[iYCi9kcj8TMA + 1] < UuvmUshy[iYCi9kcj8TMA]) {
                            Xt8vUoudD = UuvmUshy[iYCi9kcj8TMA];
                            UuvmUshy[iYCi9kcj8TMA] = UuvmUshy[iYCi9kcj8TMA + 1];
                            UuvmUshy[iYCi9kcj8TMA + 1] = Xt8vUoudD;
                        }
                        iYCi9kcj8TMA++;
                    };
                };
            };
        }
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
        if (UuvmUshy[0] == UuvmUshy[l - 1])
            printf ("No");
        {
            AscFjQOf7 = l - 1;
            while (AscFjQOf7 >= 0) {
                if (UuvmUshy[AscFjQOf7] != UuvmUshy[l - 1]) {
                    printf ("%d", UuvmUshy[AscFjQOf7]);
                    break;
                }
                AscFjQOf7 = AscFjQOf7 -1;
            };
        };
    }
    else
        printf ("No");
}

