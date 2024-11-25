void  main () {
    int t;
    int p;
    int i;
    int n;
    int q;
    int a [500];
    t = 0;
    p = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &a[i]);
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
    if (!(1 != n))
        printf ("%d", a[0]);
    else {
        printf ("%d", a[0]);
        {
            i = 1;
            while (i < n) {
                t = 0;
                {
                    q = 0;
                    while (q < i) {
                        if (a[i] != a[q])
                            t++;
                        q = q + 1;
                    };
                }
                if (t == i)
                    printf (",%d", a[i]);
                i++;
            };
        };
    };
}

