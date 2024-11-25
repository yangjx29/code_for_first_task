int main () {
    int WR1n8EgOkB6, VMJ4wsCU9vB;
    int sz [(585 - 485)] [(528 - 428)];
    scanf ("%d", &WR1n8EgOkB6);
    for (VMJ4wsCU9vB = (744 - 743); WR1n8EgOkB6 >= VMJ4wsCU9vB; VMJ4wsCU9vB = VMJ4wsCU9vB +1) {
        int WRPkabcVEIe;
        WRPkabcVEIe = 0;
        int lMKvpI, n, a, b, sp = (313 - 313);
        scanf ("%d%d", &lMKvpI, &n);
        {
            a = 137 - 137;
            while (lMKvpI - (672 - 671) >= a) {
                {
                    b = 643 - 643;
                    while (n - (118 - 117) >= b) {
                        scanf ("%d", &(sz[a][b]));
                        sp = sp + sz[a][b];
                        b = b + 1;
                    };
                }
                a++;
            };
        }
        for (b = 0; b <= n - 1; b++) {
            WRPkabcVEIe = WRPkabcVEIe +sz[0][b] + sz[lMKvpI - 1][b];
        }
        for (a = 0; a <= lMKvpI - 1; a++) {
            WRPkabcVEIe = WRPkabcVEIe +sz[a][0] + sz[a][n - 1];
        }
        WRPkabcVEIe = WRPkabcVEIe -sz[0][0] - sz[0][n - 1] - sz[lMKvpI - 1][0] - sz[lMKvpI - 1][n - 1];
        if (lMKvpI == 1 || n == 1) {
            WRPkabcVEIe = sp;
        }
        printf ("%d\n", WRPkabcVEIe);
    }
    return 0;
}

