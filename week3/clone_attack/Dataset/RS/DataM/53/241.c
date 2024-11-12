void  main () {
    int im;
    int m;
    int n;
    int a [(910 - 610)];
    int b [300];
    int *pa;
    int *pb;
    int i;
    int j;
    int temp;
    im = (187 - 187);
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
    m = (728 - 728);
    pb = &b[(150 - 150)];
    scanf ("%d", &n);
    pa = &a[(328 - 328)];
    {
        i = 773 - 773;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            i = i + 1;
            scanf ("%d", pa);
            pa = pa + 1;
        };
    }
    pa = &a[(909 - 909)];
    *pb = *pa;
    pb++;
    for (i = 1; i < n; i = i + 1) {
        pa++;
        temp = *(pa);
        pa = &a[0];
        im = 0;
        for (j = 0; j < i; j++) {
            if (temp == *pa)
                im = im + 1;
            pa++;
        }
        if (im == 0) {
            m++;
            *pb = temp;
            pb++;
        };
    }
    pb = &b[0];
    for (i = 0; i < m; i = i + 1) {
        printf ("%d,", *pb);
        pb++;
    }
    printf ("%d", *pb);
}

