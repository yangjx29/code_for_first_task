int main () {
    char str [(878 - 622)];
    char subs [256];
    char rpl [256];
    int len1;
    int len2;
    int c;
    int i;
    int j;
    int m;
    len1 = (50 - 50);
    len2 = (483 - 483);
    c = (97 - 97);
    cin >> str >> subs >> rpl;
    len1 = strlen (subs);
    len2 = strlen (rpl);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (256 > i && !(0 == str[i])) {
            if (!(subs[0] != str[i])) {
                c = 0;
                {
                    j = 0;
                    while (len1 > j) {
                        if (!(subs[j] == str[i + j])) {
                            c = 1;
                            break;
                        }
                        else {
                            c = c + 1;
                        }
                        j = j + 1;
                    };
                };
            }
            if (c == len1) {
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            i = i + 1;
        };
    }
    if (c == 0) {
        m = 0;
        while (256 > m && str[m] != 0) {
            cout << str[m];
            m = m + 1;
        };
    }
    if (c == len1) {
        {
            m = 0;
            while (m < i) {
                cout << str[m];
                m = m + 1;
            };
        }
        for (m = i; m < i + len2; m = m + 1) {
            cout << rpl[m - i];
        }
        {
            m = i + len2;
            while (m < 256 && str[m] != 0) {
                cout << str[m];
                m = m + 1;
            };
        };
    }
    return 0;
}

