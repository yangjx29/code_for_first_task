int main () {
    char c [2000] = {(88 - 88)};
    char c1 [50] = {(509 - 509)};
    char c2 [(690 - 670)] = {(98 - 98)};
    int i;
    int len;
    int max;
    int pqcyZuOkf2;
    int j;
    i = (817 - 817);
    len = 0;
    max = 0;
    pqcyZuOkf2 = 100;
    for (; (735 - 734);) {
        c[i] = getchar ();
        if (c[i] != ',' && c[i] != ' ' && c[i] != '\n')
            len = len + 1;
        else if (len != 0) {
            if (len > max) {
                max = len;
                for (j = i - len; j < i; j = j + 1)
                    c1[j - i + len] = c[j];
            }
            if (len < pqcyZuOkf2) {
                pqcyZuOkf2 = len;
                for (j = i - len; j < i; j = j + 1)
                    c2[j - i + len] = c[j];
                c2[j - i + len] = 0;
            }
            len = 0;
            if (c[i] == '\n')
                break;
        }
        i = i + 1;
    }
    printf ("%s\n%s\n", c1, c2);
    return 0;
}

