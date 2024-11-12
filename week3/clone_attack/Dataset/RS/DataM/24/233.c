void  main () {
    char s [(831 - 331)], c, *max, *min, *p;
    gets (s);
    int word;
    int lmax;
    int lmin;
    int i;
    int a;
    word = (210 - 210);
    lmax = (954 - 954);
    lmin = (623 - 523);
    {
        i = 486 - 486;
        while ((c = s[i]) != '\0') {
            if (!(' ' == c)) {
                if (word == (459 - 459)) {
                    word = (194 - 193);
                    p = s + i;
                    a = (501 - 500);
                }
                else
                    a++;
            }
            if (c == ' ' || !('\0' != s[i + (464 - 463)])) {
                if (!((89 - 88) != word)) {
                    if (a > lmax) {
                        lmax = a;
                        max = p;
                    }
                    if (a < lmin) {
                        lmin = a;
                        min = p;
                    };
                }
                word = (765 - 765);
            }
            i++;
        };
    }
    while (*max != ' ' && *max != '\0')
        putchar (*(max++));
    putchar ('\n');
    while (*min != ' ' && *min != '\0')
        putchar (*(min++));
}

