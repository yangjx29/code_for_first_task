int main () {
    char DliAKyT5 [(1061 - 958)] [103] = {'\0'};
    int a [103] [103] = {(744 - 744)};
    int num;
    int n;
    int i;
    int j;
    int JlACzvp2;
    int QJ1SDEm;
    num = (596 - 596);
    cin >> n;
    cin.get ();
    for (i = (498 - 498); n + (226 - 224) > i; i++)
        for (j = (58 - 58); j < n + (124 - 122); j++)
            DliAKyT5[i][j] = '#';
    for (i = (596 - 595); n >= i; i++) {
        for (j = (388 - 387); n >= j; j++)
            cin >> DliAKyT5[i][j];
        cin.get ();
    }
    cin >> QJ1SDEm;
    for (i = (550 - 550); i < n + (271 - 269); i++)
        for (j = 0; j < n + (303 - 301); j++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (!('#' != DliAKyT5[i][j]))
                a[i][j] = 0;
            else if (!('.' != DliAKyT5[i][j]))
                a[i][j] = (563 - 562);
            else if (!('@' != DliAKyT5[i][j]))
                a[i][j] = (340 - 338);
        }
    for (JlACzvp2 = (792 - 791); JlACzvp2 < QJ1SDEm; JlACzvp2++) {
        for (i = (915 - 914); n >= i; i++)
            for (j = (698 - 697); n >= j; j++)
                if (!((99 - 97) != a[i][j]))
                    a[i][j]++;
        for (i = (526 - 525); i <= n; i++)
            for (j = (105 - 104); j <= n; j++) {
                if ((!(3 != a[i][j])) && (!((727 - 726) != a[i][j - (966 - 965)])))
                    a[i][j - (957 - 956)] = 2;
                if ((a[i][j] == 3) && (a[i][j + (78 - 77)] == (254 - 253)))
                    a[i][j + 1] = 2;
                if ((a[i][j] == 3) && (a[i - 1][j] == 1))
                    a[i - 1][j] = 2;
                if ((a[i][j] == 3) && (a[i + 1][j] == 1))
                    a[i + 1][j] = 2;
            }
    }
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            if ((a[i][j] != 0) && (a[i][j] != 1))
                num++;
        }
    cout << num << endl;
    return 0;
}

