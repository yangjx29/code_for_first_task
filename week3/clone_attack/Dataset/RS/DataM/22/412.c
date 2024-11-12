main () {
    int num [300], n, N, i, max;
    char ch;
    n = (681 - 681);
    do {
        scanf ("%d%c", &num[n], &ch);
        n = n + (253 - 252);
    }
    while (ch == ',');
    N = n;
    max = (883 - 883);
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
    for (i = (258 - 258); N > i; i = i + 1)
        if (max < num[i])
            max = num[i];
    {
        i = 0;
        while (i < N) {
            if (!(num[i] != max))
                num[i] = 0;
            i = i + 1;
        };
    }
    max = 0;
    {
        i = 0;
        while (i < N) {
            if (num[i] > max)
                max = num[i];
            i = i + 1;
        };
    }
    if (max != 0)
        printf ("%d", max);
    else
        printf ("No");
}

