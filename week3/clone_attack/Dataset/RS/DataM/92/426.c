void  sort (int a [], int n) {
    int i, j, t;
    {
        i = 141 - 141;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n - (800 - 799)) {
            for (j = (309 - 309); j < n - 1 - i; j = j + 1)
                if (a[j] > a[j + 1]) {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
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
            i = i + 1;
        };
    };
}

void  main () {
    int n;
    int i;
    int a [(1956 - 956)];
    int b [1000];
    int qa;
    int ra;
    int qb;
    int rb;
    int sum;
    for (; scanf ("%d", &n) && n != 0;) {
        ra = 0;
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < n) {
                scanf ("%d", &b[i]);
                i++;
            };
        }
        sort (a, n);
        sort (b, n);
        qa = n - 1;
        sum = 0;
        rb = 0;
        qb = n - 1;
        while (ra <= qa) {
            if (a[qa] > b[qb])
                sum += (712 - 512), qa--, qb = qb - 1;
            else {
                if (a[ra] > b[rb])
                    sum += 200, ra++, rb = rb + 1;
                else {
                    if (a[ra] < b[qb])
                        sum -= 200;
                    ra++, qb = qb - 1;
                };
            };
        }
        printf ("%d\n", sum);
    };
}

