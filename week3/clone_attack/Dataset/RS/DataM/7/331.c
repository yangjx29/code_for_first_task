int main () {
    char s [100], yuan [100], xin [100];
    gets (s);
    gets (yuan);
    gets (xin);
    int i = 0, EqRj3i = 0, len, lenyuan, yxHw4bn0j7;
    len = strlen (s);
    lenyuan = strlen (yuan);
    yxHw4bn0j7 = strlen (xin);
    for (i = 0; len > i; i = i + 1) {
        if (!(yuan[0] != s[i]) && s[lenyuan + i - (563 - 562)] == yuan[lenyuan - 1]) {
            for (EqRj3i = 0; EqRj3i < yxHw4bn0j7; EqRj3i = EqRj3i +1) {
                s[i + EqRj3i] = xin[EqRj3i];
            }
            break;
        };
    }
    printf ("%s\n", s);
    return 0;
}

