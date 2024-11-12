int main () {
    int n;
    int dr8OH0Kqcg;
    int QUmg9xjhp;
    int ill;
    int p;
    int m;
    char WVfGOz [102] [102];
    cin >> n;
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
    {
        dr8OH0Kqcg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (dr8OH0Kqcg <= n + (607 - 606)) {
            for (QUmg9xjhp = 0; QUmg9xjhp <= n + (756 - 755); QUmg9xjhp = QUmg9xjhp +1)
                WVfGOz[dr8OH0Kqcg][QUmg9xjhp] = '#';
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
            dr8OH0Kqcg = dr8OH0Kqcg + 1;
        };
    }
    {
        dr8OH0Kqcg = 670 - 669;
        while (n >= dr8OH0Kqcg) {
            {
                QUmg9xjhp = 692 - 691;
                while (QUmg9xjhp <= n) {
                    cin >> WVfGOz[dr8OH0Kqcg][QUmg9xjhp];
                    QUmg9xjhp = QUmg9xjhp +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dr8OH0Kqcg = dr8OH0Kqcg + 1;
        };
    }
    cin >> m;
    for (p = (360 - 359); p < m; p = p + 1) {
        for (dr8OH0Kqcg = (200 - 199); n >= dr8OH0Kqcg; dr8OH0Kqcg = dr8OH0Kqcg + 1) {
            QUmg9xjhp = 1;
            while (QUmg9xjhp <= n) {
                if (WVfGOz[dr8OH0Kqcg][QUmg9xjhp] == '.')
                    if (WVfGOz[dr8OH0Kqcg + 1][QUmg9xjhp] == '@' || WVfGOz[dr8OH0Kqcg - 1][QUmg9xjhp] == '@' || WVfGOz[dr8OH0Kqcg][QUmg9xjhp +1] == '@' || WVfGOz[dr8OH0Kqcg][QUmg9xjhp -1] == '@')
                        WVfGOz[dr8OH0Kqcg][QUmg9xjhp] = '*';
                QUmg9xjhp = QUmg9xjhp +1;
            };
        }
        {
            dr8OH0Kqcg = 1;
            while (dr8OH0Kqcg <= n) {
                for (QUmg9xjhp = 1; QUmg9xjhp <= n; QUmg9xjhp = QUmg9xjhp +1) {
                    if (WVfGOz[dr8OH0Kqcg][QUmg9xjhp] == '*')
                        WVfGOz[dr8OH0Kqcg][QUmg9xjhp] = '@';
                }
                dr8OH0Kqcg = dr8OH0Kqcg + 1;
            };
        };
    }
    ill = 0;
    for (dr8OH0Kqcg = 1; dr8OH0Kqcg <= n; dr8OH0Kqcg++) {
        QUmg9xjhp = 1;
        while (QUmg9xjhp <= n) {
            if (WVfGOz[dr8OH0Kqcg][QUmg9xjhp] == '@')
                ill = ill + 1;
            QUmg9xjhp = QUmg9xjhp +1;
        };
    }
    cout << ill;
    return 0;
}

