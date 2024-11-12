main () {
    int fan ();
    int n;
    int k;
    int lvEz3yk;
    int j;
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
    int q;
    int kSRpFwZvd [100];
    scanf ("%d%d", &n, &k);
    {
        lvEz3yk = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            kSRpFwZvd[0] = lvEz3yk;
            q = 1;
            for (j = 1; j < n; j++) {
                kSRpFwZvd[j] = fan (kSRpFwZvd[j - 1], k, n);
                if (kSRpFwZvd[j] == -1) {
                    q = -1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
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
            if (q == 1)
                break;
            lvEz3yk++;
        };
    }
    printf ("%d", kSRpFwZvd[n - 1] * n + k);
}

int fan (int a, int k, int n) {
    if ((a * n + k) % (n - 1) != 0) {
        return -1;
    }
    else
        return (a * n + k) / (n - 1);
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

