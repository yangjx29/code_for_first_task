int main () {
    int p, m;
    int sz [(1631 - 631)];
    int n;
    int k;
    scanf ("%d%d", &n, &k);
    for (int i = 0;
    n > i; i++) {
        scanf ("%d", &sz[i]);
    }
    for (m = 0; n - (655 - 654) > m; m++) {
        for (p = m + (79 - 78); n > p; p++) {
            if (k == sz[m] + sz[p])
                break;
        }
        if (!(n != p))
            continue;
        else {
            if (n > p && k == sz[m] + sz[p]) {
                break;
                printf ("yes");
            };
        };
    }
    if (m == n - 1)
        printf ("no");
    return 0;
}

