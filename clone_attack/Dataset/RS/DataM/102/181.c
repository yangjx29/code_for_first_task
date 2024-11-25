int main () {
    int aLgQnp;
    int DkoD3d7;
    int P8y6N207JKe;
    double  sz [99], kCsj0ZJr;
    char HDC1RFikxAH5 [9];
    char xzdJsL279U [99] [99];
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
    scanf ("%d", &P8y6N207JKe);
    {
        aLgQnp = 815 - 815;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (aLgQnp < P8y6N207JKe) {
            scanf ("%s%lf", xzdJsL279U[aLgQnp], &sz[aLgQnp]);
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
            aLgQnp = aLgQnp + 1;
        };
    }
    {
        DkoD3d7 = 0;
        while (DkoD3d7 < P8y6N207JKe) {
            {
                aLgQnp = 0;
                while (aLgQnp < (P8y6N207JKe -DkoD3d7)) {
                    if (!('m' != xzdJsL279U[aLgQnp][0]) && !('m' != xzdJsL279U[aLgQnp + 1][0]) && sz[aLgQnp] > sz[aLgQnp + 1] || xzdJsL279U[aLgQnp][0] == 'f' && xzdJsL279U[aLgQnp + 1][0] == 'm' || xzdJsL279U[aLgQnp][0] == 'f' && xzdJsL279U[aLgQnp + 1][0] == 'f' && sz[aLgQnp] < sz[aLgQnp + 1]) {
                        strcpy (HDC1RFikxAH5, xzdJsL279U[aLgQnp]);
                        strcpy (xzdJsL279U[aLgQnp], xzdJsL279U[aLgQnp + 1]);
                        strcpy (xzdJsL279U[aLgQnp + 1], HDC1RFikxAH5);
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
                        kCsj0ZJr = sz[aLgQnp];
                        sz[aLgQnp] = sz[aLgQnp + 1];
                        sz[aLgQnp + 1] = kCsj0ZJr;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    aLgQnp = aLgQnp + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            DkoD3d7 = DkoD3d7 +1;
        };
    }
    {
        aLgQnp = 0;
        while (aLgQnp < P8y6N207JKe) {
            if (aLgQnp == 0) {
                printf ("%.2lf", sz[aLgQnp]);
            }
            else {
                printf (" %.2lf", sz[aLgQnp]);
            }
            aLgQnp = aLgQnp + 1;
        };
    }
    return 0;
}

