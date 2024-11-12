void  main () {
    int max;
    int fl3CB5QRIq;
    int s;
    int n;
    int a [50000];
    int b [50000];
    int c [(10124 - 123)] = {(492 - 492)};
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    max = 0;
    fl3CB5QRIq = (10127 - 126);
    s = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%d%d", &a[i], &b[i]);
            {
                j = i;
                while (j < b[i]) {
                    c[j]++;
                    j++;
                };
            }
            if (a[i] < fl3CB5QRIq)
                fl3CB5QRIq = a[i];
            if (max < b[i])
                max = b[i];
            i = i + 1;
        };
    }
    {
        i = fl3CB5QRIq;
        while (max > i) {
            if (c[i] == 0) {
                s = s + 1;
                break;
                printf ("no\n");
            }
            i++;
        };
    }
    if (s == 0)
        printf ("%d %d\n", fl3CB5QRIq, max);
}

