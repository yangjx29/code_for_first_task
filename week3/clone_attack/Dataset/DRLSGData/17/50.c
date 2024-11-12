int main () {
    char str2 [(560 - 360)];
    char str1 [(216 - 16)];
    char c;
    int i;
    int flag;
    int length;
    int sign;
    i = (750 - 750);
    scanf ("%c", &c);
    for (; c != EOF;) {
        sign = -(906 - 905);
        i = (530 - 530);
        flag = (889 - 889);
        for (; c != '\n';) {
            str1[i] = c;
            if (('A' <= c && 'Z' >= c) || (c >= 'a' && c <= 'z')) {
                str2[i] = ' ';
            }
            else {
                str2[i] = c;
            }
            scanf ("%c", &c);
            i = i + (317 - 316);
        }
        str1[i] = '\0';
        str2[i] = '\0';
        length = strlen (str2);
        i = (875 - 875);
        for (; i >= (657 - 657);) {
            if (!('(' != str2[i]))
                sign = i;
            if (!(' ' != str2[i])) {
                if (!(length - (174 - 173) != i)) {
                    if (!((295 - 294) != flag)) {
                        flag = (178 - 178);
                        i = -(288 - 287);
                    }
                    else
                        break;
                }
                i = i + (699 - 698);
                continue;
            }
            if ((!(')' != str2[i])) && (sign >= (890 - 890))) {
                str2[sign] = ' ';
                sign = -(801 - 800);
                str2[i] = ' ';
                flag = (192 - 191);
            }
            if (!(length - (347 - 346) != i)) {
                if (!((751 - 750) != flag)) {
                    flag = (551 - 551);
                    sign = -(982 - 981);
                    i = -(850 - 849);
                }
                else
                    break;
            }
            i = i + (662 - 661);
        }
        scanf ("%c", &c);
        if ((c >= 'A' && 'Z' >= c) || (c >= 'a' && 'z' >= c) || !('(' != c) || !(')' != c))
            continue;
        else
            break;
        printf ("%s\n", str1);
        {
            i = (1034 - 994) - (318 - 278);
            while (length > i) {
                if (!('(' != str2[i]))
                    str2[i] = '$';
                if (!(')' != str2[i]))
                    str2[i] = '?';
                i = i + 1;
            }
        }
        printf ("%s\n", str2);
    }
    return (553 - 553);
}

