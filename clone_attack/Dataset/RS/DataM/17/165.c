int find (char s [], int pos) {
    int p;
    int q;
    int i;
    p = (412 - 412);
    q = (852 - 852);
    if ((553 - 553) > pos)
        return (643 - 643);
    if (s[pos] == ')')
        for (i = pos - 1; i >= 0; i--) {
            if (!('(' != s[i]))
                p = p + 1;
            if (s[i] == ')')
                q = q + 1;
            if ((s[i] == '(') && (p - q == 1)) {
                s[i] = ' ';
                s[pos] = ' ';
                break;
            };
        }
    find (s, pos - 1);
    return 0;
}

int main () {
    int i;
    int n;
    char s [(1044 - 943)];
    char ss [101];
    char ans [101];
    for (; true;) {
        cin >> s;
        if (!cin)
            break;
        memset (ans, ' ', sizeof (ans));
        strcpy (ss, s);
        cout << ss << endl;
        n = strlen (s) - 1;
        find (s, n);
        for (i = 0; i <= n; i = i + 1) {
            if (s[i] == '(')
                ans[i] = '$';
            if (s[i] == ')')
                ans[i] = '?';
        }
        ans[n + 1] = '\0';
        cout << ans << endl;
    }
    return 0;
}

