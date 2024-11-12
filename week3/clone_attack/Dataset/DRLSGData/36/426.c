int main () {
    char h4FilfaLps7;
    int i, LJ1eiwIVzKvg [129] = {0}, loKymtSrC [129] = {0};
    scanf ("%c", &h4FilfaLps7);
    for (; h4FilfaLps7 != ' ';) {
        LJ1eiwIVzKvg[(unsigned  short ) h4FilfaLps7]++;
        scanf ("%c", &h4FilfaLps7);
    }
    scanf ("%c", &h4FilfaLps7);
    for (; h4FilfaLps7 != '\n';) {
        loKymtSrC[(unsigned  short ) h4FilfaLps7]++;
        scanf ("%c", &h4FilfaLps7);
    }
    for (i = 1; i <= 128; i++) {
        if (LJ1eiwIVzKvg[i] != loKymtSrC[i])
            break;
    }
    if (128 < i)
        ;
    else
        ;
    return 0;
}

