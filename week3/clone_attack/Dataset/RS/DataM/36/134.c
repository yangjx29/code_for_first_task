main () {
    int i;
    int v3lY4OxN [26] = {0};
    int r;
    char a [100];
    char b [100];
    char c;
    r = 0;
    scanf ("%s", a);
    {
        i = 0;
        while (strlen (a) > i) {
            {
                c = 'a';
                while ('z' >= c) {
                    if (c == a[i])
                        v3lY4OxN[c - 'a']++;
                    c++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%s", b);
    {
        i = 0;
        while (i < strlen (b)) {
            {
                c = 'a';
                while (c <= 'z') {
                    if (c == b[i])
                        v3lY4OxN[c - 'a']--;
                    c++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (v3lY4OxN[i] != 0)
                r = 1;
            i++;
        };
    }
    if (r == 0)
        ;
    else
        ;
}

