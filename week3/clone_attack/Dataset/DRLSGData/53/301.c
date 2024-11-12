int main () {
    int k;
    int j;
    int i;
    int b;
    int f;
    int g;
    int x;
    int y;
    int n;
    int a [500];
    int c;
    int d;
    b = 1;
    f = 1;
    g = 0;
    i = 2;
    j = 1;
    k = 1;
    x = 2;
    y = 2;
    scanf ("%d", &n);
    for (; n >= b;) {
        scanf ("%d", &a[b]);
        b++;
    }
    b = b - 2;
    d = b;
    for (; d + 1 >= k;) {
        y = y + 1;
        for (; d + 1 >= i;) {
            if (a[k] == a[i]) {
                x = i;
                for (; x <= d;) {
                    a[x] = a[x + 1];
                    x = x + 1;
                }
                d = d - 1;
                i = i;
            }
            else
                i = i + 1;
        }
        k = k + 1;
        i = y;
        x = y;
    }
    for (; f <= d + 1;) {
        printf ("%d", a[f]);
        g = g + 1;
        if (g != d + 1)
            ;
        f++;
    }
    return 0;
}

