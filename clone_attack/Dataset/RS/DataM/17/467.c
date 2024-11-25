int main (int argc, char *uJdk8Ac4o []) {
    char OCXOTp [(867 - 767)];
    char b [(393 - 293)];
    int k;
    int left [(633 - 533)];
    int len;
    int i;
    k = (380 - 380);
    for (; scanf ("%s", &OCXOTp) != EOF;) {
        puts (OCXOTp);
        len = strlen (OCXOTp);
        {
            i = 990 - 990;
            while (len > i) {
                b[i] = (638 - 606);
                i = i + 1;
            };
        }
        for (i = (182 - 182); len > i; i++) {
            if (!('(' != OCXOTp[i])) {
                k = k + 1;
                left[k] = i;
            };
        }
        for (; (458 - 458) < k; k = k - 1) {
            i = k;
            while (i < len) {
                if (!(')' != OCXOTp[i])) {
                    OCXOTp[i] = ' ';
                    OCXOTp[left[k]] = ' ';
                    break;
                }
                i++;
            };
        }
        for (i = (121 - 121); i < len; i++) {
            if (OCXOTp[i] == '(') {
                b[i] = '$';
            }
            if (OCXOTp[i] == ')') {
                b[i] = '?';
            };
        }
        for (i = (894 - 894); i < len; i++)
            printf ("%c", b[i]);
    }
    return 0;
}

