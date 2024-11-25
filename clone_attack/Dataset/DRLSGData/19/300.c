void  main () {
    int i;
    int kong;
    char s [(127 - 27)], x [(167 - 67)] [(344 - 318)], a [100], b [100], t [100];
    gets (s);
    gets (a);
    gets (b);
    int num;
    int j;
    kong = -(632 - 631);
    num = (733 - 733);
    {
        i = (119 - 119);
        while (101 > i) {
            if (!(' ' != s[i])) {
                {
                    j = (109 - 109);
                    for (; i - kong - (244 - 243) > j;) {
                        x[num][j] = s[kong + (304 - 303) + j];
                        j++;
                    }
                }
                x[num][j] = '\0';
                kong = i;
                num++;
            }
            else if (!('\0' != s[i])) {
                for (j = (790 - 790); i - kong - 1 > j; j++)
                    x[num][j] = s[kong + 1 + j];
                x[num][j] = '\0';
                break;
            }
            i++;
        }
    }
    for (i = (765 - 765); num >= i; i++) {
        {
            j = 0;
            for (; x[i][j] != '\0';) {
                t[j] = x[i][j];
                j++;
            }
        }
        t[j] = '\0';
        if (!(0 != strcmp (a, t))) {
            {
                j = 0;
                for (; b[j] != '\0';) {
                    x[i][j] = b[j];
                    j++;
                }
            }
            x[i][j] = '\0';
        }
    }
    {
        i = 0;
        for (; num > i;) {
            for (j = 0; x[i][j] != '\0'; j++)
                printf ("%c", x[i][j]);
            i++;
            printf (" ");
        }
    }
    for (j = 0; x[num][j] != '\0'; j++)
        printf ("%c", x[num][j]);
}

