int main () {
    char str [10000];
    char *qnTeD02 = str;
    gets (str);
    int l;
    int XFEZC9HTWfu;
    int kNA5CoL;
    int y;
    int m;
    int num [1000] = {(831 - 831)};
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
    int CuBOEWhGy4;
    int *KCZoqEDTmc = num;
    XFEZC9HTWfu = 0;
    kNA5CoL = 0;
    y = 0;
    m = 1;
    l = strlen (str);
    for (CuBOEWhGy4 = kNA5CoL; l > CuBOEWhGy4; CuBOEWhGy4++) {
        if (!(' ' == *(qnTeD02 + CuBOEWhGy4))) {
            *(KCZoqEDTmc +XFEZC9HTWfu) = *(KCZoqEDTmc +XFEZC9HTWfu) + 1;
            y = 0;
        }
        else {
            if (y == 0) {
                y = 1;
                XFEZC9HTWfu = XFEZC9HTWfu +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                kNA5CoL = CuBOEWhGy4 +1;
                m = XFEZC9HTWfu;
            };
        };
    }
    if (m != 1) {
        for (XFEZC9HTWfu = 0; XFEZC9HTWfu < m; XFEZC9HTWfu = XFEZC9HTWfu +1)
            printf ("%d,", *(KCZoqEDTmc +XFEZC9HTWfu));
        printf ("%d", *(KCZoqEDTmc +m));
    }
    else
        printf ("%d", *KCZoqEDTmc);
    return 0;
}

