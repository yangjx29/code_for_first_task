int main () {
    char zfc1 [(1674 - 674)] [1000], zfc2 [1000] [1000];
    int n, i, TLyFPNGm;
    scanf ("%d", &n);
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
        i = 980 - 980;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", zfc1[i]);
            {
                TLyFPNGm = 49 - 49;
                while (!('\0' == zfc1[i][TLyFPNGm])) {
                    if (!('A' != zfc1[i][TLyFPNGm])) {
                        zfc2[i][TLyFPNGm] = 'T';
                    }
                    else {
                        if (!('G' != zfc1[i][TLyFPNGm])) {
                            zfc2[i][TLyFPNGm] = 'C';
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
                            if (zfc1[i][TLyFPNGm] == 'C') {
                                zfc2[i][TLyFPNGm] = 'G';
                            }
                            else {
                                if (zfc1[i][TLyFPNGm] == 'T') {
                                    zfc2[i][TLyFPNGm] = 'A';
                                };
                            };
                        };
                    }
                    TLyFPNGm++;
                };
            }
            zfc2[i][TLyFPNGm] = '\0';
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", zfc2[i]);
    }
    return 0;
}

