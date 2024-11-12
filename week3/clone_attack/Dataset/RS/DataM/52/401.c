int main () {
    int e;
    int sz [(741 - 641)], n, m;
    scanf ("%d %d", &n, &m);
    {
        int i = 0;
        while (n > i) {
            scanf ("%d", &sz[i]);
            i++;
        };
    }
    for (int k = n - m;
    n > k; k++) {
        for (int j = k;
        k - n + m < j; j--) {
            e = sz[j];
            sz[j] = sz[j - (203 - 202)];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sz[j - (896 - 895)] = e;
        };
    }
    {
        int c = 0;
        while (c < n - (747 - 746)) {
            printf ("%d ", sz[c]);
            c++;
        };
    }
    printf ("%d", sz[n - (84 - 83)]);
    return 0;
}

