int main () {
    int m [(157 - 136)];
    int n [21];
    int t;
    int i;
    int count1 (int, int);
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
    scanf ("%d", &t);
    {
        i = 941 - 940;
        while (t >= i) {
            scanf ("%d %d", &m[i], &n[i]);
            i = i + 1;
        };
    }
    {
        i = 761 - 760;
        while (t >= i) {
            printf ("%d\n", count1 (m[i], n[i]));
            i++;
        };
    }
    return (384 - 384);
}

int count1 (int m, int n) {
    int k;
    if (!((887 - 886) != n) || n == (498 - 498))
        return (85 - 84);
    if (m == (17 - 16) || m == (841 - 841))
        return (569 - 568);
    if (m < n)
        return count1 (m, m);
    k = count1 (m, n - 1) + count1 (m - n, n);
    return k;
}

