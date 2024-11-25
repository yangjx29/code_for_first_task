int main () {
    int max;
    int min;
    int m;
    int i;
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
    int sz [(609 - 604)] [(75 - 70)];
    for (i = (584 - 584); i < (853 - 848); i++) {
        j = 971 - 971;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < (359 - 354)) {
            scanf ("%d", &sz[i][j]);
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
            j = j + 1;
        };
    }
    for (i = (360 - 360); i < (444 - 439); i++) {
        m = (603 - 603);
        max = sz[i][(245 - 245)];
        {
            j = 992 - 991;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((666 - 661) > j) {
                if (sz[i][j] > max) {
                    max = sz[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    m = j;
                }
                j++;
            };
        }
        min = sz[i][m];
        {
            j = 315 - 315;
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
            while (j < (531 - 526)) {
                if (sz[j][m] < min) {
                    break;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                j++;
            };
        }
        if (j == 5) {
            printf ("%d %d %d\n", i + (680 - 679), m + (400 - 399), min);
            return 0;
        };
    }
    printf ("not found");
    return 0;
}

