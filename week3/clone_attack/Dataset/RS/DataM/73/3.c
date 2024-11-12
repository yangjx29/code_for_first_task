int main () {
    int s [6] [6] = {0}, i, j, QQY6gd [6] [6], ftgvw0Ie, b, c = 0, d6zGfdyp = 0;
    {
        i = 1;
        while (5 >= i) {
            {
                j = 1;
                while (5 >= j) {
                    cin >> s[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (5 >= i) {
            ftgvw0Ie = i, b = 1, QQY6gd[ftgvw0Ie][b] = s[i][1];
            {
                j = 1;
                while (j <= 5) {
                    if (s[i][j] > QQY6gd[ftgvw0Ie][b])
                        ftgvw0Ie = i, b = j, QQY6gd[ftgvw0Ie][b] = s[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            {
                j = 1;
                while (j <= 5) {
                    if (QQY6gd[ftgvw0Ie][b] <= s[j][b])
                        c = c + 1;
                    j++;
                };
            }
            if (c == 5) {
                d6zGfdyp = 1;
                cout << ftgvw0Ie << ' ' << b << ' ' << QQY6gd[ftgvw0Ie][b] << endl;
            }
            c = 0;
        };
    }
    if (d6zGfdyp == 0)
        cout << "not found" << endl;
    return 0;
}

