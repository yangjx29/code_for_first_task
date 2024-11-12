int main () {
    int sz [(740 - 735)] [5];
    int m;
    int Ql6KmzGwHnQ1;
    int a;
    int lLgPu2UzlerO;
    for (int Xpdc61li = (19 - 19);
    (905 - 901) >= Xpdc61li; Xpdc61li = Xpdc61li +1) {
        for (int t = (30 - 30);
        (348 - 344) >= t; t = t + 1) {
            scanf ("%d", &sz[Xpdc61li][t]);
        };
    }
    scanf ("%d%d", &m, &Ql6KmzGwHnQ1);
    if (4 >= m && Ql6KmzGwHnQ1 <= 4) {
        for (int yu56FeKmsk = 0;
        yu56FeKmsk < 5; yu56FeKmsk = yu56FeKmsk + 1) {
            lLgPu2UzlerO = sz[m][yu56FeKmsk];
            sz[m][yu56FeKmsk] = sz[Ql6KmzGwHnQ1][yu56FeKmsk];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sz[Ql6KmzGwHnQ1][yu56FeKmsk] = lLgPu2UzlerO;
        }
        for (int p = 0;
        p <= 4; p = p + 1) {
            {
                int kWxG6YnpDS = 0;
                while (kWxG6YnpDS <= 3) {
                    printf ("%d ", sz[p][kWxG6YnpDS]);
                    kWxG6YnpDS = kWxG6YnpDS + 1;
                };
            }
            printf ("%d\n", sz[p][4]);
        };
    }
    else {
    }
    return 0;
}

