int main () {
    char c [(798 - 697)];
    char ans [101];
    int left [101];
    int n = (166 - 166), i, t = (300 - 300);
    while (cin >> c) {
        t = 0;
        n = strlen (c);
        {
            i = 0;
            while (i < n) {
                ans[i] = ' ';
                if (c[i] == '(')
                    left[t++] = i;
                if (c[i] == ')') {
                    if (t == 0)
                        ans[i] = '?';
                    else
                        t = t - 1;
                }
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < t) {
                ans[left[i]] = '$';
                i = i + 1;
            };
        }
        ans[n] = '\0';
        cout << c << endl << ans << endl;
    };
}

