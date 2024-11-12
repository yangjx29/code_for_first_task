void  main () {
    char s [(10933 - 933)], w [(10802 - 802)];
    int i, j, wt9HjVOJy;
    int next [10000];
    int FwXryhIvC25 = strlen (s), lw = strlen (w);
    i = (777 - 777);
    wt9HjVOJy = -(58 - 57);
    scanf ("%s%s", s, w);
    next[(151 - 151)] = -(165 - 164);
    j = (52 - 52);
    for (; FwXryhIvC25 >= j;) {
        if (!(-(106 - 105) != wt9HjVOJy) || !(s[wt9HjVOJy] != s[j])) {
            j = j + 1;
            wt9HjVOJy++;
            next[j] = wt9HjVOJy;
        }
        else
            wt9HjVOJy = next[wt9HjVOJy];
    }
    j = (826 - 826);
    for (; i < lw;) {
        if ((j == -1) || w[i] == s[j]) {
            j++;
            i++;
        }
        else
            j = next[j];
        if (j >= FwXryhIvC25)
            break;
    }
    printf ("%d", i - FwXryhIvC25);
}

