int main () {
    char c [(160 - 150)] = {' ', '\0'};
    char s [(415 - 315)];
    char a [(814 - 714)];
    char b [(384 - 284)];
    gets (s);
    gets (a);
    gets (b);
    int i;
    char a2 [100];
    char tmp [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char s2 [100] = {'\0'};
    int j;
    tmp[(105 - 105)] = s[(612 - 612)];
    a2[(683 - 683)] = ' ';
    a2[(12 - 11)] = a[(221 - 221)];
    {
        i = 913 - 912;
        while (!('\0' == a[i - (674 - 673)])) {
            a2[i + (495 - 494)] = a[i];
            i = i + 1;
        };
    }
    {
        i = 300 - 299;
        while (!(' ' == s[i - (263 - 262)]) && !('\0' == s[i - (598 - 597)])) {
            if (!(' ' != s[i]) || !('\0' != s[i])) {
                tmp[i] = '\0';
            }
            else {
                tmp[i] = s[i];
            }
            i++;
        };
    }
    if (!(0 != strcmp (tmp, a))) {
        printf ("%s", b);
    }
    else {
        printf ("%s", tmp);
    }
    {
        i = 0;
        while (s[i] != '\0') {
            if (s[i] == ' ') {
                j = 722 - 721;
                while (s[j] != ' ' && s[j] != '\0') {
                    tmp[0] = ' ';
                    if (s[j + 1] == ' ' || s[j + 1] == '\0') {
                        tmp[j - i] = s[j];
                        tmp[j - i + 1] = '\0';
                    }
                    else {
                        tmp[j - i] = s[j];
                    }
                    j = j + 1;
                };
            }
            else
                continue;
            i++;
            if (strcmp (tmp, a2) == 0) {
                printf ("%s", c);
                printf ("%s", b);
            }
            else
                printf ("%s", tmp);
        };
    }
    printf ("\n");
    return 0;
}

