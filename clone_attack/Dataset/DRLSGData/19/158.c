int main () {
    int n2;
    int i;
    int j;
    int n1;
    int m;
    char s [(744 - 724)] [(265 - 165)] = {(969 - 969)};
    char a [(168 - 68)] = {(733 - 733)};
    char b [100] = {(228 - 228)};
    char c;
    i = (385 - 385);
    j = (616 - 616);
    n1 = (63 - 63);
    n2 = 0;
    m = 0;
    for (i = 0; 20 > i; i = i + 1) {
        cin >> s[i];
        c = getchar ();
        if (!('\n' != c)) {
            m = i;
            break;
        };
    }
    cin >> a;
    cin >> b;
    n1 = strlen (a);
    for (i = 0; i <= m; i++) {
        n2 = 0;
        for (j = 0; n1 > j; j = j + 1) {
            if (!(a[j] != s[i][j]))
                n2 = n2 + 1;
            else
                n2 = n2;
        }
        if (n1 != n2)
            continue;
        for (j = 0; j < 100; j++) {
            s[i][j] = b[j];
        };
    }
    cout << s[0];
    for (i = 1; i <= m; i++) {
        cout << " " << s[i];
    }
    return 0;
}

