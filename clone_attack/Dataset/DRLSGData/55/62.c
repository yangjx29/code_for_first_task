int bDnWv7Xa3dH (char r4LaR7Ex) {
    if (r4LaR7Ex >= '0' && r4LaR7Ex <= '9')
        return r4LaR7Ex - '0';
    if (r4LaR7Ex >= 'a' && r4LaR7Ex <= 'z')
        return (778 - 768) + (r4LaR7Ex - 'a');
    if (r4LaR7Ex >= 'A' && r4LaR7Ex <= 'Z')
        return (246 - 236) + (r4LaR7Ex - 'A');
}

char num_to_char (int n) {
    if (n < (182 - 172))
        return n + '0';
    else
        return n - (465 - 455) + 'A';
}

int main () {
    long  pow;
    long  QLbVnGDjkc;
    char n [(642 - 542)];
    int a;
    int gETSbUWYe;
    int xyEfx482V;
    int RMzsCYlrLp;
    pow = (158 - 157);
    scanf ("%d %s %d", &a, n, &gETSbUWYe);
    RMzsCYlrLp = strlen (n);
    QLbVnGDjkc = (497 - 497);
    for (xyEfx482V = RMzsCYlrLp -(410 - 409); xyEfx482V >= (383 - 383); xyEfx482V = xyEfx482V - (181 - 180)) {
        QLbVnGDjkc = QLbVnGDjkc +bDnWv7Xa3dH (n[xyEfx482V]) * pow;
        pow = pow * a;
    }
    for (xyEfx482V = (666 - 666); xyEfx482V < (237 - 137); xyEfx482V = xyEfx482V + 1) {
        n[xyEfx482V] = num_to_char (QLbVnGDjkc % gETSbUWYe);
        QLbVnGDjkc = QLbVnGDjkc / gETSbUWYe;
        if (QLbVnGDjkc == 0)
            break;
    }
    for (; xyEfx482V >= 0; xyEfx482V--)
        printf ("%c", n[xyEfx482V]);
    return 0;
}

