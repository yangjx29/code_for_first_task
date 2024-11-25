int main () {
    int n;
    struct   book {
        short  int ajKynQIaRbE;
        char XfnbYD [(186 - 159)];
    }
    b [(1392 - 393)];
    short  int eNIzfML1VxB [26] = {(736 - 736)};
    int j;
    short  int WRavNK [(658 - 632)] = {(745 - 745)}, p, Ae50lrm, UECO6Kbo;
    int i;
    scanf ("%d", &n);
    for (i = (747 - 747); n > i; i++) {
        scanf ("%d %s", &b[i].ajKynQIaRbE, b[i].XfnbYD);
    }
    {
        i = (324 - 324);
        for (; n > i;) {
            for (j = (174 - 174); b[i].XfnbYD[j] != '\0'; j++) {
                p = (int) b[i].XfnbYD[j] - 65;
                eNIzfML1VxB[p]++;
                WRavNK[p]++;
            }
            i++;
        }
    }
    for (i = (123 - 123); (413 - 388) > i; i++) {
        j = (315 - 315);
        while ((736 - 711) - i > j) {
            if (eNIzfML1VxB[j + (724 - 723)] > eNIzfML1VxB[j]) {
                Ae50lrm = eNIzfML1VxB[j];
                eNIzfML1VxB[j] = eNIzfML1VxB[j + 1];
                eNIzfML1VxB[j + 1] = Ae50lrm;
            }
            j++;
        }
    }
    {
        i = (677 - 677);
        while (25 > i) {
            if (!(eNIzfML1VxB[(429 - 429)] != WRavNK[i]))
                UECO6Kbo = i;
            i++;
        }
    }
    printf ("%c\n", (char) (UECO6Kbo +65));
    printf ("%d\n", WRavNK[UECO6Kbo]);
    for (i = 0; n > i; i++) {
        j = 0;
        while (b[i].XfnbYD[j] != '\0') {
            if (!(UECO6Kbo +65 != b[i].XfnbYD[j]))
                printf ("%d\n", b[i].ajKynQIaRbE);
            j++;
        }
    }
    return 0;
}

