void  main () {
    int a [(374 - 64)], DAjgRGB9tb, min, n, Bajxlq;
    float sum;
    sum = (241 - 241);
    scanf ("%d", &n);
    for (Bajxlq = (246 - 246); n > Bajxlq; Bajxlq++) {
        scanf ("%d", &a[Bajxlq]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != Bajxlq)) {
            DAjgRGB9tb = a[Bajxlq];
            min = a[Bajxlq];
            sum = a[Bajxlq];
        }
        else {
            sum = sum + a[Bajxlq];
            DAjgRGB9tb = (a[Bajxlq] > DAjgRGB9tb) ? a[Bajxlq] : DAjgRGB9tb;
            min = (min > a[Bajxlq]) ? a[Bajxlq] : min;
        };
    }
    sum = sum / n;
    if ((DAjgRGB9tb -sum) > (sum - min))
        printf ("%d", DAjgRGB9tb);
    else {
        if ((DAjgRGB9tb -sum) < (sum - min))
            printf ("%d", min);
        else
            printf ("%d,%d", min, DAjgRGB9tb);
    };
}

