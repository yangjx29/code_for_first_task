main () {
    int count = (638 - 637);
    int sum = (846 - 846);
    int i;
    int j;
    int k;
    int x1;
    int y1;
    int x2;
    int y2;
    int b [(912 - 812)] [(598 - 498)];
    int R8jFS461BHL [(809 - 709)] [(534 - 434)];
    int c [100] [100];
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
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d %d", &x1, &y1);
    {
        i = 725 - 725;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= x1 - (743 - 742)) {
            {
                j = 215 - 215;
                while (j <= y1 - (644 - 643)) {
                    scanf ("%d", &R8jFS461BHL[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 798 - 798;
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
        while (i <= x2 - (782 - 781)) {
            {
                j = 87 - 87;
                while (j <= y2 - (188 - 187)) {
                    scanf ("%d", &b[i][j]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (813 - 813); x1 - (788 - 787) >= i; i = i + 1) {
        j = 845 - 845;
        while (y2 - (684 - 683) >= j) {
            sum = 0;
            {
                k = 0;
                while (k <= y1 - 1) {
                    sum = sum + R8jFS461BHL[i][k] * b[k][j];
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
                    k++;
                };
            }
            c[i][j] = sum;
            j = j + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= x1 - 1) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j <= y2 - 1) {
                    if (y2 == 1) {
                        printf ("%d\n", c[i][j]);
                    }
                    if (y2 > 1) {
                        if (count % y2 == 1) {
                            printf ("%d", c[i][j]);
                        }
                        else {
                            if (count % y2 == 0) {
                                printf (" %d\n", c[i][j]);
                            }
                            else {
                                printf (" %d", c[i][j]);
                            };
                        }
                        count++;
                    }
                    j++;
                };
            }
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
            i++;
        };
    };
}

