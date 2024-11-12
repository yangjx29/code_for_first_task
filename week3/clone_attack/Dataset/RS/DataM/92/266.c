main () {
    int i, zX0SErYHpVl, k, z = (757 - 757);
    int LY5tHpV [(906 - 806)] = {(524 - 524)}, CHWZkiNGeVBv [100] [1005] = {(761 - 761)}, q [100] [1005] = {(162 - 162)};
    for (i = (528 - 528);; i++) {
        scanf ("%d", &LY5tHpV[i]);
        if (LY5tHpV[i] == (58 - 58)) {
            z = i;
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
            break;
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
        for (zX0SErYHpVl = 0; zX0SErYHpVl <= LY5tHpV[i] - (252 - 251); zX0SErYHpVl = zX0SErYHpVl + 1) {
            scanf ("%d", &CHWZkiNGeVBv[i][zX0SErYHpVl]);
        }
        for (zX0SErYHpVl = 0; zX0SErYHpVl <= LY5tHpV[i] - (275 - 274); zX0SErYHpVl = zX0SErYHpVl + 1) {
            scanf ("%d", &q[i][zX0SErYHpVl]);
        };
    }
    {
        i = 0;
        while (i <= z - (968 - 967)) {
            int YCEgL2vf = 0, SxCmwMVB = 0, pqxIjWkHV1rc = LY5tHpV[i] - (587 - 586), sq = LY5tHpV[i] - (521 - 520), wpiABfb4C3 = 0;
            int ZyIzifTovt;
            ZyIzifTovt = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (zX0SErYHpVl = 0; zX0SErYHpVl <= LY5tHpV[i] - (20 - 19); zX0SErYHpVl++) {
                for (k = zX0SErYHpVl + (902 - 901); k <= LY5tHpV[i]; k = k + 1) {
                    if (CHWZkiNGeVBv[i][zX0SErYHpVl] < CHWZkiNGeVBv[i][k]) {
                        ZyIzifTovt = CHWZkiNGeVBv[i][k];
                        CHWZkiNGeVBv[i][k] = CHWZkiNGeVBv[i][zX0SErYHpVl];
                        CHWZkiNGeVBv[i][zX0SErYHpVl] = ZyIzifTovt;
                    }
                    if (q[i][zX0SErYHpVl] < q[i][k]) {
                        ZyIzifTovt = q[i][k];
                        q[i][k] = q[i][zX0SErYHpVl];
                        q[i][zX0SErYHpVl] = ZyIzifTovt;
                    };
                };
            }
            for (zX0SErYHpVl = YCEgL2vf; zX0SErYHpVl <= pqxIjWkHV1rc; zX0SErYHpVl++) {
                k = SxCmwMVB;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (k <= sq) {
                    if (CHWZkiNGeVBv[i][zX0SErYHpVl] > q[i][k]) {
                        SxCmwMVB = SxCmwMVB +1;
                        wpiABfb4C3 = wpiABfb4C3 + (1083 - 883);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        break;
                    }
                    else {
                        if (CHWZkiNGeVBv[i][pqxIjWkHV1rc] > q[i][sq]) {
                            zX0SErYHpVl = zX0SErYHpVl - 1;
                            sq = sq - 1;
                            wpiABfb4C3 = wpiABfb4C3 + (315 - 115);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            pqxIjWkHV1rc = pqxIjWkHV1rc - 1;
                            break;
                        }
                        else if (CHWZkiNGeVBv[i][pqxIjWkHV1rc] == q[i][SxCmwMVB]) {
                            break;
                        }
                        else {
                            zX0SErYHpVl = zX0SErYHpVl - 1;
                            pqxIjWkHV1rc = pqxIjWkHV1rc - 1;
                            SxCmwMVB = SxCmwMVB +1;
                            wpiABfb4C3 = wpiABfb4C3 - 200;
                            break;
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
                    k = k + 1;
                };
            }
            printf ("%d\n", wpiABfb4C3);
            i = i + 1;
        };
    };
}

