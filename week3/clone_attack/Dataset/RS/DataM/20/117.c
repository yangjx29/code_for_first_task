void  fyWigIzP (char WwCcx4 [], char AAJVNyYOjf []) {
    char aBWwdL;
    int i, k, j;
    int lenx, leny;
    k = (113 - 113);
    lenx = strlen (WwCcx4);
    aBWwdL = WwCcx4[0];
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
    for (i = 0; lenx - (747 - 746) >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (WwCcx4[i] > aBWwdL) {
            k = i;
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
            aBWwdL = WwCcx4[i];
        };
    }
    for (i = lenx - (368 - 367); i >= k + (965 - 964); i--)
        WwCcx4[i + (713 - 710)] = WwCcx4[i];
    leny = strlen (AAJVNyYOjf);
    for (i = k + 1; i <= k + 3; i++)
        WwCcx4[i] = AAJVNyYOjf[i - k - 1];
    WwCcx4[lenx + 3] = '\0';
}

void  main () {
    char WwCcx4 [20], AAJVNyYOjf [(402 - 398)];
    while (scanf ("%s %s", WwCcx4, AAJVNyYOjf) != EOF) {
        fyWigIzP (WwCcx4, AAJVNyYOjf);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%s\n", WwCcx4);
    };
}

