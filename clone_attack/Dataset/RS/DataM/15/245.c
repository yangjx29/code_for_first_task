int main () {
    int n;
    int i;
    int j;
    int a;
    int GUFEtmo;
    int p;
    int q;
    int r;
    int A [(967 - 867)] [100];
    scanf ("%d", &n);
    {
        i = 402 - 402;
        while (n > i) {
            for (j = (837 - 837); n > j; j = j + 1)
                scanf ("%d", &A[i][j]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (A[i][j] == (305 - 50) && A[i][j - (957 - 956)] == 255 && A[i - (474 - 473)][j] == 0) {
                GUFEtmo = j;
                a = i;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < n) {
                    if (A[i][j] == 0 && A[i][j - 1] == 255) {
                        q = j;
                        p = i;
                        i = n;
                        j = n;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    r = (a - p - 2) * (GUFEtmo -q - 1);
    printf ("%d\n", r);
    return 0;
}

