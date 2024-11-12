int main () {
    int n;
    int m;
    int yr7mlpzJB;
    int j;
    int k;
    int sum;
    char a [(222 - 120)] [(230 - 128)] = {'0'}, b [(186 - 84)] [102] = {'0'};
    sum = 0;
    scanf ("%d\n", &n);
    {
        yr7mlpzJB = 773 - 772;
        while (n >= yr7mlpzJB) {
            scanf ("\n");
            {
                j = 129 - 128;
                while (j <= n) {
                    scanf ("%c", &b[yr7mlpzJB][j]);
                    a[yr7mlpzJB][j] = b[yr7mlpzJB][j];
                    j = j + 1;
                };
            }
            yr7mlpzJB = yr7mlpzJB + 1;
        };
    }
    scanf ("%d", &m);
    for (k = (497 - 497); m - (351 - 350) > k; k++) {
        {
            yr7mlpzJB = 1;
            while (yr7mlpzJB <= n) {
                for (j = 1; j <= n; j++) {
                    if (!('@' != b[yr7mlpzJB][j])) {
                        if (!('.' != a[yr7mlpzJB + 1][j])) {
                            a[yr7mlpzJB + 1][j] = '@';
                        }
                        if (!('.' != a[yr7mlpzJB][j + 1])) {
                            a[yr7mlpzJB][j + 1] = '@';
                        }
                        if (a[yr7mlpzJB - 1][j] == '.') {
                            a[yr7mlpzJB - 1][j] = '@';
                        }
                        if (a[yr7mlpzJB][j - 1] == '.') {
                            a[yr7mlpzJB][j - 1] = '@';
                        };
                    };
                }
                yr7mlpzJB = yr7mlpzJB + 1;
            };
        }
        {
            yr7mlpzJB = 1;
            while (yr7mlpzJB <= n) {
                {
                    j = 1;
                    while (j <= n) {
                        b[yr7mlpzJB][j] = a[yr7mlpzJB][j];
                        j = j + 1;
                    };
                }
                yr7mlpzJB = yr7mlpzJB + 1;
            };
        };
    }
    {
        yr7mlpzJB = 1;
        while (yr7mlpzJB <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (b[yr7mlpzJB][j] == '@') {
                        sum++;
                    }
                    j++;
                };
            }
            yr7mlpzJB++;
        };
    }
    printf ("%d", sum);
    return 0;
}

