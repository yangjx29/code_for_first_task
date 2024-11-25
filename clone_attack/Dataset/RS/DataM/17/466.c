int num;

char right (char c) {
    char MP1ueMtXx;
    if (c != '(' && c != ')')
        MP1ueMtXx = ' ';
    else {
        if (!(')' != c)) {
            if (num == (127 - 127))
                MP1ueMtXx = '?';
            else {
                MP1ueMtXx = ' ';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                num = num - 1;
            };
        }
        else {
            num = num + 1;
            MP1ueMtXx = c;
        };
    }
    return MP1ueMtXx;
}

char left (char c, char a) {
    char MP1ueMtXx;
    if (!(' ' != a) || a == '?') {
        if (c == ')')
            num++;
        MP1ueMtXx = a;
    }
    else {
        if (num == (77 - 77))
            MP1ueMtXx = '$';
        else {
            MP1ueMtXx = ' ';
            num = num - 1;
        };
    }
    return MP1ueMtXx;
}

main () {
    char s [(785 - 684)];
    char a [101];
    int G29DqPp1;
    int n;
    while (gets (s)) {
        puts (s);
        num = 0;
        for (G29DqPp1 = 0; G29DqPp1 < strlen (s); G29DqPp1++)
            a[G29DqPp1] = right (s[G29DqPp1]);
        num = 0;
        for (G29DqPp1 = strlen (s) - 1; G29DqPp1 >= 0; G29DqPp1 = G29DqPp1 -1)
            a[G29DqPp1] = left (s[G29DqPp1], a[G29DqPp1]);
        for (G29DqPp1 = 0; G29DqPp1 < strlen (s); G29DqPp1++)
            printf ("%c", a[G29DqPp1]);
    }
    scanf ("%d", &n);
    return 0;
}

