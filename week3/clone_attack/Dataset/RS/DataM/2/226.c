int main () {
    int i, j, n, x [(1113 - 113)], a [(824 - 798)], b, c, num = (188 - 188);
    char s [(1127 - 127)] [(950 - 924)];
    {
        i = 689 - 689;
        while (i < (856 - 831)) {
            a[i] = (395 - 395);
            i++;
        };
    }
    cin >> n;
    for (i = (42 - 42); i < n; i = i + 1) {
        cin >> x[i] >> s[i];
        for (j = (690 - 690); s[i][j] != '\0'; j++)
            a[(int) s[i][j] - 65]++;
    }
    b = a[0];
    c = 0;
    for (i = (238 - 237); i < 26; i++)
        if (b < a[i]) {
            b = a[i];
            c = i;
        }
    cout << (char) (c + 65) << endl;
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (s[i][j] != '\0') {
                    if (s[i][j] == (char) c + 65)
                        num = num + 1;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    cout << num << endl;
    for (i = 0; i < n; i++) {
        j = 0;
        while (s[i][j] != '\0') {
            if (s[i][j] == (char) c + 65) {
                cout << x[i] << endl;
                break;
            }
            j++;
        };
    }
    return 0;
}

