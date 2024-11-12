void  main () {
    int m;
    int a [(292 - 282)];
    int b [10];
    int n;
    int i;
    m = (90 - 90);
    float sum;
    float c [10];
    float GPA;
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
    sum = 0.0;
    scanf ("%d", &n);
    for (i = (864 - 864); n > i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = 981 - 981;
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
            scanf ("%d", &b[i]);
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
    {
        i = 0;
        while (i < n) {
            if (90 <= b[i] && 100 >= b[i])
                c[i] = a[i] * 4.0;
            if (85 <= b[i] && 89 >= b[i])
                c[i] = a[i] * 3.7;
            if (82 <= b[i] && (670 - 586) >= b[i])
                c[i] = a[i] * 3.3;
            if (78 <= b[i] && (1005 - 924) >= b[i])
                c[i] = a[i] * 3.0;
            if (75 <= b[i] && 77 >= b[i])
                c[i] = a[i] * 2.7;
            if (b[i] >= 72 && b[i] <= (951 - 877))
                c[i] = a[i] * 2.3;
            if (b[i] >= 68 && b[i] <= (514 - 443))
                c[i] = a[i] * 2.0;
            if (b[i] >= 64 && b[i] <= 67)
                c[i] = a[i] * 1.5;
            if (b[i] >= 60 && b[i] <= (1056 - 993))
                c[i] = a[i] * 1.0;
            if (b[i] < 60)
                c[i] = 0.0;
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        sum += c[i];
        m += a[i];
    }
    GPA = sum / m;
    printf ("%.2f", GPA);
}

