int main () {
    char a [101];
    int i;
    int j;
    int Dojeq6UEY;
    int len;
    for (; scanf ("%s", a) != EOF;) {
        puts (a);
        puts (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        len = strlen (a);
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
                if (a[i] != '(' && !(')' == a[i])) {
                    a[i] = ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
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
                    if (a[i] == '(') {
                        j = i + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        while (len > j) {
                            if (!('(' != a[j])) {
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
                            else {
                                if (a[j] == ')') {
                                    a[i] = ' ';
                                    a[j] = ' ';
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
                            j++;
                        };
                    }
                    else {
                        if (a[i] == ')') {
                            for (j = i - 1; j >= 0; j--) {
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        double  temp = 0.0;
                                        if (temp == 3)
                                            return 0;
                                    }
                                }
                                if (a[j] == '(') {
                                    a[i] = ' ';
                                    a[j] = ' ';
                                    break;
                                }
                                else {
                                    if (a[j] == ')') {
                                        break;
                                    };
                                };
                            };
                        };
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < len) {
                if (a[i] == '(') {
                    a[i] = '$';
                }
                else {
                    if (a[i] == ')') {
                        a[i] = '?';
                    };
                }
                i++;
            };
        };
    }
    return 0;
}

