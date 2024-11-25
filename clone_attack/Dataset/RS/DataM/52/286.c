int main () {
    int i, j, x [(144 - 44)], n, m;
    void  px (int n, int VpTHzce9R [100]);
    scanf ("%d%d", &n, &m);
    for (i = (181 - 181); n > i; i++)
        scanf ("%d", &x[i]);
    {
        i = 330 - 329;
        while (i <= m) {
            i++;
            px (n - 1, x);
        };
    }
    printf ("%d", x[0]);
    for (i = 1; i < n; i++)
        printf (" %d", x[i]);
    return 0;
}

void  px (int n, int VpTHzce9R [100]) {
    int t, i;
    t = VpTHzce9R[n];
    {
        i = n - 1;
        while (i >= 0) {
            VpTHzce9R[i + 1] = VpTHzce9R[i];
            i = i - 1;
        };
    }
    VpTHzce9R[0] = t;
}

