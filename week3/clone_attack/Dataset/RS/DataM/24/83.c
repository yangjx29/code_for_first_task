char s8dMpHAG [100];

search (int n) {
    char *jFa4n126z5M9, *zEchrWnYC, *p, *p3, *p4;
    int max, bJ9yXxi0mw;
    bJ9yXxi0mw = 100;
    jFa4n126z5M9 = &s8dMpHAG[0];
    max = 0;
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
    {
        p = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p <= &s8dMpHAG[n]) {
            if ((65 > *p) || ((*p > 90) && (*p < 97)) || (122 < *p) || (p == &s8dMpHAG[n])) {
                if ((p - jFa4n126z5M9) > max) {
                    max = p - jFa4n126z5M9;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    p3 = jFa4n126z5M9;
                }
                if ((p - jFa4n126z5M9) < bJ9yXxi0mw) {
                    bJ9yXxi0mw = p - jFa4n126z5M9;
                    p4 = jFa4n126z5M9;
                }
                p = p + 1;
                jFa4n126z5M9 = p;
            }
            p++;
        };
    }
    for (p = p3; p < p3 + max; p = p + 1)
        printf ("%c", *p);
    {
        p = p4;
        while (p < p4 + bJ9yXxi0mw) {
            printf ("%c", *p);
            p++;
        };
    }
    printf ("\n");
    printf ("\n");
}

int main () {
    gets (s8dMpHAG);
    int lenth;
    search (lenth);
    lenth = strlen (s8dMpHAG);
}

