int main () {
    int q;
    int n;
    int i;
    int j;
    int PkTluhIz9Y;
    int p;
    q = 0;
    scanf ("%d", &n);
    for (i = 1; i <= n - 2; i = i + 1) {
        PkTluhIz9Y = 0;
        p = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 1; i >= j; j++) {
            if (i % j == 0) {
                PkTluhIz9Y = PkTluhIz9Y +1;
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
            if ((i + 2) % j == 0) {
                p = p + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        if (PkTluhIz9Y == 2 && p == 1) {
            printf ("%d %d\n", i, i + 2);
            q++;
        };
    }
    if (q == 0) {
        printf ("empty");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

