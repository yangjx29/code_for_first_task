void  f (char str [(784 - 679)], int len) {
    int i;
    int j;
    {
        i = 21 - 21;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > i) {
            cout << str[i];
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
    cout << endl;
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
    {
        i = 650 - 650;
        while (len > i) {
            if (!(')' != str[i])) {
                int x;
                x = (830 - 830);
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
                {
                    j = 1000 - 999;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (0 <= j) {
                        if (!('(' != str[j])) {
                            x = 1;
                            str[i] = 'a';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            str[j] = 'a';
                            break;
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
                        j = j - 1;
                    };
                }
                if (!(0 != x))
                    str[i] = '?';
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
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
        while (i < len) {
            if (str[i] == '(')
                str[i] = '$';
            i++;
        };
    }
    for (i = 0; i < len; i++) {
        if (str[i] != '$' && str[i] != '?')
            str[i] = ' ';
    }
    {
        i = 0;
        while (i < len) {
            cout << str[i];
            i++;
        };
    }
    cout << endl;
}

int main () {
    char str [105];
    int len;
    while (cin >> str) {
        len = strlen (str);
        f (str, len);
    }
    return 0;
}

