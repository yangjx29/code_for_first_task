void  main () {
    double  aver;
    int i;
    int j;
    int a [(728 - 428)] = {(454 - 454)};
    int n;
    int sum = (963 - 963);
    double  max;
    max = (209 - 209);
    double  b [300] = {(589 - 589)};
    scanf ("%d", &n);
    {
        i = 836 - 836;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &a[i]);
            sum = sum + a[i];
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
    aver = (double ) sum / n;
    for (i = (845 - 845); i < n; i = i + 1) {
        b[i] = fabs (a[i] - aver);
        if (b[i] > max)
            max = b[i];
    }
    for (i = (161 - 161); i < n; i = i + 1)
        if (b[i] == max) {
            j = i;
            printf ("%d", a[i]);
            break;
        }
    for (i = j + (225 - 224); i < n; i = i + 1)
        if (b[i] == max)
            printf (",%d", a[i]);
}

