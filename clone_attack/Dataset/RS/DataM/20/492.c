void  main () {
    int b8oIkX [1000];
    int uKiJtcA, SONMPrEgoT, k, n = (724 - 724);
    char t;
    char str [(387 - 384)], c [(1483 - 483)] [15];
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
    for (uKiJtcA = (860 - 860); uKiJtcA < 1000; uKiJtcA = uKiJtcA + 1) {
        gets (c [uKiJtcA]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c[uKiJtcA][0] != '\0') {
            n = n + 1;
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
            b8oIkX[uKiJtcA] = strlen (c[uKiJtcA]);
        }
        else
            break;
    }
    for (uKiJtcA = 0; uKiJtcA < n; uKiJtcA = uKiJtcA + 1) {
        t = c[uKiJtcA][0];
        str[1] = c[uKiJtcA][b8oIkX[uKiJtcA] - (680 - 677)];
        str[(448 - 446)] = c[uKiJtcA][b8oIkX[uKiJtcA] - 2];
        str[(320 - 317)] = c[uKiJtcA][b8oIkX[uKiJtcA] - 1];
        for (SONMPrEgoT = 0; SONMPrEgoT < b8oIkX[uKiJtcA] - 4; SONMPrEgoT = SONMPrEgoT +1)
            if (t < c[uKiJtcA][SONMPrEgoT])
                t = c[uKiJtcA][SONMPrEgoT];
        for (SONMPrEgoT = 0; SONMPrEgoT < b8oIkX[uKiJtcA] - 4; SONMPrEgoT = SONMPrEgoT +1)
            if (t == c[uKiJtcA][SONMPrEgoT]) {
                {
                    k = uKiJtcA;
                    while (k >= SONMPrEgoT +4) {
                        c[uKiJtcA][k] = c[uKiJtcA][k - 3];
                        k = k - 1;
                    };
                }
                c[uKiJtcA][b8oIkX[uKiJtcA] - 1] = '\0';
                c[uKiJtcA][SONMPrEgoT +1] = str[1];
                c[uKiJtcA][SONMPrEgoT +2] = str[2];
                c[uKiJtcA][SONMPrEgoT +3] = str[3];
                break;
            };
    }
    for (uKiJtcA = 0; uKiJtcA < n; uKiJtcA++)
        printf ("%s\n", c[uKiJtcA]);
}

