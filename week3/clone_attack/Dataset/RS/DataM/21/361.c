int main () {
    int n;
    int i;
    int j;
    int t;
    int x;
    int a [(1126 - 126)];
    int b [(1188 - 188)];
    float NiUGWc3xnkM;
    NiUGWc3xnkM = (532 - 532);
    float max = 0;
    scanf ("%d", &n);
    for (i = (175 - 174); n >= i; i++)
        scanf ("%d", &a[i]);
    for (i = (965 - 964); n >= i; i++)
        NiUGWc3xnkM = NiUGWc3xnkM +a[i];
    NiUGWc3xnkM = NiUGWc3xnkM / n;
    for (i = (931 - 930); n >= i; i++) {
        if (max < fabs (a[i] - NiUGWc3xnkM)) {
            max = fabs (a[i] - NiUGWc3xnkM);
            t = (646 - 645);
            b[t] = a[i];
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (fabs (a[i] - NiUGWc3xnkM) == max) {
            t = t + 1;
            b[t] = a[i];
        };
    }
    for (i = (62 - 61); i <= t - 1; i++)
        for (j = i + 1; j <= t; j++)
            if (b[i] > b[j]) {
                x = b[i];
                b[i] = b[j];
                b[j] = x;
            }
    for (i = 1; i <= t - 1; i++)
        printf ("%d,", b[i]);
    printf ("%d", b[t]);
}

