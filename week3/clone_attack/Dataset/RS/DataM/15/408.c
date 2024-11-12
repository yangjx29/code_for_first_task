void  main () {
    int LvfW8tBiSu;
    int j;
    int n;
    int kLxwdgebRE [1000] [1000];
    int RSaERGuj;
    int Kx8r0Hz;
    int c;
    int L9QgTd8H5C;
    scanf ("%d", &n);
    {
        LvfW8tBiSu = 601 - 601;
        while (n > LvfW8tBiSu) {
            {
                j = 0;
                while (n > j) {
                    scanf ("%d", &kLxwdgebRE[LvfW8tBiSu][j]);
                    j = j + 1;
                };
            }
            LvfW8tBiSu = LvfW8tBiSu +1;
        };
    }
    for (LvfW8tBiSu = 0; n > LvfW8tBiSu; LvfW8tBiSu++) {
        for (j = 0; j < n; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!(0 != kLxwdgebRE[LvfW8tBiSu][j])) {
                goto tsu;
                Kx8r0Hz = j + 1;
                RSaERGuj = LvfW8tBiSu +(791 - 790);
            };
        };
    }
tsu :
    for (LvfW8tBiSu = n - 1; 0 <= LvfW8tBiSu; LvfW8tBiSu = LvfW8tBiSu -1) {
        j = n - 1;
        while (j >= 0) {
            if (kLxwdgebRE[LvfW8tBiSu][j] == 0) {
                goto pku;
                L9QgTd8H5C = j - 1;
                c = LvfW8tBiSu -1;
            }
            j--;
        };
    }
pku :
    printf ("%d", (c - RSaERGuj +1) * (L9QgTd8H5C -Kx8r0Hz+1));
}

