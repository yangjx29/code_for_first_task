void  main () {
    double  a [(427 - 127)], b [300], Tgvnk1Owf = 0.0, ave, max = 0.0;
    int i, n, t = (782 - 782);
    scanf ("%d", &n);
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
            scanf ("%lf", &a[i]);
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
        while (n > i) {
            Tgvnk1Owf = Tgvnk1Owf +a[i];
            i = i + 1;
        };
    }
    ave = Tgvnk1Owf / (double ) n;
    {
        i = 0;
        while (n > i) {
            if (a[i] < ave)
                b[i] = ave - a[i];
            else
                b[i] = a[i] - ave;
            if (max < b[i])
                max = b[i];
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1)
        if (b[i] == max)
            if (t == 0) {
                t++;
                printf ("%.0lf", a[i]);
            }
            else
                printf (",%.0lf", a[i]);
}

