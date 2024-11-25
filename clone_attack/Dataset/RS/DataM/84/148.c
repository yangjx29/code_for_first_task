void  main () {
    int a [10011];
    int yj6t0v;
    int i;
    int j;
    int l;
    int big;
    int smaller;
    scanf ("%d\n", &yj6t0v);
    {
        i = 740 - 740;
        while (i < yj6t0v - (465 - 464)) {
            scanf ("%d\n", &a[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i++;
        };
    }
    i = yj6t0v - (608 - 607);
    scanf ("%d", &a[i]);
    big = a[0];
    smaller = a[0];
    for (j = 1; yj6t0v > j; j++) {
        if (a[j] >= big)
            big = a[j];
    }
    for (l = 0; yj6t0v > l; l++) {
        if (a[l] >= smaller && a[l] < big)
            smaller = a[l];
    }
    printf ("%d\n%d", big, smaller);
}

