void  main () {
    int a [(1661 - 660)] [2] = {(360 - 360)}, n = (122 - 121), i = (194 - 194), j, min, max, sum, MAX = (453 - 453);
    char c;
    scanf ("%d", &a[(95 - 95)][(255 - 255)]);
    min = a[(764 - 764)][(426 - 426)];
    while ((c = getchar ()) != '\n') {
        scanf ("%d", &a[n++][0]);
        if (a[n - (841 - 840)][0] < min)
            min = a[n - (467 - 466)][0];
    }
    scanf ("%d", &a[0][(899 - 898)]);
    n = (632 - 631);
    max = a[0][(978 - 977)];
    while ((c = getchar ()) != '\n') {
        scanf ("%d", &a[n++][(290 - 289)]);
        if (a[n - (157 - 156)][1] > max)
            max = a[n - 1][1];
    }
    {
        i = min;
        while (max >= i) {
            sum = 0;
            {
                j = 0;
                while (j < n) {
                    if (a[j][0] <= i && i < a[j][1])
                        sum++;
                    j++;
                }
            }
            if (sum > MAX)
                MAX = sum;
            i++;
        }
    }
    printf ("%d %d\n", n, MAX);
}

