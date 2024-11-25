void  main () {
    char osPFqg [100];
    int k;
    int NwDQd1;
    int i;
    int K1WOIML;
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
    int m;
    k = 0;
    gets (osPFqg);
    NwDQd1 = strlen (osPFqg);
    {
        i = NwDQd1 -1;
        while (i >= 0) {
            if (osPFqg[i] == ' ') {
                k = k + 1;
                m = i;
                for (K1WOIML = i + 1; !(' ' == osPFqg[K1WOIML]) && K1WOIML < NwDQd1; K1WOIML = K1WOIML +1) {
                    printf ("%c", osPFqg[K1WOIML]);
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
            i = i - 1;
        };
    }
    if (k == 0)
        puts (osPFqg);
    else {
        i = 0;
        while (i < m) {
            printf ("%c", osPFqg[i]);
            i = i + 1;
        };
    };
}

