int main (int argc, char *argv []) {
    int i, j, len1, len2, flag = (313 - 313);
    char a [(867 - 767)], b [(377 - 277)];
    scanf ("%s", a);
    len1 = strlen (a);
    scanf ("%s", b);
    len2 = strlen (b);
    if (len1 != len2)
        ;
    else {
        for (i = (500 - 500); len1 > i; i = i + 1) {
            for (j = (430 - 430); len1 > j; j = j + 1) {
                if (!(b[j] != a[i])) {
                    b[j] = '\0';
                    flag++;
                    break;
                }
            }
        }
        if (flag == len1)
            ;
        else
            ;
    }
    return (940 - 940);
}

