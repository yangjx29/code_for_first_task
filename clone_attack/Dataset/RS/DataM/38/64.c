int main () {
    int ay9ncpN2UTFL;
    int tY1tVsuabqd;
    int IONJyop1Q;
    int GEDSL3Xm7 [(229 - 129)];
    double  I7Nc1ftvY;
    double  eRT0dsy9;
    double  a [200];
    double  XNfBnxrw;
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
    double  s [200];
    double  IC8zaeY;
    I7Nc1ftvY = (275 - 275);
    eRT0dsy9 = (647 - 647);
    scanf ("%d", &ay9ncpN2UTFL);
    {
        tY1tVsuabqd = 803 - 803;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tY1tVsuabqd < ay9ncpN2UTFL) {
            scanf ("%d", &GEDSL3Xm7[tY1tVsuabqd]);
            {
                IONJyop1Q = 0;
                while (IONJyop1Q < GEDSL3Xm7[tY1tVsuabqd]) {
                    scanf ("%lf", &a[IONJyop1Q]);
                    I7Nc1ftvY = I7Nc1ftvY +a[IONJyop1Q];
                    IONJyop1Q = IONJyop1Q +1;
                };
            }
            IC8zaeY = I7Nc1ftvY / GEDSL3Xm7[tY1tVsuabqd];
            I7Nc1ftvY = 0;
            {
                IONJyop1Q = 0;
                while (IONJyop1Q < GEDSL3Xm7[tY1tVsuabqd]) {
                    XNfBnxrw = (a[IONJyop1Q] - IC8zaeY) * (a[IONJyop1Q] - IC8zaeY);
                    IONJyop1Q++;
                    eRT0dsy9 += XNfBnxrw;
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
            IC8zaeY = 0;
            s[tY1tVsuabqd] = sqrt (eRT0dsy9 / GEDSL3Xm7[tY1tVsuabqd]);
            tY1tVsuabqd++;
            eRT0dsy9 = 0;
        };
    }
    {
        tY1tVsuabqd = 0;
        while (tY1tVsuabqd < ay9ncpN2UTFL) {
            printf ("%.5lf\n", s[tY1tVsuabqd]);
            tY1tVsuabqd++;
        };
    }
    return 0;
}

