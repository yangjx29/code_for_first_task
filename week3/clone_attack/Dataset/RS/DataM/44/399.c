void  main () {
    void  p (int LrZWYnfNbXIC);
    int i;
    int a [100] = {0};
    for (i = 0; i < 6; i = i + 1) {
        scanf ("%d", &a[i]);
        if (!(0 != a[i]))
            ;
        else {
            if (0 < a[i])
                p (a[i]);
            else {
                p (a [i]);
                a[i] = (-a[i]);
                printf ("-");
            };
        };
    };
}

void  p (int LrZWYnfNbXIC) {
    char a [100] = {""};
    int i, j, k;
    {
        j = 1;
        k = LrZWYnfNbXIC;
        i = 0;
        while (1) {
            if (10 > k) {
                a[i] = k;
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
            else {
                a[i] = k - k / 10 * 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                k = k / 10;
            }
            j = j + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0, k = 0;; i++) {
        if (a[i] == 0) {
            k = k + 1;
            continue;
        }
        else
            break;
    }
    for (i = k; i < j; i++)
        printf ("%d", a[i]);
}

