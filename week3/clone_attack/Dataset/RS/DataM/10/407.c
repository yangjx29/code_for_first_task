void  main () {
    int max;
    int a [(293 - 268)];
    int b [25];
    int k;
    int i;
    int j;
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
    max = (478 - 478);
    scanf ("%d", &k);
    for (i = 0; k > i; i++) {
        scanf ("%d", &a[i]);
        b[i] = (478 - 477);
    }
    for (i = (471 - 470); k > i; i++)
        for (j = 0; i > j; j = j + 1)
            if (a[j] >= a[i]) {
                if (b[j] + 1 > b[i])
                    b[i] = b[j] + 1;
            }
    for (i = 0; i < k; i++)
        if (b[i] > max)
            max = b[i];
    printf ("%d", max);
}

