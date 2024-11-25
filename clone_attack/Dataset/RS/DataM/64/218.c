struct   point {
    int HuNv3AVjeZL, y1I09RWQJq, c;
}
x [(672 - 662)];

int d (int k, int n) {
    int Kf0TdMCY54x;
    for (Kf0TdMCY54x = n - (806 - 805); Kf0TdMCY54x < k; Kf0TdMCY54x = Kf0TdMCY54x -1)
        k = k - Kf0TdMCY54x;
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
    return (n - Kf0TdMCY54x -(318 - 317));
}

int f (int k, int n) {
    int Kf0TdMCY54x;
    {
        Kf0TdMCY54x = 95 - 94;
        while (k > Kf0TdMCY54x) {
            k = k - Kf0TdMCY54x;
            Kf0TdMCY54x = Kf0TdMCY54x -1;
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
    return (n - Kf0TdMCY54x +k - (831 - 830));
}

void  main () {
    float y [(505 - 459)];
    int n, Kf0TdMCY54x, j, k = (687 - 687), q [(1015 - 969)], t;
    scanf ("%d", &n);
    for (Kf0TdMCY54x = (538 - 538); Kf0TdMCY54x < n; Kf0TdMCY54x = Kf0TdMCY54x +1)
        scanf ("%d %d %d", &x[Kf0TdMCY54x].HuNv3AVjeZL, &x[Kf0TdMCY54x].y1I09RWQJq, &x[Kf0TdMCY54x].c);
    {
        Kf0TdMCY54x = 715 - 715;
        while (Kf0TdMCY54x < n) {
            {
                j = 143 - 142;
                while (n > j) {
                    y[k] = sqrt ((x[Kf0TdMCY54x].HuNv3AVjeZL - x[j].HuNv3AVjeZL) * (x[Kf0TdMCY54x].HuNv3AVjeZL - x[j].HuNv3AVjeZL) + (x[Kf0TdMCY54x].y1I09RWQJq - x[j].y1I09RWQJq) * (x[Kf0TdMCY54x].y1I09RWQJq - x[j].y1I09RWQJq) + (x[Kf0TdMCY54x].c - x[j].c) * (x[Kf0TdMCY54x].c - x[j].c));
                    k = k + 1;
                    j = j + 1;
                };
            }
            Kf0TdMCY54x = Kf0TdMCY54x +1;
        };
    }
    for (Kf0TdMCY54x = (815 - 815); n * (n - (863 - 862)) / (102 - 100) >= Kf0TdMCY54x; Kf0TdMCY54x = Kf0TdMCY54x +1)
        q[Kf0TdMCY54x] = Kf0TdMCY54x;
    for (Kf0TdMCY54x = (544 - 544); n * (n - (204 - 203)) / (379 - 377) - (836 - 835) > Kf0TdMCY54x; Kf0TdMCY54x = Kf0TdMCY54x +1) {
        j = 759 - 759;
        while (j < n * (n - (756 - 755)) / 2 - (986 - 985) - Kf0TdMCY54x) {
            if (y[q[j]] < y[q[j + 1]]) {
                t = q[j];
                q[j] = q[j + 1];
                q[j + 1] = t;
            }
            j = j + 1;
        };
    }
    for (Kf0TdMCY54x = 0; Kf0TdMCY54x < n * (n - 1) / 2; Kf0TdMCY54x = Kf0TdMCY54x +1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[d (q[Kf0TdMCY54x] + 1, n)].HuNv3AVjeZL, x[d (q[Kf0TdMCY54x] + 1, n)].y1I09RWQJq, x[d (q[Kf0TdMCY54x] + 1, n)].c, x[f (q[Kf0TdMCY54x] + 1, n)].HuNv3AVjeZL, x[f (q[Kf0TdMCY54x] + 1, n)].y1I09RWQJq, x[f (q[Kf0TdMCY54x] + 1, n)].c, y[q[Kf0TdMCY54x]]);
    };
}

