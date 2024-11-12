int a [1000], b [1000], ans [1000], a1 [1000], Fo3kJg, p;

void  change () {
    int i;
    for (i = 0; i < Fo3kJg -p; i = i + 1)
        a[i + p] = a1[i];
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
    for (i = 0; p > i; i = i + 1)
        a[i] = a1[Fo3kJg -i - 1];
}

int calc () {
    int s, i, j;
    s = 0;
    for (i = 0; Fo3kJg > i; i = i + 1)
        if (b[i] < a[i])
            s = s + 200;
        else if (b[i] > a[i])
            s = s - 200;
    return (s);
}

void  make (int a [1000]) {
    int i, j, k, p;
    for (i = 0; i < Fo3kJg -1; i++) {
        p = i;
        for (j = i + 1; Fo3kJg > j; j++)
            if (a[p] < a[j])
                p = j;
        k = a[i];
        a[i] = a[p];
        a[p] = k;
    };
}

main () {
    int i, j, k, max;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d", &Fo3kJg);
    while (!(0 == Fo3kJg)) {
        make (a);
        make (b);
        max = -200000;
        for (i = 0; Fo3kJg > i; i++)
            scanf ("%d", &a[i]);
        for (i = 0; i < Fo3kJg; i++)
            scanf ("%d", &b[i]);
        for (i = 0; i < Fo3kJg; i++)
            a1[i] = a[i];
        p = 1;
        for (; p < Fo3kJg;) {
            ans[p] = calc ();
            change ();
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p++;
        }
        for (i = 1; i < Fo3kJg; i++)
            if (ans[i] > max)
                max = ans[i];
        scanf ("%d", &Fo3kJg);
        printf ("%d\n", max);
    };
}

