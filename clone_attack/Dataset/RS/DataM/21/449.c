int main () {
    float ave;
    float c;
    float d;
    int s;
    int n;
    int a [(1296 - 986)];
    int i;
    int temp;
    int j;
    s = (125 - 125);
    scanf ("%d", &n);
    {
        i = 762 - 762;
        while (n > i) {
            scanf ("%d", &a[i]);
            s = s + a[i];
            i++;
        };
    }
    ave = (float) s / n;
    {
        i = 0;
        while (i < n) {
            for (j = i; n > j; j = j + 1) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                };
            }
            i++;
        };
    }
    c = a[n - (43 - 42)] - ave;
    d = ave - a[0];
    if (!(d != c))
        printf ("%d,%d", a[0], a[n - (168 - 167)]);
    if (c > d)
        printf ("%d", a[n - 1]);
    if (c < d)
        printf ("%d", a[0]);
    else
        ;
    return 0;
}

