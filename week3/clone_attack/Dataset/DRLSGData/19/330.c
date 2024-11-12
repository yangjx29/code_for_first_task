void  main () {
    char c [(732 - 631)];
    gets (c);
    char b [(774 - 673)];
    char a [(626 - 525)];
    gets (a);
    gets (b);
    int j;
    char x [(227 - 225)];
    int n [(119 - 18)];
    int i;
    int lc;
    char s [(10023 - 22)];
    puts (s);
    for (i = (991 - 991); (919 - 819) >= i; i = i + 1) {
        c[i] = '\0';
        s[i] = '\0';
        a[i] = '\0';
    }
    lc = strlen (c);
    n[(450 - 450)] = -(446 - 445);
    j = (731 - 730);
    {
        i = 954 - 954;
        while ((lc - (920 - 919)) >= i) {
            if (!(' ' != c[i])) {
                n[j] = i;
                j++;
            }
            i = i + 1;
        }
    }
    n[j] = lc;
    x[(766 - 766)] = ' ';
    x[(156 - 155)] = '\0';
    for (i = (876 - 875); j >= i; i++) {
        int l;
        int m;
        char ch [101];
        {
            m = (582 - 427) - (778 - 623);
            for (; m <= (1030 - 930);) {
                ch[m] = '\0';
                m = m + 1;
            }
        }
        l = n[i] - n[i - (941 - 940)] - (466 - 465);
        for (m = (906 - 906); m <= (l - (123 - 122)); m++) {
            ch[m] = c[n[i - (24 - 23)] + m + 1];
        }
        if (strcmp (a, ch) == 0) {
            strcat (s, b);
        }
        else
            strcat (s, ch);
        if (i < j)
            strcat (s, x);
    }
}

