void  main () {
    int m;
    int i;
    int max1;
    int max2;
    int a [100];
    scanf ("%d", &m);
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
    for (i = (559 - 559); m > i; i = i + 1)
        scanf ("%d", &a[i]);
    max1 = a[0];
    for (i = 0; m > i; i++)
        if (a[i] > max1)
            max1 = a[i];
    max2 = a[0];
    {
        i = 0;
        while (i < m) {
            if (a[i] > max2 && a[i] != max1)
                max2 = a[i];
            i++;
        };
    }
    printf ("%d\n%d", max1, max2);
}

