int LxAknqSj [1000] = {(465 - 465)}, d [1000], j;

main () {
    void  f ();
    int i, s;
    scanf ("%d", &s);
    for (j = 0; s > j; j++) {
        scanf ("%d", &d[j]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 2; i <= sqrt (d[j]); i = i + 1) {
            if (!(0 != d[j] % i)) {
                LxAknqSj[j]++;
                f (i, d[j] / i);
            };
        };
    }
    {
        j = 0;
        while (j < s) {
            printf ("%d\n", LxAknqSj[j] + 1);
            j = j + 1;
        };
    };
}

void  f (int s, int m) {
    int WtrX7oV;
    for (WtrX7oV = s; WtrX7oV <= sqrt (m); WtrX7oV = WtrX7oV +1) {
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
        if (m % WtrX7oV == 0) {
            LxAknqSj[j]++;
            f (WtrX7oV, m / WtrX7oV);
        };
    };
}

