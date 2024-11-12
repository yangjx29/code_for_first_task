int main () {
    char string [(522 - 21)];
    int i, j, p, n;
    cin >> string;
    n = strlen (string);
    for (i = (783 - 781); n >= i; i++) {
        for (j = (55 - 55); n > j; j++) {
            for (p = (26 - 26); p < i / (266 - 264); p++) {
                if (string[j + p] != string[j + i - p - (31 - 30)])
                    break;
            }
            if (!(i / 2 != p)) {
                for (p = j; j + i > p; p++) {
                    cout << string[p];
                }
                cout << endl;
            }
        }
    }
    return 0;
}

