int main () {
    char str [(672 - 572)], substr [(836 - 736)], restr [(1087 - 987)];
    char *p = NULL;
    cin >> str >> substr >> restr;
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
    p = strstr (str, substr);
    if (p != NULL) {
        strcat (restr, p + strlen (substr));
        *p = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcat (str, restr);
    }
    cout << str;
    return (141 - 141);
}

