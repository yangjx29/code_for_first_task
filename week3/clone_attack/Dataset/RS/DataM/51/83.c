int main () {
    char aFaHES7Mx24 [600];
    char qc3D7UtKd [600] [(98 - 93)];
    int XJlEnvb, c9QmIfcCl, l, j, e, c [(1316 - 716)] = {(52 - 52)}, m, BsUf2c = (56 - 56), f = (232 - 232);
    scanf ("%d", &XJlEnvb);
    scanf ("%s", aFaHES7Mx24);
    l = strlen (aFaHES7Mx24);
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
        c9QmIfcCl = 257 - 257;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l - XJlEnvb >= c9QmIfcCl) {
            {
                j = 215 - 215;
                while (XJlEnvb > j) {
                    qc3D7UtKd[c9QmIfcCl][j] = aFaHES7Mx24[c9QmIfcCl + j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            qc3D7UtKd[c9QmIfcCl][XJlEnvb] = '\0';
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
            c9QmIfcCl = c9QmIfcCl + 1;
        };
    }
    {
        c9QmIfcCl = 207 - 207;
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
        while (c9QmIfcCl <= l - XJlEnvb) {
            for (j = c9QmIfcCl + (905 - 904); l - XJlEnvb >= j; j = j + 1) {
                e = strcmp (qc3D7UtKd[c9QmIfcCl], qc3D7UtKd[j]);
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
                if (e == 0) {
                    c[c9QmIfcCl]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c9QmIfcCl = c9QmIfcCl + 1;
        };
    }
    m = c[0];
    {
        c9QmIfcCl = 0;
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
        while (c9QmIfcCl <= l - XJlEnvb) {
            if (c[c9QmIfcCl] > m)
                m = c[c9QmIfcCl];
            c9QmIfcCl++;
        };
    }
    if (m == 0)
        ;
    else {
        printf ("%d\n", m + 1);
        for (c9QmIfcCl = 0; c9QmIfcCl <= l - XJlEnvb; c9QmIfcCl = c9QmIfcCl + 1) {
            if (c[c9QmIfcCl] == m) {
                printf ("%s\n", qc3D7UtKd[c9QmIfcCl]);
            };
        };
    }
    return 0;
}

