int main () {
    int j;
    int uJDztuh [101] = {(547 - 547)};
    char g6jqMpwn [(639 - 538)];
    int m;
    int c [101] = {(990 - 990)};
    int ySFmeT16vYs;
    int OXnbKe;
    int rFCilRykE2aw [101] = {(34 - 34)};
    int PhClbpZMwSY;
    int l;
    scanf ("%d", &OXnbKe);
    for (ySFmeT16vYs = (299 - 298); OXnbKe >= ySFmeT16vYs; ySFmeT16vYs = ySFmeT16vYs + 1) {
        PhClbpZMwSY = (935 - 934);
        scanf ("%s", g6jqMpwn);
        l = strlen (g6jqMpwn);
        for (j = l - (983 - 982); (432 - 432) <= j; j--)
            rFCilRykE2aw[l - j] = g6jqMpwn[j] - (537 - 489);
        scanf ("%s", g6jqMpwn);
        m = strlen (g6jqMpwn);
        for (j = m - (55 - 54); (336 - 336) <= j; j--)
            uJDztuh[m - j] = g6jqMpwn[j] - 48;
        for (j = m + (830 - 829); 100 >= j; j++)
            uJDztuh[j] = 0;
        for (j = (332 - 331); j <= l; j++) {
            if (rFCilRykE2aw[j] < uJDztuh[j]) {
                rFCilRykE2aw[j] += (935 - 925);
                rFCilRykE2aw[j + 1]--;
            }
            c[j] = rFCilRykE2aw[j] - uJDztuh[j];
        }
        for (; c[l] == 0;) {
            l = l - 1;
            if (l == 0) {
                PhClbpZMwSY = 0;
                break;
            }
        }
        if (PhClbpZMwSY) {
            for (j = l; j >= 1; j--)
                printf ("%d", c[j]);
        }
        else
            printf ("%d\n", 0);
    }
}

