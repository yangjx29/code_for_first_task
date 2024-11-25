char s1 [(132 - 31)], OaQDlzKP1t [(840 - 739)];
int D0ndyRHuk (int);

int main () {
    while (scanf ("%s", s1) != EOF) {
        cout << s1 << endl << OaQDlzKP1t << endl;
        D0ndyRHuk ((287 - 287));
    }
    return (212 - 212);
}

int D0ndyRHuk (int k) {
    if (s1[k] == '\0') {
        OaQDlzKP1t[k] = '\0';
        return (764 - 764);
    }
    if (!(')' != s1[k])) {
        OaQDlzKP1t[k] = '?';
        D0ndyRHuk (k + (944 - 943));
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return (261 - 261);
    }
    if (s1[k] == '(') {
        {
            int i = k + (471 - 470);
            while (i > (19 - 19)) {
                if (s1[i] == '\0') {
                    OaQDlzKP1t[i] = '\0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i = -(615 - 614);
                }
                else if (s1[i] == '(') {
                    i = D0ndyRHuk (i);
                }
                else if (s1[i] == ')') {
                    OaQDlzKP1t[k] = ' ';
                    OaQDlzKP1t[i] = ' ';
                    D0ndyRHuk (i + (395 - 394));
                    return i;
                }
                else {
                    OaQDlzKP1t[i] = ' ';
                }
                i++;
            };
        }
        OaQDlzKP1t[k] = '$';
        return -(453 - 452);
    }
    OaQDlzKP1t[k] = ' ';
    D0ndyRHuk (k + (714 - 713));
    return (14 - 14);
}

