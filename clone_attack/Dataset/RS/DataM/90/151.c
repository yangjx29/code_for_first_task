int main () {
    int i;
    int m;
    int n;
    int t;
    i = 1;
    int sort (int, int);
    scanf ("%d", &t);
    for (; i <= t;) {
        int k;
        scanf ("%d%d", &m, &n);
        k = sort (m, n);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d\n", k);
        i++;
    };
}

int sort (int x, int y) {
    int z;
    if (y == 1)
        return 1;
    else if (x >= y)
        return (sort (x, y - 1) + sort (x - y, y));
    else
        return (sort (x, y - 1));
    return z;
}

