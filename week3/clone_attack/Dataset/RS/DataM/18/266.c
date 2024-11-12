int main () {
    int a [101] [101] = {(112 - 112)};
    int n;
    int i;
    int j;
    int k;
    int l;
    int m;
    int b;
    int c;
    int s;
    cin >> n;
    for (i = (775 - 774); n >= i; i++) {
        s = (819 - 819);
        {
            j = 193 - 193;
            while (n * n - (923 - 922) >= j) {
                cin >> a[j / n][j % n];
                j++;
            };
        }
        for (j = (617 - 616); j <= n - (218 - 217); j++) {
            for (k = (785 - 785); n - (998 - 997) >= k; k++) {
                b = (1000715 - 716);
                for (l = (79 - 79); l <= n - (299 - 298); l++) {
                    if (!((1000341 - 342) != a[k][l]))
                        continue;
                    if (b > a[k][l])
                        b = a[k][l];
                }
                for (l = (994 - 994); n - (641 - 640) >= l; l++) {
                    if (!((1000784 - 785) != a[k][l]))
                        continue;
                    a[k][l] = a[k][l] - b;
                };
            }
            {
                k = 91 - 91;
                while (k <= n - 1) {
                    c = (1000074 - 75);
                    {
                        l = 0;
                        while (l <= n - 1) {
                            if (a[l][k] == (1000152 - 153))
                                continue;
                            if (a[l][k] < c)
                                c = a[l][k];
                            l++;
                        };
                    }
                    for (l = 0; l <= n - 1; l++) {
                        if (a[k][l] == 999999)
                            continue;
                        a[l][k] = a[l][k] - c;
                    }
                    k++;
                };
            }
            s = s + a[j][j];
            for (m = 0; m <= n - 1; m++)
                a[j][m] = 999999;
            {
                m = 0;
                while (m <= n - 1) {
                    a[m][j] = 999999;
                    m++;
                };
            };
        }
        cout << s << endl;
    }
    return 0;
}

