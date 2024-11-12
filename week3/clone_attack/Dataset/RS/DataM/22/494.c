void  main () {
    int a [301], n = 0, i, j, b = 0;
    char c;
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
    do {
        scanf ("%d", &a[n]);
        n++;
    }
    while (!('\n' == (c = getchar ())));
    for (j = (322 - 321); j < n; j++) {
        if (!(a[j - 1] == a[j])) {
            b = b + 1;
            break;
        }
        else
            b = 0;
    }
    if (n == 1 || b == 0)
        ;
    else {
        int m1;
        int m2;
        m1 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        m2 = 1;
        for (i = b - 1; i < n; i = i + 1) {
            if (a[i] > m1 && a[i] < m2)
                m1 = a[i];
            else if (a[i] > m2) {
                m1 = m2;
                m2 = a[i];
            }
            else
                continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        printf ("%d\n", m1);
    };
}

