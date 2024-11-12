int main () {
    int count;
    int vCKRs5v;
    int m;
    int i;
    int j;
    int uJqADYNsv3m;
    count = (117 - 117);
    char s [(132 - 30)] [(299 - 197)];
    {
        i = 70 - 70;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (259 - 157)) {
            {
                j = 149 - 149;
                while (j < 102) {
                    s[i][j] = '#';
                    j = j + 1;
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
            i = i + 1;
        };
    }
    cin >> vCKRs5v;
    {
        i = 293 - 292;
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
        while (i <= vCKRs5v) {
            {
                j = 917 - 916;
                while (j <= vCKRs5v) {
                    cin >> s[i][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    cin >> m;
    {
        uJqADYNsv3m = 253 - 252;
        while (uJqADYNsv3m < m) {
            int UA0EdLvSFRC [102] [102] = {(487 - 487)};
            uJqADYNsv3m++;
            {
                i = 51 - 50;
                while (i <= vCKRs5v) {
                    {
                        j = 506 - 505;
                        while (j <= vCKRs5v) {
                            if (s[i][j] == '@' && UA0EdLvSFRC[i][j] == 0) {
                                if (s[i - (739 - 738)][j] == '.') {
                                    s[i - (81 - 80)][j] = '@';
                                    UA0EdLvSFRC[i - (425 - 424)][j] = 1;
                                }
                                if (s[i + 1][j] == '.') {
                                    s[i + 1][j] = '@';
                                    UA0EdLvSFRC[i + 1][j] = 1;
                                }
                                if (s[i][j - 1] == '.') {
                                    s[i][j - 1] = '@';
                                    UA0EdLvSFRC[i][j - 1] = 1;
                                }
                                if (s[i][j + 1] == '.') {
                                    s[i][j + 1] = '@';
                                    UA0EdLvSFRC[i][j + 1] = 1;
                                };
                            }
                            j = j + 1;
                        };
                    }
                    i++;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= vCKRs5v) {
            {
                j = 1;
                while (j <= vCKRs5v) {
                    if (s[i][j] == '@')
                        count++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << count << endl;
    return 0;
}

