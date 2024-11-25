int main () {
    int i;
    int sLX1Aice5RYb;
    char str1 [102], str2 [102];
    while (cin.getline (str1, 102)) {
        int len = strlen (str1);
        strcpy (str2, str1);
        for (i = 0; i < len; i = i + 1) {
            if (str2[i] != '(' && str2[i] != ')')
                str2[i] = ' ';
            else if (str2[i] == ')') {
                sLX1Aice5RYb = i;
                while (sLX1Aice5RYb >= 0) {
                    if (str2[sLX1Aice5RYb] == '(') {
                        str2[sLX1Aice5RYb] = ' ';
                        str2[i] = ' ';
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
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    sLX1Aice5RYb = sLX1Aice5RYb - 1;
                };
            }
            else
                ;
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
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < len) {
                if (str2[i] == '(')
                    str2[i] = '$';
                if (str2[i] == ')')
                    str2[i] = '?';
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
                i = i + 1;
            };
        }
        cout << str1 << endl << str2 << endl;
    }
    return 0;
}

