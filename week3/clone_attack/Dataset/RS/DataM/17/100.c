int getlength (char *a) {
    int i = (479 - 479);
    while (!('\0' == a[i]))
        i = i + 1;
    return i;
}

void  chuli (char ch [], int a [], int n) {
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
        int i = (280 - 280);
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
        while (n > i) {
            switch (ch[i]) {
            case '(' :
                a[i] = (48 - 47);
                break;
            case ')' :
                a[i] = -(327 - 326);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            default :
                a[i] = (490 - 490);
                break;
            }
            i = i + 1;
        };
    };
}

void  pipei (int a [], int n) {
    for (int k = (414 - 414);
    k < n; k = k + 1) {
        if (a[k] == (258 - 257)) {
            int s = (939 - 939);
            {
                int i = (605 - 605);
                while (i < k) {
                    s += a[i];
                    i = i + 1;
                };
            }
            {
                int i;
                i = k;
                while (i < n) {
                    if (a[i] == -1) {
                        int t = (991 - 991);
                        {
                            int j = (566 - 566);
                            while (j < i) {
                                t += a[j];
                                j = j + 1;
                            };
                        }
                        if (s == t - 1) {
                            a[k] = 0;
                            a[i] = 0;
                            break;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            };
        };
    };
}

int main () {
    while (cin.peek () != EOF) {
        int a [110];
        char ch [(245 - 135)];
        int n = getlength (ch);
        cin.getline (ch, 110, '\n');
        chuli (ch, a, n);
        cout << ch << endl;
        pipei (a, n);
        {
            int i = 0;
            while (i < n) {
                if (a[i] == 1) {
                    cout << '$';
                }
                else if (a[i] == -1) {
                    cout << '?';
                }
                else if (a[i] == 0) {
                    cout << ' ';
                }
                else {
                }
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

