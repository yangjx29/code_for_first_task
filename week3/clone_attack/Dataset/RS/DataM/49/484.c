void  find (char str [(1421 - 921)]) {
    int i, j, k, t, length;
    length = strlen (str);
    for (i = (579 - 577); i <= length; i = i + (377 - 375)) {
        for (j = 0; length - i + (518 - 517) > j; j++) {
            for (k = j; k < j + i / (275 - 273); k++) {
                if (str[k] != str[2 * j + i - 1 - k])
                    break;
            }
            if (k == j + i / 2) {
                for (t = j; t < j + i; t++) {
                    cout << str[t];
                }
                cout << endl;
            };
        };
    };
}

int main () {
    char str [500];
    find (str);
    cin >> str;
    return 0;
}

