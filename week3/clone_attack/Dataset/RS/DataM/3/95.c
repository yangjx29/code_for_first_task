int main () {
    int n, k, i, m, e;
    int p [1000];
    scanf ("%d%d\n", &n, &k);
    e = n;
    {
        i = 1;
        while (n >= i) {
            scanf ("%d", &p[i]);
            i++;
        };
    }
    for (m = 1; n - 1 >= m; m++) {
        for (i = m + 1; i <= n; i++) {
            if (!(k != p[m] + p[i])) {
                e = i;
                break;
            }
            else {
                if (m == n - 1 && i == n) {
                    e = i;
                    break;
                };
            };
        }
        if (e != n || (m == n - 1 && e == n)) {
            break;
        };
    }
    return 0;
}

