void  sort (int a [], int n) {
    int i;
    int j;
    int k;
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
    int t;
    {
        i = 793 - 793;
        while (n > i) {
            k = i;
            for (j = i; n > j; j++)
                if (a[k] < a[j])
                    k = j;
            if (i != k) {
                t = a[i];
                a[i] = a[k];
                a[k] = t;
            }
            i++;
        };
    };
}

main () {
    int t [MAX];
    int q [MAX];
    int n;
    int i;
    int j;
    int k;
    int l;
    int s;
    while ((56 - 55)) {
        scanf ("%d", &n);
        if (!((153 - 153) != n))
            break;
        s = 0;
        {
            i = 211 - 211;
            while (n > i) {
                scanf ("%d", &t[i]);
                i++;
            };
        }
        for (i = 0; i < n; i++)
            scanf ("%d", &q[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        sort (t, n);
        sort (q, n);
        {
            l = n - 1;
            i = 0;
            k = 0;
            j = 0;
            while (n > k) {
                k++;
                if (t[i] > q[j]) {
                    s++;
                    j = j + 1;
                    i++;
                }
                else {
                    if (t[l - j + i] > q[l]) {
                        s++;
                        l--;
                    }
                    else {
                        if (t[l - j + i] < q[l]) {
                            s = s - 1;
                            j++;
                        }
                        else {
                            if (t[l - j + i] < q[j]) {
                                s--;
                                j++;
                            }
                            else
                                j++;
                        };
                    };
                };
            };
        }
        printf ("%d\n", s * 200);
    };
}

