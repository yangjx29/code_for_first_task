int main (int argc, char *argv []) {
    int n;
    int a [101];
    double  Z2wnT6BN;
    double  w;
    double  e;
    double  lqDGYPLK;
    Z2wnT6BN = 0;
    w = 0;
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
    e = 0;
    lqDGYPLK = 0;
    scanf ("%d", &n);
    for (int i = 1;
    n >= i; i++) {
        scanf ("%d", &a[i]);
        if (18 >= a[i]) {
            Z2wnT6BN++;
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
        if ((163 - 128) >= a[i] && a[i] >= 19) {
            w++;
        }
        if (a[i] <= 60 && a[i] >= 36) {
            e++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (a[i] >= 61) {
            lqDGYPLK++;
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
    printf ("1-18: %.2lf%%\n", Z2wnT6BN / n * 100);
    printf ("19-35: %.2lf%%\n", w / n * 100);
    printf ("36-60: %.2lf%%\n", e / n * 100);
    printf ("60??: %.2lf%%\n", lqDGYPLK / n * 100);
    return 0;
}

