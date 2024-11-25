void  cWCZyAqQPL (int QP3WVuY891M, int m, int a [], int b []) {
    int i;
    {
        i = 527 - 527;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < QP3WVuY891M) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (m > i) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    };
}

void  sort (int a [], int QP3WVuY891M, int b [], int m) {
    int i;
    int AJIceTGqi7;
    int t;
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
    {
        AJIceTGqi7 = 0;
        while (QP3WVuY891M -(227 - 226) > AJIceTGqi7) {
            {
                i = 0;
                while (QP3WVuY891M -(559 - 558) - AJIceTGqi7 > i) {
                    if (a[i + 1] < a[i]) {
                        t = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = t;
                    }
                    i = i + 1;
                };
            }
            AJIceTGqi7 = AJIceTGqi7 +1;
        };
    }
    {
        AJIceTGqi7 = 0;
        while (m - 1 > AJIceTGqi7) {
            {
                i = 0;
                while (i < m - 1 - AJIceTGqi7) {
                    if (b[i] > b[i + 1]) {
                        t = b[i];
                        b[i] = b[i + 1];
                        b[i + 1] = t;
                    }
                    i = i + 1;
                };
            }
            AJIceTGqi7++;
        };
    };
}

void  hebing (int array1 [], int ntBxLs [], int QP3WVuY891M, int m) {
    int i;
    {
        i = QP3WVuY891M;
        while (i < (QP3WVuY891M +m)) {
            array1[i] = ntBxLs[i - QP3WVuY891M];
            i = i + 1;
        };
    };
}

void  xian (int array [], int QP3WVuY891M, int m) {
    int i;
    {
        i = 0;
        while (i < (QP3WVuY891M +m - 1)) {
            printf ("%d ", array[i]);
            i++;
        };
    }
    printf ("%d", array[QP3WVuY891M +m - 1]);
}

void  main () {
    void  cWCZyAqQPL (int QP3WVuY891M, int m, int a [], int b []);
    void  sort (int *p1, int QP3WVuY891M, int *KxWKn8M4oNf, int m);
    void  hebing (int array1 [], int ntBxLs [], int QP3WVuY891M, int m);
    void  xian (int array [], int QP3WVuY891M, int m);
    int QP3WVuY891M, m, a [1000], b [1000];
    scanf ("%d %d", &QP3WVuY891M, &m);
    cWCZyAqQPL (QP3WVuY891M, m, a, b);
    sort (a, QP3WVuY891M, b, m);
    hebing (a, b, QP3WVuY891M, m);
    xian (a, QP3WVuY891M, m);
}

