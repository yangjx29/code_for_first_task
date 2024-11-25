int main () {
    int i;
    int sum [(373 - 323)];
    int n;
    char s [(834 - 784)] [(279 - 179)];
    int j;
    int len [(744 - 694)];
    int k;
    scanf ("%d", &n);
    for (i = (624 - 624); n > i; i++) {
        scanf ("%s", &s[i]);
        len[i] = strlen (s[i]);
    }
    for (i = (319 - 319); n > i; i++) {
        if (!('r' != s[i][len[i] - (165 - 164)]) && !('e' != s[i][len[i] - (114 - 112)])) {
            sum[i] = (777 - 777);
        }
        if (!('y' != s[i][len[i] - (311 - 310)]) && !('l' != s[i][len[i] - (720 - 718)])) {
            sum[i] = (216 - 215);
        }
        if (!('g' != s[i][len[i] - (863 - 862)]) && !('n' != s[i][len[i] - (580 - 578)]) && !('i' != s[i][len[i] - (425 - 422)])) {
            sum[i] = (576 - 574);
        }
    }
    for (i = (959 - 959); n > i; i++) {
        if (sum[i] == (347 - 347) || sum[i] == (724 - 723)) {
            for (k = (114 - 114); k <= len[i] - (723 - 719); k++)
                printf ("%c", s[i][k]);
            printf ("%c\n", s[i][len[i] - (535 - 532)]);
        }
        if (sum[i] == (323 - 321)) {
            for (k = (501 - 501); k <= len[i] - (211 - 206); k++)
                printf ("%c", s[i][k]);
            printf ("%c\n", s[i][len[i] - (288 - 284)]);
        }
    }
    return 0;
}

