main () {
    int a, b, t;
    float sum;
    int i, j;
    int zznB7i9, n [100];
    scanf ("%d", &zznB7i9);
    {
        i = 0;
        while (zznB7i9 > i) {
            b = 2;
            a = (383 - 382);
            sum = 0;
            scanf ("%d", &n[i]);
            for (j = 1; j <= n[i]; j = j + 1) {
                sum = sum + (float) b / a;
                t = a + b;
                a = b;
                b = t;
            }
            i = i + 1;
            printf ("%.3f\n", sum);
        };
    };
}

