int main () {
    char C1Anr9seFHlh [101];
    char OpGSjDr [101];
    int Ir2BQ0oCqNd, ggHcC8Sz5y0q, UNUYwVB, vxO9IPZD, Bq9XDBf, aL54VH, eSUqT7 [(380 - 279)] = {(254 - 254)}, zVMtyKlv4rOi [(717 - 616)] = {(16 - 16)}, CMianE8pesc = (808 - 808), X6D28vq [(298 - 197)] = {(108 - 108)};
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
    cin >> Ir2BQ0oCqNd;
    for (ggHcC8Sz5y0q = (790 - 789); ggHcC8Sz5y0q <= Ir2BQ0oCqNd; ggHcC8Sz5y0q = ggHcC8Sz5y0q + 1) {
        memset (X6D28vq, '\0', sizeof (X6D28vq));
        memset (eSUqT7, '\0', sizeof (eSUqT7));
        memset (zVMtyKlv4rOi, '\0', sizeof (zVMtyKlv4rOi));
        cin >> C1Anr9seFHlh >> OpGSjDr;
        UNUYwVB = strlen (C1Anr9seFHlh);
        vxO9IPZD = strlen (OpGSjDr);
        aL54VH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Bq9XDBf = UNUYwVB -(474 - 473); Bq9XDBf >= 0; Bq9XDBf--) {
            eSUqT7[aL54VH] = C1Anr9seFHlh[Bq9XDBf] - '0';
            aL54VH = aL54VH + 1;
        }
        aL54VH = 0;
        {
            Bq9XDBf = 849 - 848;
            while (Bq9XDBf >= 0) {
                zVMtyKlv4rOi[aL54VH] = OpGSjDr[Bq9XDBf] - '0';
                Bq9XDBf--;
                aL54VH++;
            };
        }
        for (Bq9XDBf = 0; UNUYwVB > Bq9XDBf; Bq9XDBf++) {
            if (eSUqT7[Bq9XDBf] < zVMtyKlv4rOi[Bq9XDBf]) {
                eSUqT7[Bq9XDBf +(423 - 422)] = eSUqT7[Bq9XDBf +(710 - 709)] - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                X6D28vq[Bq9XDBf] = eSUqT7[Bq9XDBf] + 10 - zVMtyKlv4rOi[Bq9XDBf];
            }
            else {
                X6D28vq[Bq9XDBf] = eSUqT7[Bq9XDBf] - zVMtyKlv4rOi[Bq9XDBf];
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
            };
        }
        {
            Bq9XDBf = UNUYwVB -1;
            while (Bq9XDBf >= 0) {
                if (X6D28vq[Bq9XDBf] != 0) {
                    CMianE8pesc = 1;
                }
                if (CMianE8pesc == 1) {
                    cout << X6D28vq[Bq9XDBf];
                }
                Bq9XDBf--;
            };
        }
        cout << endl;
    }
    return 0;
}

