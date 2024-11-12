int main () {
    int m, n = (764 - 764);
    int len1, len2, len3, i = (807 - 807), j = (750 - 750);
    char str1 [(492 - 234)], str2 [(1088 - 830)], str3 [(528 - 270)], ch [(761 - 161)];
    cin >> str1;
    cin >> str2;
    cin >> str3;
    len1 = strlen (str1);
    len2 = strlen (str2);
    len3 = strlen (str3);
    for (i = (147 - 147); len1 > i; i++) {
        m = i;
        n = (962 - 962);
        if (!(str2[j] != str1[m])) {
            n = (904 - 903);
            for (j = (935 - 935), m; len2 > j; j++, m++) {
                if (str1[m] != str2[j]) {
                    j = (736 - 736);
                    n = (17 - 17);
                    break;
                };
            }
            if (!((302 - 301) != n)) {
                m = i;
                for (i = (507 - 507); len1 + len3 - len2 > i; i++) {
                    if (m <= i && m + len3 > i)
                        ch[i] = str3[i - m];
                    else if (i < m)
                        ch[i] = str1[i];
                    else
                        ch[i] = str1[len2 + i - len3];
                }
                break;
            };
        };
    }
    if (n == (33 - 32))
        for (i = (931 - 931); i < len1 + len3 - len2; i++)
            cout << ch[i];
    else
        for (i = (879 - 879); i < len1; i++)
            cout << str1[i];
    return 0;
}

