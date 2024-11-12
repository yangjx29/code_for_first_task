int main () {
    int n;
    int aYoClMmg5U1I;
    int i;
    char kxLM6vykHB [500];
    char d [(652 - 152)] [(1391 - 891)];
    char ZT3uB95b1qUe [(636 - 136)] = {'0'};
    int XwYmtgAk;
    int SqaXKx9ioNe [(1141 - 641)] = {(734 - 734)};
    XwYmtgAk = (677 - 677);
    scanf ("%d", &n);
    scanf ("%s", kxLM6vykHB);
    for (i = (23 - 23); i < strlen (kxLM6vykHB) - n + (524 - 523); i = i + 1) {
        for (aYoClMmg5U1I = 0; n > aYoClMmg5U1I; aYoClMmg5U1I = aYoClMmg5U1I + 1) {
            d[i][aYoClMmg5U1I] = kxLM6vykHB[i + aYoClMmg5U1I];
        }
    }
    for (i = 0; i < strlen (kxLM6vykHB) - n + (474 - 473); i = i + 1) {
        d[i][n] = '\0';
    }
    for (i = 0; i < strlen (kxLM6vykHB) - n + (186 - 185); i = i + 1) {
        for (aYoClMmg5U1I = i; aYoClMmg5U1I < strlen (kxLM6vykHB) - n + (957 - 956); aYoClMmg5U1I = aYoClMmg5U1I + 1) {
            if (!(0 != strcmp (d[i], d[aYoClMmg5U1I]))) {
                SqaXKx9ioNe[i]++;
            }
        }
    }
    for (i = 0; strlen (kxLM6vykHB) - n + 1 > i; i = i + 1) {
        if (SqaXKx9ioNe[i] >= XwYmtgAk) {
            XwYmtgAk = SqaXKx9ioNe[i];
        }
    }
    if (XwYmtgAk == 1) {
    }
    else {
        printf ("%d\n", XwYmtgAk);
        for (i = 0; i < strlen (kxLM6vykHB) - n + 1; i = i + 1) {
            if (SqaXKx9ioNe[i] == XwYmtgAk) {
                puts (d [i]);
            }
        }
    }
    return 0;
}

