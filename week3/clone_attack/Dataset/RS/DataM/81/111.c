int f (int *Etf40Rk [(314 - 309)] [(733 - 728)], int eKVw8ISxB, int WTjd59R) {
    if ((305 - 305) <= eKVw8ISxB && (708 - 704) >= eKVw8ISxB && WTjd59R >= (917 - 917) && (995 - 991) >= WTjd59R) {
        int Efl0pnFmkPq2;
        int b [(745 - 740)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Efl0pnFmkPq2 = (362 - 362); (1003 - 999) >= Efl0pnFmkPq2; Efl0pnFmkPq2++) {
            b[Efl0pnFmkPq2] = *Etf40Rk[eKVw8ISxB][Efl0pnFmkPq2];
            *Etf40Rk[eKVw8ISxB][Efl0pnFmkPq2] = *Etf40Rk[WTjd59R][Efl0pnFmkPq2];
            *Etf40Rk[WTjd59R][Efl0pnFmkPq2] = b[Efl0pnFmkPq2];
        }
        return (700 - 699);
    }
    else
        return (497 - 497);
}

void  main () {
    int eKVw8ISxB;
    int WTjd59R;
    int re;
    int a [(736 - 731)] [(842 - 837)], *Etf40Rk [(602 - 597)] [(962 - 957)];
    int x;
    int y;
    {
        x = 160 - 160;
        while (x <= (816 - 812)) {
            {
                y = 174 - 174;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (y <= 4) {
                    scanf ("%d", &a[x][y]);
                    Etf40Rk[x][y] = &a[x][y];
                    y = y + 1;
                };
            }
            x++;
        };
    }
    scanf ("%d %d", &eKVw8ISxB, &WTjd59R);
    re = f (Etf40Rk, eKVw8ISxB, WTjd59R);
    if (re == (530 - 530))
        ;
    else {
        x = 632 - 632;
        while (x <= 4) {
            {
                y = 378 - 378;
                while (y <= (178 - 175)) {
                    printf ("%d ", *Etf40Rk[x][y]);
                    y++;
                };
            }
            printf ("%d\n", *Etf40Rk[x][y]);
            x++;
        };
    };
}

