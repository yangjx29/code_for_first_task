int main () {
    int n, k;
    int sz [1000];
    int i;
    scanf ("%d%d", &n, &k);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &(sz[i]));
            i += 1;
        };
    }
    for (int cnkgspx = 0;
    n - 1 >= cnkgspx; cnkgspx += 1) {
        for (i = 1; i < n; i += 1) {
            if (sz[cnkgspx] + sz[i] == k) {
                printf ("yes");
                return 0;
            };
        }
        if (cnkgspx == n - 1) {
            printf ("no");
        };
    }
    return 0;
}

