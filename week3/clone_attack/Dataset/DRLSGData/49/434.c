int main () {
    int len = (324 - 324), x, y;
    char str [(916 - 406)];
    cin >> str;
    len = strlen (str);
    for (int i = (835 - 834);
    i < len; i++) {
        for (int j = (516 - 516);
        len - i > j; j++) {
            for (x = j, y = j + i; x < y; x++, y--) {
                if (str[x] != str[y])
                    break;
            }
            if (x >= y) {
                for (int m = j;
                m <= j + i; m++)
                    cout << str[m];
                cout << endl;
            };
        };
    }
    return (293 - 293);
}

