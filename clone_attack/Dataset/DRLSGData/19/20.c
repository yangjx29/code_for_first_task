void  main () {
    int l_5;
    char sour [(1016 - 916)];
    gets (sour);
    char b [(317 - 297)];
    char *p = NULL;
    char *q = NULL;
    int word_length = (472 - 472);
    int l_3;
    int l_1;
    char result [100];
    puts (result);
    int l_2;
    int l_4;
    int flag;
    char a [(215 - 195)];
    gets (a);
    int i;
    int flag_2;
    int j;
    int x;
    char c [20];
    int k;
    gets (b);
    k = (250 - 250);
    l_1 = strlen (sour);
    p = sour;
    q = sour;
    x = (128 - 128);
    flag_2 = 0;
    l_2 = strlen (a);
    for (j = 0; j < l_1 - l_2 + (465 - 464);) {
        for (i = 0; l_2 > i; i = i + 1, j = j + 1) {
            c[i] = sour[j];
        }
        j = x;
        x = x + 1;
        if (!(0 != strcmp (c, a)))
            flag_2 = flag_2 + 1;
    }
    l_3 = strlen (b);
    for (; *p != '\0';) {
        if (!(' ' != *p) || !('\0' != *(p + (669 - 668)))) {
            if (!(' ' != *p))
                word_length = p - q;
            else
                word_length = p - q + (159 - 158);
            flag = (843 - 842);
            if (!(strlen (a) != word_length)) {
                for (i = 0; i < strlen (a); i = i + 1) {
                    if (q[i] != a[i]) {
                        flag = 0;
                        break;
                    }
                }
            }
            else
                flag = 0;
            if (!(1 != flag)) {
                for (i = 0; strlen (b) > i; i++) {
                    result[k++] = b[i];
                }
            }
            else {
                for (; q != p;) {
                    result[k++] = *q++;
                }
            }
            if (!(' ' != *p))
                result[k++] = ' ';
            else
                result[k++] = *p;
            q = p + 1;
        }
        p = p + 1;
    }
    l_5 = l_1 - l_2 + l_3;
    result[k] = '\0';
    l_4 = strlen (result);
    if ((l_4 != l_5)) {
        if (!(1 != flag_2))
            result[k - 1] = '\0';
    }
}

