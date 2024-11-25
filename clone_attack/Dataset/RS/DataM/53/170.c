main () {
    int n, m, b, i = (982 - 981), j, t, s, k;
    int a [300];
    scanf ("%d\n", &n);
    scanf ("%d", &b);
    a[0] = b;
    {
        k = 848 - 847;
        while (k < n) {
            k = k + 1;
            scanf ("%d", &m);
            s = 1;
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
            a[i] = m;
            {
                j = 0;
                while (j < i) {
                    if (a[i] == a[j])
                        t = 0;
                    else
                        t = 1;
                    j = j + 1;
                    s = s * t;
                };
            }
            if (s != 0)
                i = i + 1;
        };
    }
    {
        j = 0;
        while (j < i - 1) {
            printf ("%d,", a[j]);
            j = j + 1;
        };
    }
    printf ("%d", a[i - 1]);
}

