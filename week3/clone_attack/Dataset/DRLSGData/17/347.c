int main () {
    char c [1000] [105] = {0};
    int a [105] = {0};
    int n;
    int k;
    int i;
    int j;
    int l;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%s", c[i]);
    }
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < 105; j++) {
                a[j] = 0;
            }
            l = strlen (c[i]);
            printf ("%s\n", c[i]);
            {
                j = l - 1;
                while (0 <= j) {
                    if (!('(' != c[i][j])) {
                        {
                            k = j + 1;
                            while (l > k) {
                                if (!(')' != c[i][k])) {
                                    c[i][k] = 0;
                                    c[i][j] = 0;
                                    break;
                                }
                                k++;
                            }
                        }
                        if (!(l != k)) {
                            c[i][j] = 0;
                            a[j] = 1;
                        }
                    }
                    j--;
                }
            }
            for (j = 0; l > j; j++) {
                if (!(')' != c[i][j]))
                    a[j] = 2;
            }
            {
                j = 0;
                while (l > j) {
                    if (!(1 != a[j]))
                        ;
                    else if (a[j] == 2)
                        ;
                    else
                        ;
                    j++;
                }
            }
            i++;
        }
    }
    return 0;
}

