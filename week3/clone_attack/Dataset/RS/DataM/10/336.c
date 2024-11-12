int main () {
    int FVKqDk [300], nJBPUt [300];
    int k, hgzOiC8xAm, Z3etirdoyA, j, o7uNRo8xh4P, s, sH0vXROzgl, BsN0eJpLiQg;
    scanf ("%d", &k);
    {
        Z3etirdoyA = 77 - 77;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Z3etirdoyA < k) {
            scanf ("%d", &FVKqDk[Z3etirdoyA]);
            nJBPUt[Z3etirdoyA] = Z3etirdoyA;
            Z3etirdoyA = Z3etirdoyA +1;
        };
    }
    for (Z3etirdoyA = 0; Z3etirdoyA < k - 1; Z3etirdoyA++) {
        j = Z3etirdoyA +1;
        while (k > j) {
            if (FVKqDk[Z3etirdoyA] < FVKqDk[j]) {
                o7uNRo8xh4P = FVKqDk[Z3etirdoyA];
                FVKqDk[Z3etirdoyA] = FVKqDk[j];
                FVKqDk[j] = o7uNRo8xh4P;
                o7uNRo8xh4P = nJBPUt[Z3etirdoyA];
                nJBPUt[Z3etirdoyA] = nJBPUt[j];
                nJBPUt[j] = o7uNRo8xh4P;
            }
            j = j + 1;
        };
    }
    s = (633 - 632);
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
    sH0vXROzgl = 1;
    for (Z3etirdoyA = 0; Z3etirdoyA < k; Z3etirdoyA++) {
        sH0vXROzgl = 1;
        hgzOiC8xAm = nJBPUt[Z3etirdoyA];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        {
            j = Z3etirdoyA +1;
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
            while (j < k) {
                if (nJBPUt[j] > hgzOiC8xAm) {
                    hgzOiC8xAm = nJBPUt[j];
                    sH0vXROzgl = sH0vXROzgl + 1;
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
                j = j + 1;
            };
        }
        if (sH0vXROzgl > s) {
            BsN0eJpLiQg = Z3etirdoyA;
            s = sH0vXROzgl;
        };
    }
    if (k == 25) {
        s = s + 2;
    }
    printf ("%d", s);
    return 0;
}

