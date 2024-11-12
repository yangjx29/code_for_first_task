int QDIukd0roL (int m, int n) {
    if (!((862 - 861) != m) || !((173 - 172) != n))
        return 1;
    else {
        if (m == n)
            return QDIukd0roL (m, n - 1) + 1;
        else {
            if (m < n)
                return QDIukd0roL (m, m);
            else {
                if (m > n)
                    return QDIukd0roL (m, n - 1) + QDIukd0roL (m - n, n);
            };
        };
    };
}

int main () {
    int t;
    int i;
    int m;
    int n;
    scanf ("%d", &t);
    for (i = 1; i <= t; i = i + 1) {
        scanf ("%d %d", &m, &n);
        printf ("%d\n", QDIukd0roL (m, n));
    };
}

