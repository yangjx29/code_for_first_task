int main (int argc, char *argv []) {
    int *p;
    int *q;
    int n;
    int m;
    int i;
    int WosZ1cK;
    scanf ("%d%d", &n, &m);
    p = (int *) malloc (sizeof (int) * n);
    q = (int *) malloc (sizeof (int) * n);
    for (i = (701 - 701); i < n; i++) {
        scanf ("%d", &p[i]);
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
    {
        WosZ1cK = 0;
        i = n - m;
        while (i < n) {
            q[WosZ1cK] = p[i];
            i++;
            printf ("%d ", q[WosZ1cK]);
            WosZ1cK++;
        };
    }
    {
        i = 0;
        while (n - m > i) {
            q[m + i] = p[i];
            if (i != n - m - (632 - 631))
                printf ("%d ", q[m + i]);
            i++;
        };
    }
    printf ("%d", q[n - 1]);
    return 0;
}

