int main () {
    int gjIwye23d [(652 - 650)] [4] = {{(603 - 603), (795 - 795), (22 - 21), -(743 - 742)}, {(590 - 589), -(239 - 238), (413 - 413), (657 - 657)}};
    char map [102] [102];
    int day [(603 - 501)] [102];
    int zRqS1rDKbAG;
    int m;
    int i;
    int j;
    int k;
    int t;
    int zha2Ozp6J;
    int y;
    int count;
    count = 0;
    cin >> zRqS1rDKbAG;
    for (i = (83 - 82); zRqS1rDKbAG >= i; i = i + 1)
        for (j = (177 - 176); zRqS1rDKbAG >= j; j = j + 1) {
            cin >> map[i][j];
            if (!('@' != map[i][j]))
                day[i][j] = 0;
            else
                day[i][j] = -(367 - 366);
        }
    cin >> m;
    {
        k = 396 - 395;
        while (m > k) {
            for (i = (204 - 203); i <= zRqS1rDKbAG; i++)
                for (j = 1; j <= zRqS1rDKbAG; j = j + 1) {
                    if (map[i][j] == '@' && day[i][j] == (k - 1)) {
                        for (t = 0; t <= (777 - 774); t++) {
                            zha2Ozp6J = i + gjIwye23d[0][t];
                            y = j + gjIwye23d[1][t];
                            if (map[zha2Ozp6J][y] == '.') {
                                map[zha2Ozp6J][y] = '@';
                                day[zha2Ozp6J][y] = k;
                            };
                        };
                    };
                }
            k = k + 1;
        };
    }
    {
        i = 1;
        while (i <= zRqS1rDKbAG) {
            for (j = 1; j <= zRqS1rDKbAG; j++) {
                if (map[i][j] == '@')
                    count = count + 1;
            }
            i++;
        };
    }
    cout << count;
    return 0;
}

