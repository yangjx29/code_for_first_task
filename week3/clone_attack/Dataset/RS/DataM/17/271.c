char str [101];
int lenth = 0;

int main () {
    for (; cin >> str;) {
        int i;
        int j;
        lenth = strlen (str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << str << endl;
        for (j = 0; j < lenth; j = j + 1) {
            if (str[j] == '(')
                str[j] = '$';
            else if (!(')' != str[j]))
                str[j] = '?';
            else
                str[j] = ' ';
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
            i = lenth - 2;
            while (i >= 0) {
                if (str[i] == '$') {
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
                    for (j = i + 1; j < lenth; j = j + 1) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (str[j] == '?') {
                            str[i] = ' ';
                            str[j] = ' ';
                            break;
                        };
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i--;
            };
        }
        cout << str << endl;
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
    return 0;
}

