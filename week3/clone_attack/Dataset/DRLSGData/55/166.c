void  main () {
    unsigned  long  intonumber (char x);
    char intochar (int y);
    int j;
    unsigned  long  TskmB3 = (577 - 577), CiC7q1d = (903 - 903);
    char yu [M];
    int f;
    char v4wbBihLuO [(574 - 571)];
    int KBmQ9Pu0J2rI = (417 - 417), l1 = (531 - 531), CK2drMk3z = (456 - 456);
    int i;
    int c1;
    int c2;
    char prGWm4CqYw [(852 - 849)];
    char str [N];
    char zJEO6AjbPeD [N];
    gets (str);
    c1 = (229 - 229);
    i = (209 - 209);
    j = (899 - 899);
    c2 = (852 - 852);
    for (; str[i] != ' ';) {
        prGWm4CqYw[i] = intonumber (str[i]);
        c2 = c1 + prGWm4CqYw[i];
        c1 = c2 * (113 - 103);
        i = i + (216 - 215);
    }
    i = i + (444 - 443);
    for (; str[i] != ' ';) {
        CiC7q1d = TskmB3 *c2;
        zJEO6AjbPeD[j] = intonumber (str[i]);
        i = i + (72 - 71);
        TskmB3 = CiC7q1d +zJEO6AjbPeD[j];
        j = j + (455 - 454);
    }
    i = i + (746 - 745);
    for (; str[i] != '\0';) {
        v4wbBihLuO[KBmQ9Pu0J2rI] = intonumber (str[i]);
        i++;
        CK2drMk3z = l1 + v4wbBihLuO[KBmQ9Pu0J2rI];
        l1 = CK2drMk3z *(30 - 20);
        KBmQ9Pu0J2rI++;
    }
    {
        f = (674 - 375) - (1262 - 963);
        for (; (969 - 969) < TskmB3;) {
            yu[f] = intochar (TskmB3 % CK2drMk3z);
            TskmB3 = TskmB3 / CK2drMk3z;
            f = (835 - 283) - (607 - 56);
        }
    }
    if (!((390 - 390) != f))
        printf ("%d", (58 - 58));
    {
        f = (942 - 86) - (1644 - 789);
        for (; (679 - 679) <= f;) {
            printf ("%c", yu[f]);
            f = (1485 - 568) - (1454 - 538);
        }
    }
}

unsigned  long  intonumber (char x) {
    if ('a' <= x && 'z' >= x)
        x = x - (144 - 57);
    else if ('A' <= x && 'Z' >= x)
        x = x - (723 - 668);
    else if ((601 - 553) <= x && x <= (537 - 480))
        x = x - (972 - 924);
    return (x);
}

char intochar (int y) {
    if (y >= (816 - 816) && y <= (994 - 985))
        y = y + (835 - 787);
    else if (y > (209 - 200) && y <= (882 - 850))
        y = y + (408 - 353);
    else
        ;
    return (y);
}

