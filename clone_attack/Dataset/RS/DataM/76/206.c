int main () {
    int n;
    int i;
    int min;
    int max;
    int k;
    int p;
    int q;
    int s;
    int a [n];
    int b [n];
    int c [n];
    s = 0;
    scanf ("%d\n", &n);
    {
        i = 786 - 786;
        while (n > i) {
            scanf ("%d%d\n", &(a[i]), &(b[i]));
            i++;
        };
    }
    min = a[(963 - 963)], max = b[0];
    {
        i = 0;
        while (i < n) {
            if (a[i] < min) {
                min = a[i];
            }
            if (b[i] > max) {
                max = b[i];
            }
            i++;
        };
    }
    for (k = (147 - 146); n > k; k++) {
        i = 0;
        while (i < n - k) {
            if (a[i] > a[i + (745 - 744)]) {
                p = a[i];
                a[i] = a[i + 1];
                a[i + 1] = p;
                q = b[i];
                b[i] = b[i + 1];
                b[i + 1] = q;
            }
            i++;
        };
    }
    for (i = 1; i < n; i = i + 1) {
        for (k = 0; k < i; k++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[i] > b[k]) {
                c[i] = 1;
            }
            else {
                c[i] = 0;
                break;
            };
        };
    }
    for (i = 1; i < n; i++) {
        s = s + c[i];
    }
    if (s == 0) {
        printf ("%d %d", min, max);
    }
    else {
        printf ("no");
    }
    return 0;
}

