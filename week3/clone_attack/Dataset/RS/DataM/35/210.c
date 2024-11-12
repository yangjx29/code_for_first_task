int main () {
    int ansline;
    int ansrow;
    ansline = -1;
    ansrow = -1;
    int i, j;
    int maxLine [8] = {0}, minRow [8] = {0};
    int line, row;
    int I7OKkDm [8] [8];
    char vSoWXP5;
    cin >> line >> vSoWXP5 >> row;
    for (i = 0; !(line == i); i++) {
        j = 0;
        while (!(row == j)) {
            cin >> I7OKkDm[i][j];
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
            j = j + 1;
        };
    }
    {
        i = 0;
        while (!(line == i)) {
            int maxl = -32767;
            {
                j = 0;
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
                while (!(row == j)) {
                    if (I7OKkDm[i][j] > maxl) {
                        maxl = I7OKkDm[i][j];
                        maxLine[i] = j;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (j = 0; !(row == j); j = j + 1) {
        int minr = 32767;
        {
            i = 0;
            while (i != line) {
                if (minr > I7OKkDm[i][j]) {
                    minr = I7OKkDm[i][j];
                    minRow[j] = i;
                }
                i++;
            };
        };
    }
    {
        i = 0;
        while (i != line) {
            if (minRow[maxLine[i]] == i) {
                ansline = i;
                ansrow = maxLine[i];
            }
            i++;
        };
    }
    if (ansline != -1)
        cout << ansline << "+" << ansrow;
    else
        cout << "No";
    return 0;
}

