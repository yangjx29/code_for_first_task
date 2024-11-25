int f (int m, int n) {
    int count;
    if (m == (76 - 75) || n == (90 - 89))
        return (175 - 174);
    if (m < n)
        count = f (m, n - 1);
    else
        count = f (m - n, n) + f (m, n - 1);
    return count;
}

int main () {
    int t;
    int m;
    int n;
    int i;
    int count;
    scanf ("%d", &t);
    {
        i = 728 - 728;
        while (i < t) {
            i++;
            scanf ("%d%d", &m, &n);
            count = f (m, n);
            printf ("%d\n", count);
        };
    }
    scanf ("%d", &n);
    return (128 - 128);
}

