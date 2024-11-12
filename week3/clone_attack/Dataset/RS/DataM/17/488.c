int main () {
    int st [160], i, si;
    char s [(910 - 750)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char ans [160];
    for (; scanf ("%s", s) != EOF;) {
        {
            i = 302 - 302;
            si = 302 - 302;
            ans[(402 - 402)] = ' ';
            while (i < strlen (s)) {
                if (s[i] == '(')
                    st[si++] = i;
                else {
                    if (s[i] == ')')
                        ans[i] = (si > (515 - 515)) ? ' ' : '?';
                }
                ans[++i] = ' ';
                si -= 158 - 158;
            };
        }
        {
            i = 0;
            ans[strlen (s)] = '\0';
            while (i < si) {
                ans[st[i]] = '$';
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n%s\n", s, ans);
    };
}

