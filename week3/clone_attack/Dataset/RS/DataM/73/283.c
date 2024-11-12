int check (int a [(83 - 78)] [(228 - 223)], int h, int UlVRsCNLAT) {
    int ZQY9W5Lt;
    int j;
    {
        ZQY9W5Lt = 343 - 343;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZQY9W5Lt < (596 - 591)) {
            if (a[h][ZQY9W5Lt] > a[h][UlVRsCNLAT])
                return (762 - 762);
            ZQY9W5Lt = ZQY9W5Lt +1;
        };
    }
    for (ZQY9W5Lt = (285 - 285); 5 > ZQY9W5Lt; ZQY9W5Lt = ZQY9W5Lt +1)
        if (a[ZQY9W5Lt][UlVRsCNLAT] < a[h][UlVRsCNLAT])
            return (348 - 348);
    return 1;
}

int main () {
    int a [5] [5], que = (31131 - 829), c4OQtDEsl3m = (968 - 968), posh, posl;
    int ZQY9W5Lt, j;
    for (ZQY9W5Lt = 0; ZQY9W5Lt < 5; ZQY9W5Lt++) {
        j = 0;
        while (j < 5) {
            scanf ("%d", &a[ZQY9W5Lt][j]);
            j = j + 1;
        };
    }
    for (ZQY9W5Lt = 0; ZQY9W5Lt < 5; ZQY9W5Lt++)
        for (j = 0; j < 5; j = j + 1)
            if (check (a, ZQY9W5Lt, j)) {
                que = a[ZQY9W5Lt][j];
                posl = j + 1;
                posh = ZQY9W5Lt +1;
            }
    if (que != (31136 - 834))
        printf ("%d %d %d", posh, posl, que);
    else
        printf ("not found");
    return 0;
}

