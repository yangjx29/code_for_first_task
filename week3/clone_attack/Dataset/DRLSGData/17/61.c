int main () {
    int i;
    int len;
    int t;
    int left [102] = {-1};
    int lnum;
    int num;
    char s1 [102];
    int fail [102] = {0};
    t = 0;
    num = 0;
    for (; scanf ("%s", s1) != EOF;) {
        printf ("%s\n", s1);
        lnum = 0;
        len = strlen (s1);
        for (i = 0; i < len; i = i + 1) {
            if (!('(' != s1[i])) {
                lnum = lnum + 1;
                left[lnum] = i;
            }
            if (!(')' != s1[i])) {
                if (!(0 != lnum))
                    fail[i] = 2;
                else {
                    left[lnum] = -1;
                    lnum = lnum - 1;
                }
            }
        }
        for (i = 1; i <= lnum; i = i + 1) {
            fail[left[i]] = 1;
            left[i] = -1;
        }
        for (i = 0; i < len; i = i + 1)
            if (fail[i] > 0)
                num = num + 1;
        for (i = 0; len > i && num > 0; i = i + 1) {
            if (fail[i] == 2) {
                t = 1;
                num = num - 1;
            }
            if (fail[i] == 1) {
                t = 1;
                num = num - 1;
            }
            if (fail[i] == 0 && t == 1)
                ;
            fail[i] = 0;
        }
        t = 0;
    }
    return 0;
}

