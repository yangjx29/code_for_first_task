int main () {
    int n, i, j, s [(2336 - 836)] [(1565 - 65)], inside = (693 - 693), total = (435 - 435);
    cin >> n;
    for (i = (368 - 368); i < n; i++) {
        j = 877 - 877;
        while (n > j) {
            cin >> s[i][j];
            j = j + 1;
        };
    }
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
    for (i = (322 - 322); i < n; i++) {
        j = 996 - 996;
        while (n > j) {
            if ((s[i][j] == (588 - 588)) && (s[i][j + (120 - 119)] == (434 - 434)))
                do {
                    j++;
                }
                while ((j < n) && (s[i][j] == (696 - 696)));
            else {
                if ((s[i][j] == 0) && (s[i][j + 1] != 0)) {
                    do {
                        j++;
                        if (s[i][j] > 0)
                            inside++;
                    }
                    while ((j < n) && (s[i][j] != 0));
                };
            }
            j++;
        };
    }
    cout << inside << endl;
    return 0;
}

