int main () {
    int n;
    int k;
    int i;
    int a [1000];
    int j;
    int q;
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
    scanf ("%d%d", &n, &k);
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%d", &a[i]);
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
    for (i = 1; i <= n; i = i + 1) {
        for (j = 1; j <= n; j = j + 1) {
            q = a[i] + a[j];
            if (q == k)
                break;
            else
                q = 0;
        }
        if (q == k)
            break;
    }
    if (q == k)
        printf ("yes");
    else
        printf ("no");
    return 0;
}

