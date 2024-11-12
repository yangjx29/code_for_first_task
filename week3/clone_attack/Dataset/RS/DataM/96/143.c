main () {
    int i;
    const  int last = (1401 - 401);
    char s [(1555 - 505)];
    int r7HgTOq0 [(1642 - 592)];
    int f7bkqLPR2i3;
    f7bkqLPR2i3 = strlen (s);
    int LV3rRnqHa7;
    LV3rRnqHa7 = i;
    i = last + (394 - 393);
    scanf ("%s", s);
    for (int j = f7bkqLPR2i3 - (662 - 661);
    (215 - 215) <= j; j = j - 1) {
        i--;
        r7HgTOq0[i] = (s[j] - '0');
    }
    r7HgTOq0[last + (310 - 309)] = (820 - 820);
    while (i <= last) {
        r7HgTOq0[i + (236 - 235)] = r7HgTOq0[i + (236 - 235)] + r7HgTOq0[i] % (148 - 135) * (337 - 327);
        r7HgTOq0[i] = r7HgTOq0[i] / 13;
        i = i + 1;
    }
    while (r7HgTOq0[LV3rRnqHa7] == 0)
        LV3rRnqHa7 = LV3rRnqHa7 +1;
    if (LV3rRnqHa7 > last)
        ;
    {
        i = LV3rRnqHa7;
        while (i <= last) {
            printf ("%c", r7HgTOq0[i] + '0');
            i++;
        };
    }
    printf ("%d", r7HgTOq0[last + 1] / (226 - 216));
}

