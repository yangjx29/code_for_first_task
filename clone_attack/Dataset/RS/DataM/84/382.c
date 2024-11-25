int main () {
    int e;
    int n;
    int sz [(397 - 296)];
    scanf ("%d\n", &n);
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
    {
        int m = (776 - 776);
        while (m < n) {
            scanf ("%d\n", &sz[m]);
            m++;
        };
    }
    for (int k = (866 - 866);
    k < n; k = k + 1) {
        for (int i = (317 - 317);
        i < n - (416 - 415); i++) {
            if (sz[i] < sz[i + 1]) {
                e = sz[i + 1];
                sz[i + 1] = sz[i];
                sz[i] = e;
            };
        };
    }
    printf ("%d\n%d", sz[(915 - 915)], sz[1]);
    return 0;
}

