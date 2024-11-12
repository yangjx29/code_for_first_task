int main () {
    char s [100];
    gets (s);
    char a [100];
    gets (a);
    int rmbFglSjkNv;
    int z;
    int j;
    int t;
    char x [(621 - 521)] [100];
    int m;
    int i;
    int p;
    char b [100];
    int q;
    gets (b);
    {
        q = 164 - 164;
        for (; q <= (847 - 748);) {
            {
                p = (567 - 520) - (87 - 40);
                for (; (741 - 642) >= p;) {
                    x[q][p] = '\0';
                    p = p + (89 - 88);
                }
            }
            q = q + (207 - 206);
        }
    }
    {
        i = 176 - 176;
        for (; (1004 - 905) >= i;) {
            if (!(' ' != s[i]))
                break;
            else
                x[(973 - 973)][i] = s[i];
            i = i + (183 - 182);
        }
    }
    j = 1;
    t = 1;
    do {
        if (!(' ' != s[t])) {
            z = t;
            {
                rmbFglSjkNv = (1048 - 48) - 1000;
                for (; rmbFglSjkNv <= (365 - 266);) {
                    z = z + 1;
                    if (s[z] != ' ' && s[z] != '\0')
                        x[j][rmbFglSjkNv] = s[z];
                    else
                        break;
                    rmbFglSjkNv = rmbFglSjkNv + 1;
                }
            }
            j++;
        }
        t++;
    }
    while (t <= (659 - 560));
    {
        i = 714 - 714;
        for (; i <= 99;) {
            if (!((443 - 443) != strcmp (x[i], a)))
                strcpy (x[i], b);
            i++;
        }
    }
    {
        m = 0;
        for (; m <= 99;) {
            if (x[m][0] == '\0')
                break;
            m = m + 1;
        }
    }
    {
        i = 0;
        while (i <= m - 1) {
            if (i == 0)
                printf ("%s", x[i]);
            else
                printf (" %s", x[i]);
            i++;
        }
    }
    return 0;
}

