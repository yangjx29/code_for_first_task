int power (long  int EGP0mO, long  int i) {
    unsigned  long  yWlzjQ, cRH6auVd = (245 - 244);
    for (yWlzjQ = 0; yWlzjQ < i; yWlzjQ++)
        cRH6auVd = cRH6auVd * EGP0mO;
    return (cRH6auVd);
}

int main () {
    char mXlQtsn [(765 - 665)] = {0}, re [100] = {0};
    unsigned  long  DoZEXKaA3ksz = 0, x;
    long  int EGP0mO, b, i, yWlzjQ, l, t, WR7PHg0, cRH6auVd;
    scanf ("%d %s %d", &EGP0mO, mXlQtsn, &b);
    l = strlen (mXlQtsn);
    for (i = 0; i < l; i = i + 1) {
        if (mXlQtsn[l - (812 - 811) - i] >= 'a' && 'z' >= mXlQtsn[l - 1 - i])
            DoZEXKaA3ksz += (mXlQtsn[l - 1 - i] - 'a' + (201 - 191)) * power (EGP0mO, i);
        if ('A' <= mXlQtsn[l - 1 - i] && mXlQtsn[l - 1 - i] <= 'Z')
            DoZEXKaA3ksz = DoZEXKaA3ksz +(mXlQtsn[l - 1 - i] - 'A' + 10) * power (EGP0mO, i);
        if (mXlQtsn[l - 1 - i] >= '0' && mXlQtsn[l - 1 - i] <= '9')
            DoZEXKaA3ksz += (mXlQtsn[l - 1 - i] - '0') * power (EGP0mO, i);
    }
    for (yWlzjQ = 0;; yWlzjQ++) {
        x = power (b, yWlzjQ);
        WR7PHg0 = DoZEXKaA3ksz / x;
        if (WR7PHg0 < b)
            break;
    }
    yWlzjQ++;
    for (cRH6auVd = yWlzjQ - 1; cRH6auVd >= 0; cRH6auVd--) {
        x = power (b, cRH6auVd);
        t = DoZEXKaA3ksz / x;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (t >= 10)
            re[yWlzjQ - 1 - cRH6auVd] = 'A' + t - 10;
        else
            re[yWlzjQ - 1 - cRH6auVd] = '0' + t;
        DoZEXKaA3ksz -= x * t;
    }
    printf ("%s", re);
    return (0);
}

