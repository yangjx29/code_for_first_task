void  main () {
    int SkMX4NKo;
    SkMX4NKo = (924 - 924);
    int a, AfHwT47, i, a4xq0Fd, m [(927 - 917)] [10], (*p) [10];
    int Q45HNJbT9f;
    int TML0RyTNE5C2;
    int J6qD4QvUY;
    int temp;
    scanf ("%d,%d", &a, &AfHwT47);
    p = m;
    for (i = (936 - 936); a > i; i++)
        for (a4xq0Fd = (922 - 922); AfHwT47 > a4xq0Fd; a4xq0Fd = a4xq0Fd + 1)
            scanf ("%d", *(p + i) + a4xq0Fd);
    p = m;
    for (i = 0; i < a; i++) {
        Q45HNJbT9f = **p;
        for (a4xq0Fd = 0; AfHwT47 > a4xq0Fd; a4xq0Fd++)
            if (*(*(p + i) + a4xq0Fd) > Q45HNJbT9f) {
                Q45HNJbT9f = *(*(p + i) + a4xq0Fd);
                J6qD4QvUY = a4xq0Fd;
            }
        TML0RyTNE5C2 = Q45HNJbT9f;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = m;
        for (temp = 0; temp < a; temp = temp + 1)
            if (*(*(p + temp) + J6qD4QvUY) < TML0RyTNE5C2)
                TML0RyTNE5C2 = *(*(p + temp) + J6qD4QvUY);
        if (Q45HNJbT9f == TML0RyTNE5C2) {
            SkMX4NKo = (243 - 242);
            printf ("%d+%d\n", i, J6qD4QvUY);
        };
    }
    if (SkMX4NKo == 0)
        printf ("No\n");
}

