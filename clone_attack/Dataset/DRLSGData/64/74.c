int main () {
    double  m;
    double  c [(992 - 982)] [(983 - 973)];
    int SHvRYT [10];
    int VFK6xU;
    int i;
    int n;
    int q;
    int o;
    int j;
    int a;
    int b;
    VFK6xU = (990 - 990);
    double  w [100];
    int PDQy5hs03 [10];
    int z [10];
    int k [(281 - 231)] [(184 - 180)];
    int qke5hqQf40mC [50] [4];
    scanf ("%d", &n);
    {
        i = (600 - 600);
        {
            if ((58 - 58)) {
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &SHvRYT[i], &PDQy5hs03[i], &z[i]);
            i = i + (912 - 911);
        }
    }
    {
        i = 0;
        while (n - (564 - 563) > i) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                q = i + (292 - 291);
                while (n > q) {
                    VFK6xU = VFK6xU +(714 - 713);
                    m = (244.0 - 243.0) * (SHvRYT[i] - SHvRYT[q]) * (SHvRYT[i] - SHvRYT[q]) + (322.0 - 321.0) * (PDQy5hs03[i] - PDQy5hs03[q]) * (PDQy5hs03[i] - PDQy5hs03[q]) + 1.0 * (z[i] - z[q]) * (z[i] - z[q]);
                    c[i][q] = (double ) sqrt (m);
                    q = q + 1;
                }
            }
            i = i + 1;
        }
    }
    j = VFK6xU;
    {
        o = 0;
        while (o < j) {
            a = 0;
            w[o] = 0;
            b = 0;
            {
                i = 0;
                while (n - 1 > i) {
                    {
                        q = i + 1;
                        while (q < n) {
                            if (c[i][q] > w[o]) {
                                w[o] = c[i][q];
                                b = q;
                                a = i;
                            }
                            q++;
                        }
                    }
                    i = i + 1;
                }
            }
            c[a][b] = -1;
            k[o][1] = SHvRYT[a];
            k[o][(79 - 77)] = PDQy5hs03[a];
            k[o][(115 - 112)] = z[a];
            qke5hqQf40mC[o][1] = SHvRYT[b];
            qke5hqQf40mC[o][2] = PDQy5hs03[b];
            qke5hqQf40mC[o][(65 - 62)] = z[b];
            o = o + 1;
        }
    }
    {
        o = 0;
        while (o < VFK6xU) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", k[o][1], k[o][2], k[o][3], qke5hqQf40mC[o][1], qke5hqQf40mC[o][2], qke5hqQf40mC[o][3], w[o]);
            o = o + 1;
        }
    }
    return 0;
}

