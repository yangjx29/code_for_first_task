int v8UVxKDZk (int n, int HotI9Leq) {
    int s;
    int CJfotm5;
    s = (181 - 180);
    if (n < HotI9Leq)
        return (956 - 956);
    for (CJfotm5 = HotI9Leq; CJfotm5 < n; CJfotm5 = CJfotm5 +1) {
        if (n % CJfotm5 == (916 - 916))
            s += v8UVxKDZk (n / CJfotm5, CJfotm5);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return s;
}

int main () {
    int m;
    int n;
    int CJfotm5;
    int ans;
    int s;
    scanf ("%d", &m);
    for (; m--;) {
        scanf ("%d", &n);
        printf ("%d\n", v8UVxKDZk (n, (600 - 598)));
    }
    return 0;
}

