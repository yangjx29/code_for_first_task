int main () {
    int m;
    int TAGWf79l;
    int j;
    int t;
    int n;
    int a [500];
    int OvsQ0w [500];
    m = 0;
    scanf ("%d", &n);
    for (TAGWf79l = 0; n > TAGWf79l; TAGWf79l = TAGWf79l +1)
        scanf ("%d", &a[TAGWf79l]);
    {
        TAGWf79l = 0;
        while (n > TAGWf79l) {
            if (!(1 != a[TAGWf79l] % 2)) {
                OvsQ0w[m] = a[TAGWf79l];
                m++;
            }
            TAGWf79l = TAGWf79l +1;
        };
    }
    {
        j = 0;
        while (m - 1 > j) {
            {
                TAGWf79l = 0;
                while (TAGWf79l < m - j - 1) {
                    if (OvsQ0w[TAGWf79l +1] < OvsQ0w[TAGWf79l]) {
                        t = OvsQ0w[TAGWf79l];
                        OvsQ0w[TAGWf79l] = OvsQ0w[TAGWf79l +1];
                        OvsQ0w[TAGWf79l +1] = t;
                    }
                    TAGWf79l = TAGWf79l +1;
                };
            }
            j = j + 1;
        };
    }
    for (TAGWf79l = 0; TAGWf79l < m; TAGWf79l = TAGWf79l +1) {
        printf ("%d", OvsQ0w[TAGWf79l]);
        if (TAGWf79l != m - 1)
            ;
    }
    return 0;
}

