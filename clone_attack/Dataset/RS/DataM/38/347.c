int main () {
    int i;
    int SSFi8szqGhp;
    int n;
    int m;
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
    double  GEe9wp5 [(1536 - 536)], x, a, y, bb [(1114 - 114)];
    cin >> n;
    {
        i = 128 - 127;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            y = 0;
            a = (286 - 286);
            cin >> m;
            for (SSFi8szqGhp = (671 - 670); m >= SSFi8szqGhp; SSFi8szqGhp = SSFi8szqGhp +1) {
                cin >> GEe9wp5[SSFi8szqGhp];
                a = a + GEe9wp5[SSFi8szqGhp];
            }
            a = a / m;
            for (SSFi8szqGhp = 1; SSFi8szqGhp <= m; SSFi8szqGhp++) {
                y = y + (GEe9wp5[SSFi8szqGhp] - a) * (GEe9wp5[SSFi8szqGhp] - a);
            }
            y = y / m;
            y = sqrt (y);
            bb[i] = y;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= n) {
            printf ("%.5lf\n", bb[i]);
            i++;
        };
    }
    return 0;
}

