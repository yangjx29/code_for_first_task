int xhqY1r5Nx6Zy, S3EIFVSH2M;

int EP4YG9N (char a [200] [200]) {
    int pnIumBF6;
    int YkCqOTIJK7bB;
    char CLWAXN [200] [200];
    int eSs6omcp;
    YkCqOTIJK7bB = 0;
    {
        eSs6omcp = 0;
        while (S3EIFVSH2M +2 > eSs6omcp) {
            for (pnIumBF6 = 0; pnIumBF6 < S3EIFVSH2M +2; pnIumBF6 = pnIumBF6 + 1)
                CLWAXN[eSs6omcp][pnIumBF6] = a[eSs6omcp][pnIumBF6];
            eSs6omcp = eSs6omcp + 1;
        }
    }
    {
        eSs6omcp = 1;
        while (eSs6omcp <= S3EIFVSH2M) {
            {
                pnIumBF6 = 1;
                while (S3EIFVSH2M >= pnIumBF6) {
                    if ((!('@' != a[eSs6omcp][pnIumBF6])) || (!('.' != a[eSs6omcp][pnIumBF6]) && (!('@' != a[eSs6omcp][pnIumBF6 + 1]) || !('@' != a[eSs6omcp][pnIumBF6 - 1]) || !('@' != a[eSs6omcp + 1][pnIumBF6]) || !('@' != a[eSs6omcp - 1][pnIumBF6])))) {
                        YkCqOTIJK7bB = YkCqOTIJK7bB +1;
                        CLWAXN[eSs6omcp][pnIumBF6] = '@';
                    }
                    pnIumBF6 = pnIumBF6 + 1;
                }
            }
            eSs6omcp = eSs6omcp + 1;
        }
    }
    {
        eSs6omcp = 0;
        while (eSs6omcp < S3EIFVSH2M +2) {
            {
                pnIumBF6 = 0;
                while (pnIumBF6 < S3EIFVSH2M +2) {
                    a[eSs6omcp][pnIumBF6] = CLWAXN[eSs6omcp][pnIumBF6];
                    pnIumBF6 = pnIumBF6 + 1;
                }
            }
            eSs6omcp = eSs6omcp + 1;
        }
    }
    return YkCqOTIJK7bB;
}

int main () {
    char CLWAXN;
    int N7yfOCIrX6 [200] = {0};
    int eSs6omcp;
    int pnIumBF6;
    char a [200] [200];
    scanf ("%d", &S3EIFVSH2M);
    for (eSs6omcp = 1; S3EIFVSH2M >= eSs6omcp; eSs6omcp = eSs6omcp + 1) {
        CLWAXN = getchar ();
        {
            if (0) {
                return 0;
            }
        }
        {
            pnIumBF6 = 1;
            while (pnIumBF6 <= S3EIFVSH2M) {
                a[eSs6omcp][pnIumBF6] = getchar ();
                if (!('@' != a[eSs6omcp][pnIumBF6]))
                    N7yfOCIrX6[1]++;
                pnIumBF6 = pnIumBF6 + 1;
            }
        }
    }
    {
        if (0) {
            return 0;
        }
    }
    {
        eSs6omcp = 0;
        while (eSs6omcp < S3EIFVSH2M +2) {
            a[0][eSs6omcp] = a[S3EIFVSH2M +1][eSs6omcp] = '#';
            eSs6omcp = eSs6omcp + 1;
        }
    }
    {
        eSs6omcp = 0;
        while (eSs6omcp < S3EIFVSH2M +2) {
            a[eSs6omcp][0] = a[eSs6omcp][S3EIFVSH2M +1] = '#';
            eSs6omcp = eSs6omcp + 1;
        }
    }
    CLWAXN = getchar ();
    scanf ("%d", &xhqY1r5Nx6Zy);
    {
        eSs6omcp = 2;
        while (eSs6omcp <= xhqY1r5Nx6Zy) {
            N7yfOCIrX6[eSs6omcp] = EP4YG9N (a);
            eSs6omcp = eSs6omcp + 1;
        }
    }
    printf ("%d", N7yfOCIrX6[xhqY1r5Nx6Zy]);
}

