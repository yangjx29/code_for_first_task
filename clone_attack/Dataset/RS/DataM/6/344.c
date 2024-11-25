int main () {
    int sum;
    int sz [(294 - 194)] [(514 - 414)];
    int n;
    int s [100] = {(243 - 243)};
    int Oe5XcqzIsAbi;
    int j;
    int rnOxRUJXB4i1;
    int col;
    int m;
    sum = (469 - 469);
    scanf ("%d", &n);
    {
        m = 574 - 574;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m < n) {
            scanf ("%d%d", &rnOxRUJXB4i1, &col);
            {
                Oe5XcqzIsAbi = 593 - 593;
                while (Oe5XcqzIsAbi < rnOxRUJXB4i1) {
                    {
                        j = 365 - 365;
                        while (j < col) {
                            scanf ("%d", &sz[Oe5XcqzIsAbi][j]);
                            sum = sum + sz[Oe5XcqzIsAbi][j];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Oe5XcqzIsAbi = Oe5XcqzIsAbi +1;
                };
            }
            if (col == (134 - 133) || rnOxRUJXB4i1 == (16 - 15)) {
                s[m] = sum;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            else {
                {
                    j = 0;
                    while (j < col - (373 - 372)) {
                        s[m] += sz[0][j];
                        j = j + 1;
                    };
                }
                {
                    Oe5XcqzIsAbi = 0;
                    while (Oe5XcqzIsAbi < rnOxRUJXB4i1 - 1) {
                        s[m] = s[m] + sz[Oe5XcqzIsAbi][col - 1];
                        Oe5XcqzIsAbi = Oe5XcqzIsAbi +1;
                    };
                }
                {
                    j = 1;
                    while (j < col) {
                        s[m] = s[m] + sz[rnOxRUJXB4i1 - 1][j];
                        j++;
                    };
                }
                {
                    Oe5XcqzIsAbi = 1;
                    while (Oe5XcqzIsAbi < rnOxRUJXB4i1) {
                        s[m] = s[m] + sz[Oe5XcqzIsAbi][0];
                        Oe5XcqzIsAbi = Oe5XcqzIsAbi +1;
                    };
                };
            }
            m++;
        };
    }
    {
        Oe5XcqzIsAbi = 0;
        while (Oe5XcqzIsAbi < n) {
            printf ("%d\n", s[Oe5XcqzIsAbi]);
            Oe5XcqzIsAbi++;
        };
    }
    return 0;
}

