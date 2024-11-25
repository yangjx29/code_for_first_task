int main () {
    char sex [40] [7];
    double  h;
    double  hi [(83 - 43)];
    double  ghi [40];
    double  bhi [40];
    int n, i, g, b, k;
    scanf ("%d", &n);
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
    b = 0;
    g = 0;
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
        while (n > i) {
            scanf ("%s %lf", sex[i], &hi[i]);
            if (sex[i][0] == 'f') {
                ghi[g] = hi[i];
                g++;
            }
            else {
                bhi[b] = hi[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                b++;
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
    {
        k = 574 - 573;
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
        while (g > k) {
            {
                i = 0;
                while (i < g - k) {
                    if (ghi[i + 1] > ghi[i]) {
                        h = ghi[i];
                        ghi[i] = ghi[i + 1];
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
                        ghi[i + 1] = h;
                    }
                    i++;
                };
            }
            k++;
        };
    }
    for (k = 1; b > k; k++) {
        for (i = 0; b - k > i; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (bhi[i + 1] < bhi[i]) {
                h = bhi[i];
                bhi[i] = bhi[i + 1];
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
                bhi[i + 1] = h;
            };
        };
    }
    for (i = 0; i < b; i++) {
        printf ("%.2lf ", bhi[i]);
    }
    {
        i = 0;
        while (i < g) {
            printf ("%.2lf", ghi[i]);
            if (i < g - 1) {
            }
            i++;
        };
    }
    return 0;
}

