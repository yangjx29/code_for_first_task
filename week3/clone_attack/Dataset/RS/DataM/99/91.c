int main () {
    double  o1, o2, o3, o4;
    int n, i = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, sz [101];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &sz[i]);
        if (18 >= sz[i]) {
            s1 = s1 + 1;
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
            };
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
        if (19 <= sz[i] && 35 >= sz[i]) {
            s2 = s2 + 1;
        }
        if (sz[i] >= 36 && sz[i] <= 60) {
            s3 = s3 + 1;
        }
        if (sz[i] >= 61) {
            s4 = s4 + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    o1 = s1 * 1.0 * 100 / n;
    o2 = s2 * 1.0 * 100 / n;
    o3 = s3 * 1.0 * 100 / n;
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
    o4 = s4 * 1.0 * 100 / n;
    printf ("1-18: %.2lf%%\n", o1);
    printf ("19-35: %.2lf%%\n", o2);
    printf ("36-60: %.2lf%%\n", o3);
    printf ("60??: %.2lf%%", o4);
    return 0;
}

