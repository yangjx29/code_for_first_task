void  main () {
    int i;
    int RdSoD5;
    int n;
    int AN67nvP;
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
    int wEkwztBY [(435 - 430)] [5], vsMjwm;
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
        while (5 > i) {
            {
                RdSoD5 = 0;
                while (RdSoD5 < 5) {
                    scanf ("%d", &wEkwztBY[i][RdSoD5]);
                    RdSoD5 = RdSoD5 +1;
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &n, &AN67nvP);
    if (0 <= n && 5 > n && AN67nvP >= 0 && AN67nvP < 5) {
        {
            i = 0;
            while (i < 5) {
                vsMjwm = wEkwztBY[n][i];
                wEkwztBY[n][i] = wEkwztBY[AN67nvP][i];
                wEkwztBY[AN67nvP][i] = vsMjwm;
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (i = 0; i < 5; i++) {
            {
                RdSoD5 = 0;
                while (RdSoD5 < 5) {
                    printf ("%d", wEkwztBY[i][RdSoD5]);
                    if (RdSoD5 < 4)
                        printf (" ");
                    RdSoD5 = RdSoD5 +1;
                };
            }
            printf ("\n");
        };
    }
    else
        ;
}

