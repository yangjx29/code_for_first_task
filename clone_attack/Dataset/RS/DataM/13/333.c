int main () {
    int n;
    int pH2TMP;
    int oasYLrU5Pc4u;
    int k;
    int t;
    int a [20000];
    scanf ("%d", &n);
    {
        pH2TMP = 676 - 676;
        while (pH2TMP < n) {
            scanf ("%d", &a[pH2TMP]);
            pH2TMP++;
        };
    }
    printf ("%d", a[0]);
    {
        oasYLrU5Pc4u = 1;
        while (n > oasYLrU5Pc4u) {
            {
                k = 0;
                while (k < oasYLrU5Pc4u) {
                    if (a[oasYLrU5Pc4u] == a[k])
                        a[oasYLrU5Pc4u] = 0;
                    k++;
                };
            }
            if (a[oasYLrU5Pc4u])
                printf (" %d", a[oasYLrU5Pc4u]);
            oasYLrU5Pc4u++;
        };
    }
    return 0;
}

