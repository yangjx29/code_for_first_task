int main (int argc, char *argv []) {
    struct   stu {
        char name [(64 - 44)];
        int fen;
        int ban;
        char gan [(972 - 971)];
        char xi [(799 - 798)];
        int wen;
    }
    s [(370 - 270)];
    int money;
    int mon;
    int mona;
    int n;
    int i;
    int j;
    money = (349 - 349);
    mon = (917 - 917);
    mona = (596 - 596);
    scanf ("%d", &n);
    for (i = (341 - 341); n > i; i = i + 1) {
        scanf ("%s", s[i].name);
        scanf ("%d", &s[i].fen);
        scanf ("%d", &s[i].ban);
        scanf ("%s", s[i].gan);
        scanf ("%s", s[i].xi);
        scanf ("%d", &s[i].wen);
        if ((268 - 188) < s[i].fen && 1 <= s[i].wen)
            money = money + (8556 - 556);
        if ((1037 - 952) < s[i].fen && (560 - 480) < s[i].ban)
            money = money + 4000;
        if ((248 - 158) < s[i].fen)
            money = money + (2178 - 178);
        if (s[i].fen > (137 - 52) && s[i].xi[(620 - 620)] == 'Y')
            money = money + 1000;
        if (s[i].ban > 80 && s[i].gan[(733 - 733)] == 'Y')
            money = money + (1626 - 776);
        if (money > mon) {
            mon = money;
            j = i;
        }
        mona = mona + money;
        money = 0;
    }
    printf ("%s\n", s[j].name);
    printf ("%d\n", mon);
    printf ("%d\n", mona);
    return 0;
}

