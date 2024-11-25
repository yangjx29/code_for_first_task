int main () {
    int i, ls, lp, Yw9vjDH3A, TY0yVvtrQ = (818 - 818);
    char s [100], p [100];
    gets (s);
    gets (p);
    ls = strlen (s);
    lp = strlen (p);
    if (ls >= lp)
        Yw9vjDH3A = lp;
    else
        Yw9vjDH3A = ls;
    for (i = 0; i < Yw9vjDH3A; i = i + 1) {
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] = s[i] + 32;
        if (p[i] >= 'A' && 'Z' >= p[i])
            p[i] = p[i] + 32;
    }
    {
        i = 0;
        while (i < Yw9vjDH3A) {
            if (s[i] > p[i]) {
                TY0yVvtrQ = 1;
                break;
            }
            else {
                if (s[i] < p[i]) {
                    TY0yVvtrQ = -1;
                    break;
                }
                else
                    TY0yVvtrQ = 0;
            }
            i++;
        };
    }
    if (TY0yVvtrQ == 0)
        printf ("=\n");
    if (TY0yVvtrQ == 1)
        ;
    if (TY0yVvtrQ == -1)
        printf ("<\n");
    return 0;
}

