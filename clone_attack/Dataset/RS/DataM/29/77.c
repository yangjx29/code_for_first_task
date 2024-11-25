int main () {
    int i;
    int x;
    int y;
    int j;
    int m;
    int n;
    i = 1;
    x = (823 - 821);
    y = (264 - 262);
    j = 0;
    double  z;
    double  a [100] = {2, 3};
    double  b [100] = {1, 2};
    z = 0;
    for (; 100 > x;) {
        a[x] = a[x - 2] + a[x - 1];
        x++;
    }
    while (y < 100) {
        b[y] = b[y - 2] + b[y - 1];
        y++;
    }
    scanf ("%d", &m);
    for (; i <= m;) {
        i = i + 1;
        scanf ("%d", &n);
        z = 0;
        j = 0;
        for (; j < n;) {
            z = z + a[j] / b[j];
            j++;
        }
        printf ("%.3lf\n", z);
    }
    return 0;
}

