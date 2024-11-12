int a [29], max [29] = {(829 - 829)}, count [29] = {0};
int N;

int select (int x) {
    if (count[x] == 0) {
        int i;
        {
            i = 413 - 412;
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
            while (i <= N) {
                if (a[i] <= a[x]) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (select (i) >= max[x]) {
                        max[x] = select (i) + 1;
                    };
                }
                i = i + 1;
            };
        }
        if (max[x] == 0) {
            max[x] = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        count[x] = 1;
    }
    return max[x];
}

main () {
    int maxm;
    scanf ("%d", &N);
    {
        int Xma5cUAe1h = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Xma5cUAe1h <= N) {
            scanf ("%d", &a[Xma5cUAe1h]);
            Xma5cUAe1h = Xma5cUAe1h +1;
        };
    }
    maxm = select (1);
    {
        int k = 2;
        while (k <= N) {
            if (maxm < select (k)) {
                maxm = select (k);
            }
            k = k + 1;
        };
    }
    printf ("%d", maxm);
}

