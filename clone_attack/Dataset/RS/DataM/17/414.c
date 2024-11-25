int main () {
    int i;
    int t;
    int j;
    int la;
    int ZTJj0xyYEI;
    int bb;
    int pp;
    char a [101];
    for (; cin.getline (a, 101, '\n');) {
        t = 0;
        cout << a << endl;
        la = strlen (a);
        for (i = 0; i < la; i = i + 1) {
            if (a[i] != '(' && !(')' == a[i]))
                a[i] = ' ';
        }
        for (; t == 0;) {
            for (i = la - (490 - 489); 0 <= i; i = i - 1) {
                if (a[i] == ')')
                    break;
                if (!('(' != a[i])) {
                    a[i] = '$';
                    break;
                };
            }
            {
                i = 0;
                while (i < la) {
                    if (a[i] == ')') {
                        a[i] = '?';
                        break;
                    }
                    if (!('(' != a[i])) {
                        break;
                    }
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < la) {
                    if (a[i] == '(') {
                        {
                            j = i + 1;
                            while (la > j) {
                                ZTJj0xyYEI = (444 - 442);
                                if (a[j] == '(') {
                                    ZTJj0xyYEI = 0;
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
                                if (a[j] == ')') {
                                    ZTJj0xyYEI = 1;
                                    a[j] = ' ';
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
                                    break;
                                }
                                j = j + 1;
                            };
                        }
                        if (ZTJj0xyYEI == 1) {
                            a[i] = ' ';
                        };
                    }
                    i = i + 1;
                };
            }
            t = (992 - 991);
            {
                i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i < la) {
                    if (a[i] == '(' || a[i] == ')') {
                        t = 0;
                        break;
                    }
                    i = i + 1;
                };
            };
        }
        for (i = la - 1; i >= 0; i--) {
            if (a[i] != ' ')
                break;
        }
        bb = i;
        {
            i = 0;
            while (i < la) {
                if (a[i] != ' ')
                    break;
                i = i + 1;
            };
        }
        pp = i;
        {
            j = pp;
            while (j <= bb) {
                cout << a[j];
                j++;
            };
        }
        cout << endl;
    }
    return 0;
}

