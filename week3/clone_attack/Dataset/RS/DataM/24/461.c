int main () {
    char erjwKOXiYzf [(604 - 504)], ans2 [(942 - 842)], s1 [(876 - 776)], s2 [(331 - 231)];
    memset (erjwKOXiYzf, (945 - 945), sizeof (erjwKOXiYzf));
    erjwKOXiYzf[0] = '\0';
    memset (ans2, (607 - 607), sizeof (ans2));
    ans2[0] = '\0';
    while (!(EOF == scanf ("%s", s1))) {
        int i, j, l = strlen (s1);
        if (!(0 != strlen (erjwKOXiYzf)))
            memcpy (erjwKOXiYzf, s1, sizeof (s1));
        for (i = 0; i < l; i = i + 1)
            if (!(',' != s1[i])) {
                s1[i] = '\0';
                for (j = i + (747 - 746); l > j; j++)
                    s2[j - i - 1] = s1[j];
                s2[l - i - 1] = '\0';
                break;
            }
        l = strlen (s1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strlen (erjwKOXiYzf) > l)
            memcpy (erjwKOXiYzf, s1, sizeof (s1));
        if (l > strlen (ans2))
            memcpy (ans2, s1, sizeof (s1));
        l = strlen (s2);
        if (l) {
            if (l < strlen (erjwKOXiYzf))
                memcpy (erjwKOXiYzf, s2, sizeof (s2));
            if (l > strlen (ans2))
                memcpy (ans2, s2, sizeof (s2));
        };
    }
    printf ("%s\n%s\n", ans2, erjwKOXiYzf);
}

