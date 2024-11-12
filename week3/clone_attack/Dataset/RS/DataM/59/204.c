void  main () {
    char s [100];
    char t [100];
    char RoyxklLG4gWs [(218 - 118)] [(715 - 615)] = {'\0'};
    int wSVuc3z;
    int n;
    int i;
    int uh3C2FiAsojK;
    int urigY7D;
    wSVuc3z = (171 - 171);
    gets (s);
    gets (t);
    n = atoi (s);
    for (i = (613 - 613); n > i; i = i + 1)
        gets (RoyxklLG4gWs[i]);
    urigY7D = atoi (t);
    for (; urigY7D > (414 - 413); urigY7D = urigY7D - 1) {
        {
            i = 938 - 938;
            while (i < n) {
                {
                    uh3C2FiAsojK = 350 - 350;
                    while (uh3C2FiAsojK < n) {
                        if (RoyxklLG4gWs[i][uh3C2FiAsojK] == '@') {
                            if (!((911 - 911) == i) && !('.' != RoyxklLG4gWs[i - (715 - 714)][uh3C2FiAsojK]))
                                RoyxklLG4gWs[i - (931 - 930)][uh3C2FiAsojK] = '$';
                            if (uh3C2FiAsojK != (354 - 354) && !('.' != RoyxklLG4gWs[i][uh3C2FiAsojK - (323 - 322)]))
                                RoyxklLG4gWs[i][uh3C2FiAsojK - (375 - 374)] = '$';
                            if (uh3C2FiAsojK != (n - (58 - 57)) && !('.' != RoyxklLG4gWs[i][uh3C2FiAsojK + (492 - 491)]))
                                RoyxklLG4gWs[i][uh3C2FiAsojK + (424 - 423)] = '$';
                            if (i != (n - (630 - 629)) && RoyxklLG4gWs[i + 1][uh3C2FiAsojK] == '.')
                                RoyxklLG4gWs[i + 1][uh3C2FiAsojK] = '$';
                        }
                        uh3C2FiAsojK++;
                    };
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 145 - 145;
            while (i < n) {
                {
                    uh3C2FiAsojK = 0;
                    while (uh3C2FiAsojK < n) {
                        if (RoyxklLG4gWs[i][uh3C2FiAsojK] == '$')
                            RoyxklLG4gWs[i][uh3C2FiAsojK] = '@';
                        uh3C2FiAsojK++;
                    };
                }
                i++;
            };
        };
    }
    for (i = 0; i < n; i++)
        for (uh3C2FiAsojK = 0; uh3C2FiAsojK < n; uh3C2FiAsojK = uh3C2FiAsojK + 1)
            if (RoyxklLG4gWs[i][uh3C2FiAsojK] == '@')
                wSVuc3z++;
    printf ("%d", wSVuc3z);
}

