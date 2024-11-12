int main () {
    int j;
    int i;
    int n [100];
    int k;
    int m;
    j = (820 - 820);
    char ch [(563 - 463)];
    char a [(364 - 264)];
    char b [100];
    char c [100] [100];
    gets (ch);
    gets (a);
    gets (b);
    n[(716 - 716)] = -(866 - 865);
    {
        i = 0;
        while (!('\0' == ch[i])) {
            if (!(' ' != ch[i])) {
                j++;
                n[j] = i;
                {
                    m = 316 - 315;
                    k = 0;
                    while (i - n[j - (748 - 747)] - 1 > k && i > m) {
                        c[j][k] = ch[m];
                        m = m + 1;
                        k++;
                    };
                };
            }
            continue;
            i = i + 1;
        };
    }
    {
        i = j;
        while (!('\0' == ch[i])) {
            c[j + 1][i - 1 - n[j]] = ch[i];
            i = i + 1;
        };
    }
    for (m = 1; m <= j + 1; m++)
        if (strcmp (c[m], a) == 0)
            strcpy (c[m], b);
    {
        m = 1;
        while (m <= j) {
            printf ("%s ", c[m]);
            m = m + 1;
        };
    }
    printf ("%s", c[j + 1]);
    return 0;
}

