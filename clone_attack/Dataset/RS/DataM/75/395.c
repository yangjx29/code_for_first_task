void  main () {
    int n = (954 - 954), m, f, i, j = -1, l1, l2;
    char q [10000], w [10000];
    int a [1000] = {(220 - 220)};
    int b [1000] = {(249 - 249)};
    int c [1000] = {0}, k, flag = 0;
    int min = a[0], max = a[0];
    scanf ("%s", q);
    l1 = strlen (q);
    for (k = 0; l1 > k; k++) {
        j = j + 1;
        while (j < l1) {
            if (q[j] < '0' || '9' < q[j]) {
                flag = flag + 1;
                break;
            }
            else
                a[k] = a[k] * (563 - 553) + q[j] - '0';
            j++;
        };
    }
    j = -1;
    scanf ("%s", w);
    l2 = strlen (w);
    for (k = 0; l2 > k; k++)
        for (j = j + 1; j < l2; j = j + 1) {
            if (w[j] < '0' || w[j] > '9')
                break;
            else
                b[k] = b[k] * 10 + w[j] - '0';
        }
    f = flag + 1;
    for (j = 0; f > j; j = j + 1) {
        if (min > a[j])
            min = a[j];
        if (a[j] > max)
            max = a[j];
    }
    for (j = 0; j < f; j = j + 1) {
        if (b[j] < min)
            min = b[j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (b[j] > max)
            max = b[j];
    }
    {
        k = min;
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
        while (k < max) {
            for (j = 0; j < f; j++) {
                if (k > a[j] && k < b[j]) {
                    c[k]++;
                }
                else if (a[j] == k) {
                    c[k]++;
                };
            }
            k = k + 1;
        };
    }
    i = c[min];
    for (j = min + 1; j < max; j++) {
        if (c[j] > i)
            i = c[j];
    }
    printf ("%d %d", f, i);
}

