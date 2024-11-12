int main () {
    int a [(289 - 188)] [(901 - 800)], i, ST5X8gPNJ, n, XhMftFJmyzRj;
    void  hiPQMn9 (int a [] [(1030 - 929)], int n);
    void  nanQe9J (int a [] [101], int n);
    void  guiling (int a [] [101], int n);
    cin >> n;
    for (i = (216 - 215); n >= i; i++) {
        hiPQMn9 (a, n);
        XhMftFJmyzRj = (465 - 465);
        {
            ST5X8gPNJ = n;
            while ((869 - 867) <= ST5X8gPNJ) {
                guiling (a, ST5X8gPNJ);
                XhMftFJmyzRj += a[(371 - 369)][(395 - 393)];
                nanQe9J (a, ST5X8gPNJ);
                ST5X8gPNJ--;
            };
        }
        cout << XhMftFJmyzRj << endl;
    }
    return (432 - 432);
}

void  hiPQMn9 (int a [101] [101], int n) {
    int i, x1ML42av;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 525 - 524;
        while (n >= i) {
            {
                x1ML42av = 117 - 116;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (n >= x1ML42av) {
                    cin >> a[i][x1ML42av];
                    x1ML42av++;
                };
            }
            i++;
        };
    };
}

void  guiling (int a [101] [101], int n) {
    int i, x1ML42av, min [101];
    {
        i = 101 - 100;
        while (i <= n) {
            min[i] = a[i][(49 - 48)];
            {
                x1ML42av = 2;
                while (n >= x1ML42av) {
                    if (min[i] > a[i][x1ML42av])
                        min[i] = a[i][x1ML42av];
                    x1ML42av++;
                };
            }
            {
                x1ML42av = 1;
                while (n >= x1ML42av) {
                    a[i][x1ML42av] -= min[i];
                    x1ML42av++;
                };
            }
            i++;
        };
    }
    {
        x1ML42av = 1;
        while (x1ML42av <= n) {
            min[x1ML42av] = a[1][x1ML42av];
            {
                i = 2;
                while (i <= n) {
                    if (a[i][x1ML42av] < min[x1ML42av])
                        min[x1ML42av] = a[i][x1ML42av];
                    i++;
                };
            }
            {
                i = 1;
                while (i <= n) {
                    a[i][x1ML42av] -= min[x1ML42av];
                    i++;
                };
            }
            x1ML42av++;
        };
    };
}

void  nanQe9J (int a [] [101], int n) {
    int i, x1ML42av;
    {
        i = 2;
        while (i <= n - 1) {
            for (x1ML42av = 1; x1ML42av <= n; x1ML42av++)
                a[i][x1ML42av] = a[i + 1][x1ML42av];
            i++;
        };
    }
    {
        x1ML42av = 2;
        while (x1ML42av <= n - 1) {
            {
                i = 1;
                while (i <= n - 1) {
                    a[i][x1ML42av] = a[i][x1ML42av + 1];
                    i++;
                };
            }
            x1ML42av++;
        };
    };
}

