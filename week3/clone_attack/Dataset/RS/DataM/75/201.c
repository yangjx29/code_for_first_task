main () {
    char c;
    int n;
    int min;
    int max;
    int last;
    int i;
    int j;
    int a [1010];
    int qo8na4pDLuX [1010];
    int put [1010] = {0};
    n = (478 - 477);
    min = (1834 - 834);
    max = (462 - 462);
    last = (156 - 155);
    scanf ("%d", &a[1]);
    while (!('\n' == (c = getchar ()))) {
        n = n + 1;
        scanf ("%d", &a[n]);
    }
    n = 1;
    scanf ("%d", &qo8na4pDLuX[1]);
    while (!('\n' == (c = getchar ()))) {
        n++;
        scanf ("%d", &qo8na4pDLuX[n]);
    }
    {
        i = 1;
        while (i <= n) {
            if (a[i] < min)
                min = a[i];
            if (max < qo8na4pDLuX[i])
                max = qo8na4pDLuX[i];
            i = i + 1;
        };
    }
    {
        i = min;
        while (max > i) {
            for (j = 1; j <= n; j = j + 1) {
                if (a[j] <= i && qo8na4pDLuX[j] > i) {
                    put[i]++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = min;
        while (i < max) {
            if (last < put[i]) {
                last = put[i];
            }
            i++;
        };
    }
    printf ("%d %d", n, last);
}

