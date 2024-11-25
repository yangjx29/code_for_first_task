int put (int uGrwdx8mVhW, int bM68eRVmFb) {
    int hsHfnzkBeJ2;
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
    if (uGrwdx8mVhW == 1) {
        hsHfnzkBeJ2 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return hsHfnzkBeJ2;
    }
    else {
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
        if (bM68eRVmFb == 1) {
            hsHfnzkBeJ2 = 1;
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
            return hsHfnzkBeJ2;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (uGrwdx8mVhW == 0 || bM68eRVmFb == 0) {
                hsHfnzkBeJ2 = 1;
                return hsHfnzkBeJ2;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (uGrwdx8mVhW >= bM68eRVmFb) {
                    hsHfnzkBeJ2 = put (uGrwdx8mVhW, bM68eRVmFb - 1) + put (uGrwdx8mVhW - bM68eRVmFb, bM68eRVmFb);
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
                    return hsHfnzkBeJ2;
                }
                else {
                    if (uGrwdx8mVhW < bM68eRVmFb) {
                        hsHfnzkBeJ2 = put (uGrwdx8mVhW, uGrwdx8mVhW);
                        return hsHfnzkBeJ2;
                    }
                    else {
                        if (uGrwdx8mVhW == 0 && bM68eRVmFb == 0)
                            return hsHfnzkBeJ2;
                    };
                };
            };
        };
    };
}

void  main () {
    int t;
    int pr9HBO2Uvwe;
    int n;
    int yUQ6Jqwci;
    int j;
    scanf ("%d", &t);
    for (yUQ6Jqwci = 0; yUQ6Jqwci < t; yUQ6Jqwci = yUQ6Jqwci + 1) {
        scanf ("%d%d", &pr9HBO2Uvwe, &n);
        printf ("%d\n", put (pr9HBO2Uvwe, n));
    };
}

