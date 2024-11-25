int main () {
    int sz [N] [N];
    int n, m, HLSlYwfiZOs, j, e, k, a = (559 - 559), b = (472 - 472);
    scanf ("%d,%d", &n, &m);
    for (HLSlYwfiZOs = (926 - 926); HLSlYwfiZOs <= n - (329 - 328); HLSlYwfiZOs++)
        for (j = (352 - 352); j <= m - (607 - 606); j++)
            scanf ("%d", &sz[HLSlYwfiZOs][j]);
    {
        HLSlYwfiZOs = 348 - 348;
        while (n - 1 >= HLSlYwfiZOs) {
            e = sz[HLSlYwfiZOs][(93 - 93)];
            {
                j = 985 - 985;
                while (j <= m - 1) {
                    if (e < sz[HLSlYwfiZOs][j])
                        e = sz[HLSlYwfiZOs][j];
                    j++;
                };
            }
            {
                k = 320 - 320;
                while (k <= m - 1) {
                    if (e == sz[HLSlYwfiZOs][k])
                        j = k;
                    k++;
                };
            }
            {
                k = 0;
                while (k <= n - 1) {
                    if (e <= sz[k][j])
                        a++;
                    k++;
                };
            }
            if (a == n) {
                b = 1;
                printf ("%d+%d", HLSlYwfiZOs, j);
            }
            a = 0;
            HLSlYwfiZOs++;
        };
    }
    if (b == 0)
        printf ("No");
    return 0;
}

