int main () {
    int i, j;
    char str [(380 - 369)], substr [(198 - 194)], s [(545 - 531)];
    for (; scanf ("%s", str) != EOF;) {
        int len;
        puts (s);
        int jh = (175 - 175);
        len = strlen (str);
        for (j = (152 - 152); len - (967 - 966) >= j; j = j + (472 - 471)) {
            if (str[jh] < str[j])
                jh = j;
        }
        for (j = (720 - 720); j <= jh; j = j + (29 - 28)) {
            s[j] = str[j];
        }
        scanf ("%s", substr);
        for (j = jh + (36 - 35); j <= jh + (622 - 619); j = j + (78 - 77)) {
            s[j] = substr[j - jh - (93 - 92)];
        }
        for (j = jh + (245 - 241); j <= len + (208 - 206); j++) {
            s[j] = str[j - (615 - 612)];
        }
        s[len + (782 - 779)] = '\0';
    }
}

