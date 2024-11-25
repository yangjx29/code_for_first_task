int Fu1lAUP2Jnab [(125 - 115)] [10], add [10] [10], W8YZ9jMhvH6, ui78odh13;

void  KgCx4b3 (int j0xu3rzS, int xWVw16M) {
    int xxgGtBDbPhn;
    xxgGtBDbPhn = Fu1lAUP2Jnab[j0xu3rzS][xWVw16M];
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
        int WbovDTmEB = -(469 - 468);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (WbovDTmEB <= (233 - 232)) {
            for (int iG8Roa = -1;
            iG8Roa <= 1; iG8Roa++) {
                if (WbovDTmEB == (710 - 710) && !(0 != iG8Roa))
                    add[j0xu3rzS + WbovDTmEB][xWVw16M + iG8Roa] += xxgGtBDbPhn * 2;
                else
                    add[j0xu3rzS + WbovDTmEB][xWVw16M + iG8Roa] += xxgGtBDbPhn;
            }
            WbovDTmEB++;
        };
    }
    return;
}

int main () {
    cin >> W8YZ9jMhvH6 >> ui78odh13;
    memset (Fu1lAUP2Jnab, 0, sizeof (Fu1lAUP2Jnab));
    Fu1lAUP2Jnab[5][5] = W8YZ9jMhvH6;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (int k = 0;
    k < ui78odh13; k++) {
        {
            int WbovDTmEB = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (WbovDTmEB < 10) {
                {
                    int iG8Roa = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (iG8Roa < 10) {
                        if (Fu1lAUP2Jnab[WbovDTmEB][iG8Roa] != 0)
                            KgCx4b3 (WbovDTmEB, iG8Roa);
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
                        iG8Roa++;
                    };
                }
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
                WbovDTmEB++;
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
        memset (add, 0, sizeof (add));
        {
            int WbovDTmEB = 1;
            while (WbovDTmEB < 10) {
                {
                    int iG8Roa = 1;
                    while (iG8Roa < 10) {
                        Fu1lAUP2Jnab[WbovDTmEB][iG8Roa] = add[WbovDTmEB][iG8Roa];
                        iG8Roa++;
                    };
                }
                WbovDTmEB++;
            };
        };
    }
    {
        int WbovDTmEB = 1;
        while (WbovDTmEB < 10) {
            {
                int iG8Roa = 1;
                while (iG8Roa < 10) {
                    if (iG8Roa != 1)
                        cout << " " << Fu1lAUP2Jnab[WbovDTmEB][iG8Roa];
                    else
                        cout << Fu1lAUP2Jnab[WbovDTmEB][iG8Roa];
                    iG8Roa++;
                };
            }
            WbovDTmEB++;
            cout << endl;
        };
    }
    return 0;
}

