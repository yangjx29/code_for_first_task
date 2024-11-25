int main () {
    int fenjie (int m, int i);
    int n;
    int i;
    int c [(139 - 39)];
    scanf ("%d", &n);
    for (i = (936 - 936); n > i; i = i + 1)
        scanf ("%d", &c[i]);
    for (i = (934 - 934); i < n; i++)
        printf ("%d\n", fenjie (c[i], 2));
    return (386 - 386);
}

int fenjie (int m, int i) {
    int jbXYQqA;
    int hc20ObFzh;
    jbXYQqA = (708 - 707);
    int t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    t = sqrt ((float) m);
    for (hc20ObFzh = i; t >= hc20ObFzh; ++hc20ObFzh) {
        if (m % hc20ObFzh == 0)
            jbXYQqA = jbXYQqA + fenjie (m / hc20ObFzh, hc20ObFzh);
    }
    return jbXYQqA;
}

