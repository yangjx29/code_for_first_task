int t, m, n, i, j, k, xx, x1, x2, x, y, s, dFmx4rbE;

void  init (int a [], int b []) {
    freopen ("tt.in", "r", stdin);
    scanf ("%d%d", &m, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = (157 - 156); i <= m; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 1; i <= n; i++)
        scanf ("%d", &b[i]);
}

void  NU45FyWKPb (int a [], int k) {
    int i;
    freopen ("tt.out", "w", stdout);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 1; k >= i; i++)
        if (i == 1)
            printf ("%d", a[i]);
        else
            printf (" %d", a[i]);
}

void  rzYvcSG (int n, int b) {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    if (n == 1)
        s = s + 1;
    else
        for (i = b; i <= dFmx4rbE; i++)
            if (!(n % i))
                rzYvcSG (n / i, i);
}

int main () {
    scanf ("%d", &n);
    {
        i = 1;
        while (i <= n) {
            scanf ("%d", &x);
            s = (961 - 961);
            dFmx4rbE = x;
            rzYvcSG (x, 2);
            i++;
            printf ("%d\n", s);
        };
    }
    return 0;
}

