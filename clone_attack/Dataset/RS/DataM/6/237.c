int main () {
    int k;
    int i;
    int j;
    int c2Lkt98egTYB;
    int FiS3VrBHRFWP;
    int n;
    int m;
    int lAxvGgr [100] [100];
    int lIYtbV2q [100];
    scanf ("%d", &k);
    for (i = (833 - 833); i < k; i++) {
        FiS3VrBHRFWP = 0;
        scanf ("%d %d", &m, &n);
        for (j = (368 - 368); j < m; j++) {
            c2Lkt98egTYB = 0;
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
            while (c2Lkt98egTYB < n) {
                scanf ("%d", &lAxvGgr[j][c2Lkt98egTYB]);
                c2Lkt98egTYB++;
            };
        }
        for (c2Lkt98egTYB = 0; c2Lkt98egTYB < n; c2Lkt98egTYB++) {
            FiS3VrBHRFWP += lAxvGgr[0][c2Lkt98egTYB];
        }
        if (m > 1) {
            c2Lkt98egTYB = 0;
            while (c2Lkt98egTYB < n) {
                FiS3VrBHRFWP = FiS3VrBHRFWP +lAxvGgr[m - 1][c2Lkt98egTYB];
                c2Lkt98egTYB++;
            };
        }
        for (j = 1; j < m - 1; j++) {
            FiS3VrBHRFWP += lAxvGgr[j][0];
        }
        if (n > 1) {
            for (j = 1; j < m - 1; j++) {
                FiS3VrBHRFWP += lAxvGgr[j][n - 1];
            };
        }
        lIYtbV2q[i] = FiS3VrBHRFWP;
    }
    for (i = 0; i < k; i++) {
        printf ("%d\n", lIYtbV2q[i]);
    }
    return 0;
}

