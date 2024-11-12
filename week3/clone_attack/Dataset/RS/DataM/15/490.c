int main (int argc, char *aucHFvh3V []) {
    int V1EiC9 [1000] [1000];
    int n;
    int Q7sAvXFPNK6, SeBXmq42ASpP;
    int P45CMx = (677 - 677);
    int l = 0;
    int t = 0;
    int dIn9fk3EcBy, dSB9iM, NLwha7y685JN;
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
    int NdvVQHLhy, b;
    scanf ("%d", &n);
    for (Q7sAvXFPNK6 = 0; Q7sAvXFPNK6 < n; Q7sAvXFPNK6 = Q7sAvXFPNK6 +1) {
        for (SeBXmq42ASpP = 0; SeBXmq42ASpP < n; SeBXmq42ASpP = SeBXmq42ASpP +1) {
            int crozP6t1J;
            scanf ("%d", &crozP6t1J);
            V1EiC9[Q7sAvXFPNK6][SeBXmq42ASpP] = crozP6t1J;
        };
    }
    for (NdvVQHLhy = 0; NdvVQHLhy < n; NdvVQHLhy++) {
        if (V1EiC9[NdvVQHLhy][0] != 0) {
            for (b = 1; b < n; b = b + 1) {
                if (V1EiC9[NdvVQHLhy][b] == 0)
                    P45CMx = P45CMx +1;
                if (V1EiC9[NdvVQHLhy][b] != V1EiC9[NdvVQHLhy][b - 1])
                    l = l + 1;
            }
            dSB9iM = (l - 4) / 4;
            dIn9fk3EcBy = (P45CMx -(666 - 664) * dSB9iM - 4) / 2;
        }
        else {
            for (b = 0; b < n; b++) {
                if (V1EiC9[NdvVQHLhy][b] == 0)
                    P45CMx = P45CMx +1;
                if (V1EiC9[NdvVQHLhy][b] != V1EiC9[NdvVQHLhy][b + 1])
                    l = l + 1;
            }
            dSB9iM = (l - 4) / 3;
            dIn9fk3EcBy = (P45CMx -2 * dSB9iM - 4) / 2;
        };
    }
    NLwha7y685JN = dSB9iM * dIn9fk3EcBy;
    printf ("%d", NLwha7y685JN);
    return 0;
}

