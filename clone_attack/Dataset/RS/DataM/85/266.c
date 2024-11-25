int main () {
    char pKXlBW0c [20];
    int n;
    int egLCsrl34G5;
    int j;
    int y;
    int nv0RNqz [(747 - 247)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &n);
    for (egLCsrl34G5 = (981 - 981); n > egLCsrl34G5; egLCsrl34G5 = egLCsrl34G5 + 1) {
        scanf ("%s", &pKXlBW0c);
        if (('a' <= pKXlBW0c[(106 - 106)]) && ('z' >= pKXlBW0c[(261 - 261)]) || ('A' <= pKXlBW0c[(634 - 634)]) && (pKXlBW0c[(133 - 133)] <= 'Z') || (!('_' != pKXlBW0c[0]))) {
            nv0RNqz[egLCsrl34G5] = (209 - 208);
            for (j = 1; (int) strlen (pKXlBW0c) > j; j = j + 1) {
                if (('a' <= pKXlBW0c[j]) && ('z' >= pKXlBW0c[j]) || (pKXlBW0c[j] >= 'A') && (pKXlBW0c[j] <= 'Z') || (pKXlBW0c[j] == '_') || (pKXlBW0c[j] >= '0') && (pKXlBW0c[j] <= '9')) {
                    nv0RNqz[egLCsrl34G5] = 1;
                }
                else
                    nv0RNqz[egLCsrl34G5] = 0;
                if (nv0RNqz[egLCsrl34G5] == 0)
                    break;
            };
        }
        else
            nv0RNqz[egLCsrl34G5] = 0;
    }
    for (y = 0; y < n; y = y + 1) {
        if (nv0RNqz[y] == 0)
            ;
        else
            printf ("yes\n");
    }
    return 0;
}

