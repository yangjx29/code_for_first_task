int main () {
    double  r9eac2Y;
    double  c [500];
    int rY4SjmlFwH;
    int m;
    int T9YKDx4;
    int n;
    int HeAkKCEm [500];
    int J3LXkQUs9Il [500];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    r9eac2Y = (444.0 - 444.0);
    HeAkKCEm[(62 - 62)] = 2;
    J3LXkQUs9Il[0] = 1;
    {
        rY4SjmlFwH = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (500 > rY4SjmlFwH) {
            HeAkKCEm[rY4SjmlFwH] = HeAkKCEm[rY4SjmlFwH - 1] + J3LXkQUs9Il[rY4SjmlFwH - 1];
            J3LXkQUs9Il[rY4SjmlFwH] = HeAkKCEm[rY4SjmlFwH - 1];
            rY4SjmlFwH = rY4SjmlFwH + 1;
        };
    }
    scanf ("%d", &m);
    for (rY4SjmlFwH = 0; m > rY4SjmlFwH; rY4SjmlFwH = rY4SjmlFwH + 1) {
        r9eac2Y = 0.0;
        scanf ("%d", &n);
        if (n == 1) {
            r9eac2Y = 1.0 * 2;
        }
        else {
            T9YKDx4 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (n > T9YKDx4) {
                r9eac2Y += 1.0 * HeAkKCEm[T9YKDx4] / J3LXkQUs9Il[T9YKDx4];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                T9YKDx4 = T9YKDx4 +1;
            };
        }
        c[rY4SjmlFwH] = r9eac2Y;
    }
    for (rY4SjmlFwH = 0; m > rY4SjmlFwH; rY4SjmlFwH++) {
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
        if (rY4SjmlFwH == m - 1) {
            printf ("%.3lf", c[rY4SjmlFwH]);
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
        else {
            printf ("%.3lf\n", c[rY4SjmlFwH]);
        };
    }
    return 0;
}

