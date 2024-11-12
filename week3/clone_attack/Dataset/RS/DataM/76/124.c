int main () {
    int sz [10000];
    int RX9FkxibP, V1BW9GOi, DXMpf3EZ, k, PPplaFn, min, z, t;
    int T96rEB2DetT [RX9FkxibP], b [RX9FkxibP];
    double  th7Xprfaqwim;
    scanf ("%d", &RX9FkxibP);
    for (V1BW9GOi = (617 - 617); RX9FkxibP > V1BW9GOi; V1BW9GOi = V1BW9GOi +1) {
        scanf ("%d%d", &T96rEB2DetT[V1BW9GOi], &b[V1BW9GOi]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    PPplaFn = b[(711 - 711)];
    min = T96rEB2DetT[(628 - 628)];
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
    for (V1BW9GOi = (227 - 226); V1BW9GOi < RX9FkxibP; V1BW9GOi++) {
        if (T96rEB2DetT[V1BW9GOi] < min) {
            min = T96rEB2DetT[V1BW9GOi];
        }
        if (b[V1BW9GOi] > PPplaFn) {
            PPplaFn = b[V1BW9GOi];
        };
    }
    {
        V1BW9GOi = min;
        while ((752 - 750) * PPplaFn -min >= V1BW9GOi) {
            sz[V1BW9GOi] = (946 - 946);
            V1BW9GOi++;
        };
    }
    {
        th7Xprfaqwim = min;
        while (th7Xprfaqwim <= PPplaFn) {
            k = 0;
            {
                DXMpf3EZ = 0;
                while (DXMpf3EZ < RX9FkxibP) {
                    if (b[DXMpf3EZ] >= th7Xprfaqwim && T96rEB2DetT[DXMpf3EZ] <= th7Xprfaqwim) {
                        k++;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    DXMpf3EZ++;
                };
            }
            if (k != 0) {
                t = min + 2 * (th7Xprfaqwim - min);
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
                sz[t] = 1;
            }
            th7Xprfaqwim = th7Xprfaqwim + 0.5;
        };
    }
    z = (439 - 439);
    for (V1BW9GOi = min; V1BW9GOi <= 2 * PPplaFn -min; V1BW9GOi++) {
        if (sz[V1BW9GOi] == 0) {
            z = z + 1;
        };
    }
    if (z == 0) {
        printf ("%d %d", min, PPplaFn);
    }
    else
        printf ("no");
    return 0;
}

