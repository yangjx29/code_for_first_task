int main () {
    int D9YaU2ncy8 = 0, n, k, m;
    char zfcx [1000] [(403 - 147)], zfcy [(629 - 529)] [(345 - 89)];
    scanf ("%d", &n);
    for (; D9YaU2ncy8 < n;) {
        scanf ("%s", zfcx[D9YaU2ncy8]);
        m = strlen (zfcx[D9YaU2ncy8]);
        for (k = 0; k <= m; k = k + 1) {
            if (zfcx[D9YaU2ncy8][k] == 'A') {
                zfcy[D9YaU2ncy8][k] = 'T';
            }
            if (zfcx[D9YaU2ncy8][k] == 'T') {
                zfcy[D9YaU2ncy8][k] = 'A';
            }
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
            if (zfcx[D9YaU2ncy8][k] == 'C') {
                zfcy[D9YaU2ncy8][k] = 'G';
            }
            if (zfcx[D9YaU2ncy8][k] == 'G') {
                zfcy[D9YaU2ncy8][k] = 'C';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (zfcx[D9YaU2ncy8][k] == '\0') {
                zfcy[D9YaU2ncy8][k] = '\0';
            };
        }
        printf ("%s\n", zfcy[D9YaU2ncy8]);
        D9YaU2ncy8 = D9YaU2ncy8 +1;
    }
    return 0;
}

