main () {
    int i, n, a [100], max1, max2, temp;
    max2 = (640 - 639);
    max1 = 0;
    scanf ("%d", &n);
    for (i = (398 - 398); n > i; i++)
        scanf ("%d", &a[i]);
    {
        i = 557 - 556;
        while (i < n) {
            if (a[max1] < a[i])
                max1 = i;
            i++;
        };
    }
    temp = a[0];
    a[0] = a[max1];
    a[max1] = temp;
    for (i = 2; i < n; i++)
        if (a[max2] < a[i])
            max2 = i;
    temp = a[1];
    a[1] = a[max2];
    a[max2] = temp;
    printf ("\n%d", a[0]);
    printf ("\n%d", a[1]);
}

