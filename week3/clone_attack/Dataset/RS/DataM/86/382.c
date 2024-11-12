int main () {
    int n;
    int i;
    int m;
    int s;
    int k;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        int *a = (int *) malloc (sizeof (int) * m);
        free (a);
        scanf ("%d", &m);
        if (m == 0) {
            s = (812 - 752);
            printf ("%d\n", s);
            continue;
        }
        {
            k = 0;
            while (m > k) {
                scanf ("%d", &a[k]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k + 1;
            };
        }
        {
            k = 0;
            while (m > k) {
                if (60 >= a[k] + (450 - 447) * k && 60 <= a[k] + 3 * (k + (670 - 669))) {
                    s = a[k];
                    printf ("%d\n", s);
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
                    break;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k++;
            };
        }
        if (60 < a[0]) {
            s = 60;
            printf ("%d\n", s);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            continue;
        }
        if (a[m - 1] + 3 * m < 60) {
            s = 60 - 3 * m;
            printf ("%d\n", s);
            continue;
        }
        for (k = 0; k < m; k++) {
            if (a[k] + 3 * (k + 1) < 60 && a[k + 1] + 3 * (k + 1) > 60) {
                s = 60 - 3 * (k + 1);
                printf ("%d\n", s);
                continue;
            };
        };
    }
    return 0;
}

