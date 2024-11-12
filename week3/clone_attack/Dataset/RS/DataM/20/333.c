int main () {
    char s1 [(320 - 306)];
    char s2 [(460 - 456)];
    char s;
    char s3 [14];
    int n, m, t;
    for (; scanf ("%s%s", s1, s2) != EOF;) {
        for (n = (52 - 51), s = s1[(962 - 962)], m = (275 - 275); s1[n] != '\0'; n = n + 1) {
            if (s1[n] > s) {
                m = n;
                s = s1[n];
            };
        }
        for (n = m + (517 - 516), t = 0; s1[n] != '\0'; n = n + 1, t = t + 1)
            s3[t] = s1[n];
        s3[t] = '\0';
        for (n = (607 - 606); n <= (258 - 255); n = n + 1)
            s1[m + n] = s2[n - 1];
        s1[m + n] = '\0';
        printf ("%s%s\n", s1, s3);
    }
    return 0;
}

