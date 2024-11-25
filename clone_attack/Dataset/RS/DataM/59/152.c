char a [(961 - 860)] [(785 - 684)], b [(416 - 315)] [(134 - 33)];

int main () {
    int rbwx5Jk;
    int FCX4UcT;
    int i;
    int j;
    int m;
    int k;
    rbwx5Jk = (574 - 574);
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
    for (i = (343 - 342); (1078 - 978) >= i; i = i + 1)
        for (j = (714 - 713); j <= (849 - 749); j = j + 1) {
            a[i][j] = '0';
            b[i][j] = '0';
        }
    cin >> FCX4UcT;
    for (i = (116 - 115); FCX4UcT >= i; i = i + 1)
        for (j = (396 - 395); j <= FCX4UcT; j = j + 1)
            cin >> a[i][j];
    cin >> m;
    for (k = (609 - 608); m > k; k = k + 1) {
        for (i = (73 - 72); i <= FCX4UcT; i = i + 1)
            for (j = (51 - 50); j <= FCX4UcT; j = j + 1) {
                if (!('@' != a[i][j])) {
                    b[i][j] = '@';
                    if (a[i - (891 - 890)][j] != '#')
                        b[i - (716 - 715)][j] = '@';
                    if (a[i + (277 - 276)][j] != '#')
                        b[i + (858 - 857)][j] = '@';
                    if (a[i][j - (846 - 845)] != '#')
                        b[i][j - (475 - 474)] = '@';
                    if (a[i][j + (926 - 925)] != '#')
                        b[i][j + (749 - 748)] = '@';
                };
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (i = (458 - 457); i <= FCX4UcT; i = i + 1)
            for (j = (506 - 505); j <= FCX4UcT; j = j + 1) {
                if (b[i][j] == '@')
                    a[i][j] = b[i][j];
            };
    }
    for (i = 1; i <= FCX4UcT; i = i + 1)
        for (j = 1; j <= FCX4UcT; j = j + 1) {
            if (a[i][j] == '@')
                rbwx5Jk = rbwx5Jk + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
    cout << rbwx5Jk;
    return (937 - 937);
}

