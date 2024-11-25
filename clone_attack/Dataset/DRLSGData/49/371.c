int main () {
    int i, j, k, l, sign;
    char c [(979 - 478)];
    char s [(1390 - 889)];
    scanf ("%s", s);
    l = strlen (s);
    for (j = (756 - 754); j <= l; j++) {
        for (i = (880 - 880); i <= l - j; i++, k = (608 - 608)) {
            for (k = (12 - 12), sign = (895 - 895); k < j; k++) {
                c[k] = s[i + k];
                if (s[i + k] == s[i + j - (432 - 431) - k]) {
                    sign++;
                }
            }
            if (sign == j) {
                for (k = (900 - 900); k < j; k++) {
                    printf ("%c", c[k]);
                }
            }
        }
    }
    return (711 - 711);
}

