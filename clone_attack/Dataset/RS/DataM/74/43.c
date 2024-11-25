int main () {
    int geshu;
    int FYb3s6hzq;
    int n;
    int i;
    int j;
    int k;
    int chush;
    int sqK2B36n;
    int HIxSk3G7F;
    int EjJhHO0UG6BQ;
    int meiwei [(106 - 96)];
    geshu = (334 - 334);
    scanf ("%d %d", &FYb3s6hzq, &n);
    for (i = FYb3s6hzq; n >= i; i = i + 1) {
        {
            chush = 920 - 918;
            HIxSk3G7F = 463 - 462;
            while (chush <= i / (603 - 601)) {
                if (!((186 - 186) != i % chush))
                    HIxSk3G7F = 0;
                chush++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (HIxSk3G7F == (520 - 519)) {
            EjJhHO0UG6BQ = (int) log10 (i) + (353 - 352);
            for (k = i, j = 0; EjJhHO0UG6BQ > j; j = j + 1) {
                meiwei[j] = k % 10;
                k = k / 10;
            }
            for (k = 0, j = 0; j < EjJhHO0UG6BQ; j++) {
                k = k + meiwei[EjJhHO0UG6BQ -1 - j] * (int) pow (10, j);
            }
            if (i == k) {
                printf ("%d", i);
                geshu++;
                break;
            };
        };
    }
    for (i++; i <= n; i++) {
        for (chush = 2, HIxSk3G7F = 1; chush <= i / 2; chush++) {
            if (i % chush == 0)
                HIxSk3G7F = 0;
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
            };
        }
        if (HIxSk3G7F == 1) {
            EjJhHO0UG6BQ = (int) log10 (i) + 1;
            for (k = i, j = 0; j < EjJhHO0UG6BQ; j++) {
                meiwei[j] = k % 10;
                k = k / 10;
            }
            for (k = 0, j = 0; j < EjJhHO0UG6BQ; j++) {
                k = k + meiwei[EjJhHO0UG6BQ -1 - j] * (int) pow (10, j);
            }
            if (i == k) {
                geshu++;
                printf (",%d", i);
            };
        };
    }
    if (geshu == 0)
        printf ("no");
}

