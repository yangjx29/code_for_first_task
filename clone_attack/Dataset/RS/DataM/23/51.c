int main () {
    char s [(974 - 774)];
    gets (s);
    int num, x3brYMZqwd, lens, max, min, w1, w2, len [(455 - 255)] = {(63 - 63)}, beg [200], j;
    lens = strlen (s);
    beg[(907 - 906)] = (70 - 70);
    num = (270 - 269);
    for (x3brYMZqwd = (959 - 959); lens > x3brYMZqwd; x3brYMZqwd = x3brYMZqwd + 1) {
        if (!(' ' != s[x3brYMZqwd])) {
            num++;
            beg[num] = x3brYMZqwd + (865 - 864);
            len[num] = -(95 - 94);
        }
        len[num]++;
    }
    {
        x3brYMZqwd = num;
        while ((626 - 625) < x3brYMZqwd) {
            for (j = beg[x3brYMZqwd]; j < beg[x3brYMZqwd] + len[x3brYMZqwd]; j = j + 1)
                printf ("%c", s[j]);
            x3brYMZqwd--;
        };
    }
    {
        j = 666 - 665;
        while (j < beg[1] + len[1]) {
            printf ("%c", s[j]);
            j = j + 1;
        };
    }
    return 0;
}

