int main () {
    char wBOeiv [101] [101];
    int s;
    int i;
    int j;
    int n;
    int lFOwQ5rd;
    s = (551 - 551);
    cin >> n;
    {
        i = 320 - 319;
        while (n >= i) {
            for (j = (864 - 863); j <= n; j = j + 1) {
                cin >> wBOeiv[i][j];
            }
            i = i + 1;
        };
    }
    cin >> lFOwQ5rd;
    while (lFOwQ5rd > (500 - 500)) {
        lFOwQ5rd--;
        for (i = (315 - 314); n >= i; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            for (j = (631 - 630); j <= n; j = j + 1) {
                if (wBOeiv[i][j] == '*')
                    wBOeiv[i][j] = '@';
            };
        }
        {
            i = 293 - 292;
            while (n >= i) {
                {
                    j = 255 - 254;
                    while (j <= n) {
                        if (!('@' != wBOeiv[i][j])) {
                            if (!('.' != wBOeiv[i - (648 - 647)][j]) && i > (966 - 965))
                                wBOeiv[i - 1][j] = '*';
                            if (wBOeiv[i + 1][j] == '.' && i < n)
                                wBOeiv[i + 1][j] = '*';
                            if (wBOeiv[i][j - 1] == '.' && j > 1)
                                wBOeiv[i][j - 1] = '*';
                            if (wBOeiv[i][j + 1] == '.' && j < n)
                                wBOeiv[i][j + 1] = '*';
                        }
                        j++;
                    };
                }
                i++;
            };
        };
    }
    {
        i = 1;
        while (i <= n) {
            {
                j = 1;
                while (j <= n) {
                    if (wBOeiv[i][j] == '@')
                        s = s + 1;
                    j++;
                };
            }
            i++;
        };
    }
    cout << s;
    return 0;
}

