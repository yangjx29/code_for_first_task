int main () {
    int m;
    m = 0;
    int AocijvAb0e = 0;
    int NpvdKPc;
    int elimtsS [501];
    int n;
    int PPBkeD;
    int EfUL7pby8esj = 1;
    int b [501];
    scanf ("%d", &n);
    for (PPBkeD = 0; PPBkeD < n - 1; PPBkeD = PPBkeD +1) {
        scanf ("%d ", &elimtsS[PPBkeD]);
    }
    scanf ("%d", &elimtsS[n - 1]);
    for (PPBkeD = 0; n > PPBkeD; PPBkeD = PPBkeD +1) {
        if (!(0 == elimtsS[PPBkeD] % 2)) {
            m = m + 1;
        };
    }
    for (PPBkeD = 0; PPBkeD < n; PPBkeD++) {
        if (elimtsS[PPBkeD] % 2 != 0) {
            b[AocijvAb0e] = elimtsS[PPBkeD];
            AocijvAb0e++;
        };
    }
    for (AocijvAb0e = 0; AocijvAb0e < m - 1; AocijvAb0e = AocijvAb0e +1) {
        for (PPBkeD = 0; PPBkeD < m - EfUL7pby8esj; PPBkeD++) {
            if (b[PPBkeD] > b[PPBkeD +1]) {
                NpvdKPc = b[PPBkeD];
                b[PPBkeD] = b[PPBkeD +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                b[PPBkeD +1] = NpvdKPc;
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
        EfUL7pby8esj++;
    }
    for (PPBkeD = 0; PPBkeD < m - 1; PPBkeD++) {
        printf ("%d,", b[PPBkeD]);
    }
    printf ("%d", b[m - 1]);
    return 0;
}

