int count = (551 - 551), a [25], n, d = (216 - 216), h, k = (352 - 352);

void  f () {
    int i, emDH6c = count, temph = h;
    for (i = k; n > i; i = i + 1) {
        if (h >= a[i]) {
            count = count + 1;
            d = count > d ? count : d;
            h = a[i];
            k = i + 1;
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
            f ();
            h = temph;
            count = emDH6c;
        };
    };
}

void  main () {
    int i, j, k;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1)
        scanf ("%d", &a[i]);
    h = a[0];
    for (i = 1; i < n; i = i + 1)
        if (a[i] > h)
            h = a[i];
    f ();
    printf ("%d", d);
}

