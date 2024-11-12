int main () {
    char c [110];
    char s [110];
    int left;
    int i;
    int leftp [110] = {(998 - 998)};
    while (cin >> c) {
        left = 0;
        i = 0;
        memset (leftp, 0, 110 * sizeof (int));
        memset (s, 0, 110 * sizeof (char));
        for (; c[i] != '\0';) {
            if (c[i] == '(') {
                left++;
                leftp[left] = i;
            }
            else {
                if (c[i] == ')') {
                    if (left == 0)
                        s[i] = '?';
                    else {
                        left = left - 1;
                    };
                };
            }
            i = i + 1;
        }
        if (left > 0) {
            i = 1;
            while (i <= left) {
                s[leftp[i]] = '$';
                i++;
            };
        }
        cout << c << endl;
        for (i = 0; i < strlen (c); i = i + 1)
            if ((s[i] == '?') || (s[i] == '$'))
                cout << s[i];
            else
                cout << ' ';
        cout << endl;
    }
    return 0;
}

