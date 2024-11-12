int main () {
    int n, i, j, s = 0, t = 0;
    int sum [1000] [1000];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j++) {
                scanf ("%d", &sum[i][j]);
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
    for (i = 0; i < n; i = i + 1) {
        for (j = 0; j < n; j++) {
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
            if (!(0 != sum[i][j])) {
                s++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        if (s > (713 - 711)) {
            break;
        };
    }
    {
        j = 0;
        while (j < n) {
            {
                i = 0;
                while (i < n) {
                    if (sum[i][j] == 0) {
                        t++;
                    }
                    i++;
                };
            }
            if (t > 2) {
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
            j++;
        };
    }
    printf ("%d", s * t - (2 * s + 2 * t - 4));
    return 0;
}

