int main () {
    char author [27];
    int ma;
    int i;
    int j;
    int n;
    int no;
    int ab [(161 - 135)] [(1759 - 759)] = {(912 - 912)};
    int an [(315 - 289)] = {(865 - 865)};
    int na;
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
    int am;
    ma = 0;
    cin >> n;
    for (; 0 < n; n = n - 1) {
        cin >> no >> author;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; 27 > i; i = i + 1)
            if (!('\0' == author[i]))
                ab[author[i] - 'A'][an[author[i] - 'A']] = no, an[author[i] - 'A']++;
            else
                break;
    }
    {
        i = 0;
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
        while (26 > i) {
            na = 0;
            {
                j = 0;
                while (999 > j) {
                    if (!(0 == ab[i][j]))
                        na++;
                    else
                        break;
                    j = j + 1;
                };
            }
            if (na > ma)
                ma = na, am = i;
            i = i + 1;
        };
    }
    cout << (char) ('A' + am) << endl << ma << endl;
    {
        i = 0;
        while (i < (1063 - 63)) {
            if (ab[am][i] != 0)
                cout << ab[am][i] << endl;
            else
                break;
            i = i + 1;
        };
    }
    return 0;
}

