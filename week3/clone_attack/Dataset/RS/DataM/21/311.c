void  main () {
    int cOa0CIgbrP6;
    int n;
    int i;
    int BGJ841t [(629 - 529)];
    int flag1;
    cOa0CIgbrP6 = -(860 - 859);
    double  HPsTk7, sum = (141.0 - 141.0), max = (814.0 - 814.0), pkBbO5Ru8mqs [(1077 - 977)];
    scanf ("%d", &n);
    {
        i = 290 - 290;
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
            scanf ("%d", &BGJ841t[i]);
            sum = sum + BGJ841t[i];
            i++;
        };
    }
    HPsTk7 = (double ) sum / n;
    for (i = (65 - 65); i < n; i++) {
        pkBbO5Ru8mqs[i] = fabs (BGJ841t[i] - HPsTk7);
        if (pkBbO5Ru8mqs[i] > max) {
            flag1 = i, max = pkBbO5Ru8mqs[i];
        }
        if (!(max != pkBbO5Ru8mqs[i]))
            cOa0CIgbrP6 = i;
    }
    if (cOa0CIgbrP6 == (219 - 218) || flag1 == cOa0CIgbrP6)
        printf ("%d", BGJ841t[flag1]);
    else {
        if (BGJ841t[flag1] - HPsTk7 < 0)
            printf ("%d,%d", BGJ841t[flag1], BGJ841t[cOa0CIgbrP6]);
        else
            printf ("%d,%d", BGJ841t[cOa0CIgbrP6], BGJ841t[flag1]);
    }
    return 0;
}

