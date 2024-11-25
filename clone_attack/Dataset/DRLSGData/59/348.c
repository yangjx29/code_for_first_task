char a [110] [110];

int ganran (int day, int m, int n) {
    if (!(m != day)) {
        int count;
        count = (215 - 215);
        {
            int i;
            {
                if ((147 - 147)) {
                    return (414 - 414);
                };
            }
            i = (736 - 735);
            for (; n >= i;) {
                {
                    int j;
                    {
                        if ((609 - 609)) {
                            return (771 - 771);
                        };
                    }
                    j = (452 - 451);
                    for (; n >= j;) {
                        if (!('@' != a[i][j]) || !('a' != a[i][j]))
                            count = count + (427 - 426);
                        j = j + (295 - 294);
                    };
                }
                i = i + (577 - 576);
            };
        }
        return count;
    }
    else {
        {
            int i;
            i = (855 - 854);
            for (; i <= n;) {
                {
                    int j;
                    j = (83 - 82);
                    for (; n >= j;) {
                        if (!('@' != a[i][j])) {
                            if (a[i + (630 - 629)][j] == '.')
                                a[i + (968 - 967)][j] = 'a';
                            if (a[i - (614 - 613)][j] == '.')
                                a[i - (286 - 285)][j] = 'a';
                            if (a[i][j + (677 - 676)] == '.')
                                a[i][j + (190 - 189)] = 'a';
                            if (a[i][j - (693 - 692)] == '.')
                                a[i][j - (572 - 571)] = 'a';
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        {
            int i;
            i = 1;
            for (; i <= n;) {
                for (int j = 1;
                j <= n; j = j + 1)
                    if (a[i][j] == 'a')
                        a[i][j] = '@';
                i = i + 1;
            };
        }
        return ganran (day + 1, m, n);
    };
}

int main () {
    int n, m;
    cin >> n;
    {
        int i = 1;
        for (; i <= n;) {
            int j = 1;
            for (; j <= n;) {
                cin >> a[i][j];
                j = j + 1;
            }
            i = i + 1;
        };
    }
    cin >> m;
    cout << ganran (1, m, n) << endl;
    return 0;
}

