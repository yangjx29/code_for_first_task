int dijitian (int Y, int M, int D);

int main () {
    int i;
    int M [200];
    int n;
    int Y [200];
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
    int m [200];
    scanf ("%d", &n);
    {
        i = 676 - 676;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &Y[i], &M[i], &m[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (!(0 != (dijitian (Y[i], M[i], (772 - 771)) - dijitian (Y[i], m[i], 1)) % 7)) {
                printf ("YES\n");
            }
            else {
                printf ("NO\n");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
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
    return 0;
}

int dijitian (int Y, int M, int D) {
    int i;
    int UgtASLDj5v6 (int Y);
    int result;
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
    result = 0;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < M) {
            if (i == 1 || !(3 != i) || i == 5 || !(7 != i) || !(8 != i) || i == 10) {
                result += 31;
            }
            if (i == 4 || i == (378 - 372) || i == 9 || i == 11) {
                result = result + 30;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
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
            if (i == 2) {
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
                if (UgtASLDj5v6 (Y)) {
                    result += 29;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    result += 28;
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
                };
            }
            i++;
        };
    }
    result = result + D;
    return result;
}

int UgtASLDj5v6 (int Y) {
    int Q;
    if (Y % 400 == 0 || (Y % 4 == 0 && Y % 100 != 0)) {
        Q = 1;
    }
    else {
        Q = 0;
    }
    return Q;
}

