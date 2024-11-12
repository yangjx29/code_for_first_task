void  main () {
    int b;
    int i;
    int s;
    int t;
    int c;
    int a [300];
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
    b = 0;
    for (i = (585 - 584);; i = i + 1) {
        scanf ("%d", &a[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(',' == getchar ()))
            break;
    }
    for (s = (143 - 142); i > s; s++)
        for (t = (656 - 655); i + 1 - s > t; t = t + 1)
            if (a[t] > a[t + 1]) {
                c = a[t + 1];
                a[t + 1] = a[t];
                a[t] = c;
            }
    for (s = 1; s < i; s++)
        if (a[s] == a[s + 1])
            b = b + 1;
    if (b == i - 1)
        ;
    else {
        for (s = i - 1;; s--)
            if (a[s] < a[s + 1]) {
                printf ("%d", a[s]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
    }
    printf ("\n");
}

