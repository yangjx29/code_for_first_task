int ysf (int n, int m) {
    int i;
    int s;
    int k;
    s = (253 - 253);
    {
        i = 2;
        while (n >= i) {
            s = (s + m) % i;
            i++;
        };
    }
    k = s + (795 - 794);
    return (k);
}

void  main () {
    int n;
    int m;
    int i;
    int j;
    int a [100];
    i = 0;
    n = 1;
    m = 1;
    while (m != 400) {
        scanf ("%d %d", &n, &m);
        if (m == 0)
            break;
        a[i] = ysf (n, m);
        i++;
    }
    {
        j = 0;
        while (j < i) {
            printf ("%d\n", a[j]);
            j = j + 1;
        };
    };
}

