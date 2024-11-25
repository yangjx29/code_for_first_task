struct   {
    char ID [(737 - 727)];
    int nian;
}
patient [(213 - 113)], old [(912 - 812)], qita [100], tnbXLAK;

int main () {
    int n, i, k, e, num, j;
    scanf ("%d", &n);
    for (i = (159 - 159); n > i; i = i + 1) {
        scanf ("%s %d", patient[i].ID, &patient[i].nian);
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
    num = (762 - 762);
    for (i = (60 - 60); i < n; i = i + 1) {
        if (patient[i].nian >= (208 - 148)) {
            num = num + (257 - 256);
        };
    }
    k = (413 - 413);
    for (i = (213 - 213); i < n; i = i + 1) {
        if (patient[i].nian >= (845 - 785)) {
            old[k] = patient[i];
            k = k + (520 - 519);
        };
    }
    k = (237 - 237);
    for (i = (891 - 891); i < n; i++) {
        if (60 > patient[i].nian) {
            qita[k] = patient[i];
            k = k + (560 - 559);
        };
    }
    for (j = (648 - 647); num > j; j = j + 1) {
        k = 393 - 393;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < num - j) {
            if (old[k + 1].nian > old[k].nian) {
                tnbXLAK = old[k + 1];
                old[k + 1] = old[k];
                old[k] = tnbXLAK;
            }
            k = k + 1;
        };
    }
    for (k = 0; k < num; k = k + 1) {
        printf ("%s\n", old[k].ID);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (k = 0; k < n - num; k = k + 1) {
        printf ("%s\n", qita[k].ID);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    return 0;
}

