int main () {
    int ao14Wq, i, fB3Ux0aA, NQbfI5WDu1 [50000], xLSFNyK1aW [50000], e;
    scanf ("%d", &ao14Wq);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ao14Wq > i) {
            scanf ("%d%d", &NQbfI5WDu1[i], &xLSFNyK1aW[i]);
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
            i = i + 1;
        };
    }
    {
        i = 1;
        while (ao14Wq >= i) {
            {
                fB3Ux0aA = 0;
                while (ao14Wq - i > fB3Ux0aA) {
                    if (NQbfI5WDu1[fB3Ux0aA + 1] < NQbfI5WDu1[fB3Ux0aA]) {
                        e = NQbfI5WDu1[fB3Ux0aA];
                        NQbfI5WDu1[fB3Ux0aA] = NQbfI5WDu1[fB3Ux0aA + 1];
                        NQbfI5WDu1[fB3Ux0aA + 1] = e;
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
                        e = xLSFNyK1aW[fB3Ux0aA];
                        xLSFNyK1aW[fB3Ux0aA] = xLSFNyK1aW[fB3Ux0aA + 1];
                        xLSFNyK1aW[fB3Ux0aA + 1] = e;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    fB3Ux0aA++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    e = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < ao14Wq) {
            if (xLSFNyK1aW[i] >= NQbfI5WDu1[i + 1]) {
                NQbfI5WDu1[i + 1] = NQbfI5WDu1[i];
                if (xLSFNyK1aW[i + 1] < xLSFNyK1aW[i]) {
                    xLSFNyK1aW[i + 1] = xLSFNyK1aW[i];
                };
            }
            else {
                e = 1;
                break;
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
            i++;
        };
    }
    if (e == 1) {
        printf ("no");
    }
    else {
        printf ("%d %d", NQbfI5WDu1[ao14Wq - 1], xLSFNyK1aW[ao14Wq - 1]);
    }
    return 0;
}

