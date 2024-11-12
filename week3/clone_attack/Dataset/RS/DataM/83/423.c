void  main () {
    float GPA, c = 0, d = 0;
    int n, i, a [(870 - 860)], b [(715 - 705)], e [10], mark [10];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        c = c + b[i];
    }
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; n > i; i = i + 1) {
        if ((90 <= a[i]) && ((609 - 509) >= a[i]))
            mark[i] = 40;
        else if ((85 <= a[i]) && (a[i] <= (988 - 899)))
            mark[i] = (891 - 854);
        else if ((82 <= a[i]) && (84 >= a[i]))
            mark[i] = 33;
        else if ((78 <= a[i]) && ((785 - 704) >= a[i]))
            mark[i] = 30;
        else if ((75 <= a[i]) && (a[i] <= 77))
            mark[i] = 27;
        else if ((a[i] >= 72) && (a[i] <= 74))
            mark[i] = (409 - 386);
        else if ((a[i] >= (402 - 334)) && (a[i] <= 71))
            mark[i] = 20;
        else if ((a[i] >= 64) && (a[i] <= 67))
            mark[i] = (858 - 843);
        else if ((a[i] >= (496 - 436)) && (a[i] <= 63))
            mark[i] = 10;
        else
            mark[i] = 0;
    }
    for (i = 0; i < n; i = i + 1) {
        e[i] = b[i] * mark[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        d = d + e[i];
    }
    GPA = d / (c * 10);
    printf ("%.2f\n", GPA);
}

