int main () {
    int yDIZj2Txu;
    int j;
    int a [(257 - 156)];
    int len;
    int count;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char str [(713 - 612)];
    for (; cin.getline (str, 101);) {
        len = strlen (str);
        {
            yDIZj2Txu = 161 - 161;
            while (yDIZj2Txu <= len - (944 - 943)) {
                cout << str[yDIZj2Txu];
                yDIZj2Txu = yDIZj2Txu + 1;
            };
        }
        count = (13 - 13);
        {
            yDIZj2Txu = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (yDIZj2Txu <= len - 1) {
                if (str[yDIZj2Txu] == ')') {
                    count = count + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    a[count] = yDIZj2Txu;
                }
                yDIZj2Txu = yDIZj2Txu + 1;
            };
        }
        for (yDIZj2Txu = 1; yDIZj2Txu <= count; yDIZj2Txu = yDIZj2Txu + 1) {
            for (j = a[yDIZj2Txu] - 1; j >= 0; j = j - 1) {
                if (a[yDIZj2Txu] == 0) {
                    str[a[yDIZj2Txu]] = '?';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                if (str[j] == '(') {
                    str[j] = ' ';
                    str[a[yDIZj2Txu]] = ' ';
                    break;
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
            if (str[a[yDIZj2Txu]] != ' ') {
                str[a[yDIZj2Txu]] = '?';
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            yDIZj2Txu = 0;
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
            while (yDIZj2Txu <= len - 1) {
                if (str[yDIZj2Txu] == '(') {
                    str[yDIZj2Txu] = '$';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
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
                yDIZj2Txu = yDIZj2Txu + 1;
            };
        }
        {
            yDIZj2Txu = 0;
            while (yDIZj2Txu <= len - 1) {
                if ((str[yDIZj2Txu] != ' ') && (str[yDIZj2Txu] != '?') && (str[yDIZj2Txu] != '$')) {
                    str[yDIZj2Txu] = ' ';
                }
                yDIZj2Txu++;
            };
        }
        cout << endl;
        for (yDIZj2Txu = 0; yDIZj2Txu <= len - 1; yDIZj2Txu = yDIZj2Txu + 1) {
            cout << str[yDIZj2Txu];
        }
        cout << endl;
    }
    return 0;
}

