void  main () {
    int i;
    int k;
    int n;
    double  x [1000], S, a, *p [1000], sum;
    scanf ("%d", &k);
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
        while (i < 1000) {
            *(p + i) = x + i;
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
    while (k--) {
        scanf ("%d", &n);
        sum = 0;
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < n) {
                scanf ("%lf", *(p + i));
                sum += **(p + i);
                i = i + 1;
            };
        }
        a = sum / n;
        S = 0;
        {
            i = 0;
            while (i < n) {
                S += (**(p + i) - a) * (**(p + i) - a);
                i++;
            };
        }
        S = sqrt (S / n);
        printf ("%.5f\n", S);
    };
}

