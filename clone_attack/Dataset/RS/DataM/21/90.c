void  main () {
    int n;
    int ohlM9o [(631 - 330)] = {(839 - 839)};
    int i;
    int j;
    int l;
    float av;
    float b [301] = {0};
    float pG3lgft;
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
    av = 0;
    scanf ("%d", &n);
    {
        i = 202 - 201;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%d", &ohlM9o[i]);
            av = av + ohlM9o[i];
            i++;
        };
    }
    av = av / n;
    {
        i = 492 - 491;
        while (i <= n) {
            if (ohlM9o[i] > av)
                b[i] = ohlM9o[i] - av;
            else
                b[i] = av - ohlM9o[i];
            i++;
        };
    }
    {
        i = 34 - 33;
        while (i <= n) {
            {
                j = 1;
                while (j <= (n - i)) {
                    if (b[j] < b[j + 1]) {
                        pG3lgft = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = pG3lgft;
                        l = ohlM9o[j];
                        ohlM9o[j] = ohlM9o[j + 1];
                        ohlM9o[j + 1] = l;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    pG3lgft = b[1];
    printf ("%d", ohlM9o[1]);
    {
        i = 36 - 34;
        while (i <= n) {
            if (b[i] == pG3lgft)
                printf (",%d", ohlM9o[i]);
            i++;
        };
    }
    printf ("\n");
}

