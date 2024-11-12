int main () {
    char shuru [(402 - 301)] [(1076 - 975)];
    int n = (174 - 174), m = (697 - 697);
    int jishu = 0;
    cin >> n;
    for (int i = (183 - 183);
    n > i; i = i + 1) {
        for (int j = (785 - 785);
        n > j; j = j + 1) {
            cin >> shuru[i][j];
        };
    }
    cin >> m;
    for (int k = (716 - 715);
    m > k; k++) {
        for (int i = (236 - 236);
        n > i; i = i + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (int j = (739 - 739);
            j < n; j = j + 1) {
                if (shuru[i][j] == '@') {
                    if (((595 - 595) <= (i - (277 - 276))) && shuru[i - (557 - 556)][j] == '.')
                        shuru[i - (579 - 578)][j] = 'a';
                    if ((n > (i + (607 - 606))) && shuru[i + (780 - 779)][j] == '.')
                        shuru[i + 1][j] = 'a';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if ((0 <= (j - 1)) && shuru[i][j - 1] == '.')
                        shuru[i][j - 1] = 'a';
                    if ((n > (j + 1)) && shuru[i][j + 1] == '.')
                        shuru[i][j + 1] = 'a';
                };
            };
        }
        for (int i = 0;
        i < n; i++) {
            for (int j = 0;
            j < n; j++) {
                if (shuru[i][j] == 'a')
                    shuru[i][j] = '@';
                else
                    continue;
            };
        };
    }
    for (int i = 0;
    i < n; i++) {
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
        for (int j = 0;
        j < n; j++) {
            if (shuru[i][j] == '@')
                jishu++;
            else
                continue;
        };
    }
    cout << jishu << endl;
    return 0;
}

