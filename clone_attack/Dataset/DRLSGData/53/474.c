void  main () {
    int p;
    int i;
    int c [20000] = {0};
    int a;
    int n;
    int j;
    int k;
    i = 0;
    p = 0;
    scanf ("%d", &n);
    while (i < n) {
        scanf ("%d", &a);
        {
            j = 0;
            k = 0;
            while (j < i) {
                if (!(a != c[j])) {
                    k = 1;
                    break;
                }
                j = j + 1;
            };
        }
        i = i + 1;
        if (!(0 != k)) {
            c[p] = a;
            p = p + 1;
        };
    }
    {
        j = 0;
        while (j < p) {
            printf ("%d", c[j]);
            if (p - 1 > j)
                ;
            j++;
        };
    };
}

