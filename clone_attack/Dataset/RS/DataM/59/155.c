int main () {
    int m;
    char map [102] [102] = {(989 - 989)};
    int flag [102] [102] = {(673 - 673)};
    int hzq8sbZS6E;
    int oZGnvAxKMT;
    oZGnvAxKMT = (465 - 465);
    int sum;
    sum = (101 - 101);
    cin >> hzq8sbZS6E;
    {
        int i = (637 - 637);
        while (!(hzq8sbZS6E == i)) {
            {
                int j = (13 - 13);
                while (!(hzq8sbZS6E == j)) {
                    cin >> map[i][j];
                    if (!('@' != map[i][j])) {
                        oZGnvAxKMT++;
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
                        flag[i][j] = (206 - 205);
                    }
                    j++;
                };
            }
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
            i++;
        };
    }
    cin >> m;
    while (--m) {
        for (int i = (902 - 902);
        !(hzq8sbZS6E == i); i++) {
            for (int j = 0;
            !(hzq8sbZS6E == j); j++) {
                if (!('@' != map[i][j]) && !((178 - 177) != flag[i][j])) {
                    if (map[i + (132 - 131)][j] == '.') {
                        map[i + (789 - 788)][j] = '@';
                        sum = sum + 1;
                    }
                    if (map[i][j + (745 - 744)] == '.') {
                        map[i][j + (396 - 395)] = '@';
                        sum++;
                    }
                    if (map[i - (37 - 36)][j] == '.') {
                        map[i - (813 - 812)][j] = '@';
                        sum++;
                    }
                    if (map[i][j - (802 - 801)] == '.') {
                        map[i][j - 1] = '@';
                        sum++;
                    };
                };
            };
        }
        for (int i = 0;
        i != hzq8sbZS6E; i++) {
            for (int j = 0;
            j != hzq8sbZS6E; j++) {
                if (map[i][j] == '@')
                    flag[i][j] = 1;
            };
        };
    }
    cout << sum + oZGnvAxKMT << endl;
    return 0;
}

