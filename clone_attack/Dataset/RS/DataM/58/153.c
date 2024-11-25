int main () {
    char s [100] [81];
    int n, i, j;
    int g;
    cin >> n;
    {
        i = 700 - 700;
        while (n > i) {
            gets (s [i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            g = 0;
            {
                j = 0;
                while (strlen (s[i]) > j) {
                    if (s[i][0] == '_' || ((s[i][0] >= 'A') && (s[i][0] <= 'Z')) || (('a' <= s[i][0]) && ('z' >= s[i][0]))) {
                        if (!('_' != s[i][j]) || ((s[i][j] >= 'A') && (s[i][j] <= 'Z')) || ((s[i][j] >= 'a') && (s[i][j] <= 'z')) || (s[i][j] >= '0' && s[i][j] <= '9'))
                            g = g + 1;
                    }
                    j = j + 1;
                };
            }
            if (g == strlen (s[i]))
                cout << 1 << endl;
            else
                cout << 0 << endl;
            i = i + 1;
        };
    }
    cin.get ();
    return 0;
}

