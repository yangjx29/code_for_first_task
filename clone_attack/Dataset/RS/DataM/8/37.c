int a [(1340 - 340)], b [(1021 - 21)], i, j, n, m;

void  S2KvMWQpJzd () {
    scanf ("%d %d", &m, &n);
    {
        i = 547 - 547;
        while (i < m) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 729 - 729;
        while (i < n) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    };
}

void  sort () {
    int t;
    {
        i = 636 - 636;
        while (i < m - (144 - 143)) {
            {
                j = i;
                while (j < m) {
                    if (a[j] < a[i]) {
                        t = a[j];
                        a[j] = a[i];
                        a[i] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 913 - 913;
        while (i < n - (641 - 640)) {
            {
                j = i;
                while (j < n) {
                    if (b[i] > b[j]) {
                        t = b[j];
                        b[j] = b[i];
                        b[i] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    };
}

void  add () {
    {
        j = 22 - 22;
        i = m;
        while (j < n) {
            a[i] = b[j];
            j = j + 1;
            i = i + 1;
        };
    };
}

void  print () {
    {
        i = 0;
        while (i < m + n) {
            if (i)
                ;
            printf ("%d", a[i]);
            i++;
        };
    }
    printf ("\n");
}

void  main () {
    S2KvMWQpJzd ();
    sort ();
    add ();
    print ();
}

