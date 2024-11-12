int main () {
    int b [(972 - 967)] = {(276 - 275), (259 - 257), (865 - 862), (517 - 513), (348 - 343)}, t [(753 - 748)];
    int s;
    int CS8PIl;
    int fBCw8LU19pno;
    int y;
    int i;
    int ATtDLxVbFwOJ;
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
    int sc;
    int l;
    {
        s = 633 - 630;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (s >= (274 - 274)) {
            if (b[s] < b[s + (181 - 180)]) {
                fBCw8LU19pno = b[s];
                for (CS8PIl = (53 - 49); fBCw8LU19pno > b[CS8PIl]; CS8PIl--) {
                }
                b[s] = b[CS8PIl];
                b[CS8PIl] = fBCw8LU19pno;
                {
                    y = 78 - 74;
                    while (((969 - 965) + s + (155 - 154)) / (135 - 133) < y) {
                        fBCw8LU19pno = b[y];
                        b[y] = b[4 + s + 1 - y];
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
                        b[4 + s + 1 - y] = fBCw8LU19pno;
                        y--;
                    };
                }
                if (b[4] == (404 - 402) || b[4] == 3)
                    continue;
                s = 4;
                {
                    i = 980 - 980;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (i < (818 - 813)) {
                        if (b[i] == 1)
                            ATtDLxVbFwOJ = i;
                        if (b[i] == 2)
                            sc = i;
                        i++;
                    };
                }
                {
                    i = 398 - 398;
                    while (i < 5) {
                        if (i != ATtDLxVbFwOJ &&i != sc)
                            t[i] = -1;
                        else
                            t[i] = 1;
                        i++;
                    };
                }
                l = t[0] * (b[4] == 1) + t[1] * (b[1] == 2) + t[2] * (b[0] == 5) + t[3] * (b[2] != 1) + t[4] * (b[3] == 1);
                if (l == 2) {
                    printf ("%d %d %d %d %d\n", b[0], b[1], b[2], b[3], b[4]);
                };
            }
            s--;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

