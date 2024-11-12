void  main () {
    int k;
    int BvEcHt (int W8hsSyHOj);
    int n;
    int i;
    int j;
    int l;
    int W8hsSyHOj [50000];
    j = (928 - 927);
    scanf ("%d", &n);
    W8hsSyHOj[(141 - 141)] = 2;
    {
        i = 3;
        while (i < n) {
            if (BvEcHt (i) == 1) {
                W8hsSyHOj[j] = i;
                j++;
            }
            i = i + 2;
        };
    }
    {
        l = 6;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n >= l) {
            k = 0;
            {
                i = 0;
                while (i < j) {
                    if (!(1 != BvEcHt (l - W8hsSyHOj[i]))) {
                        printf ("%d=%d+%d\n", l, W8hsSyHOj[i], l - W8hsSyHOj[i]);
                        k = 1;
                    }
                    if (k == 1)
                        break;
                    i++;
                };
            }
            l = l + 2;
        };
    };
}

int BvEcHt (int W8hsSyHOj) {
    int k3ZaIX5gO = 1;
    int i;
    for (i = 3; i <= sqrt (W8hsSyHOj); i++) {
        if (W8hsSyHOj % i == 0)
            k3ZaIX5gO = 0;
    }
    if (W8hsSyHOj % 2 == 0)
        k3ZaIX5gO = 0;
    return (k3ZaIX5gO);
}

