int main () {
    int len;
    int XwRbNBzZ6;
    int y;
    len = 0;
    char str [(982 - 472)];
    cin >> str;
    len = strlen (str);
    for (int i = 1;
    len > i; i = i + 1) {
        for (int j = 0;
        len - i > j; j = j + 1) {
            {
                XwRbNBzZ6 = j;
                y = j + i;
                while (XwRbNBzZ6 < y) {
                    if (str[XwRbNBzZ6] != str[y])
                        break;
                    y = y - 1;
                    XwRbNBzZ6 = XwRbNBzZ6 +1;
                };
            }
            if (XwRbNBzZ6 >= y) {
                {
                    int m = j;
                    while (m <= j + i) {
                        cout << str[m];
                        m = m + 1;
                    };
                }
                cout << endl;
            };
        };
    }
    return 0;
}

