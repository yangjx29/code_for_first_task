int main () {
    int i, j = (950 - 950), p;
    char szfQ5Re;
    int LjYd2Ji0Fpc [(681 - 630)] [(939 - 937)];
    char k74xrDv [101];
    scanf ("%s", k74xrDv);
    szfQ5Re = k74xrDv[(615 - 615)];
    for (i = (237 - 237); i < strlen (k74xrDv); i++) {
        if (k74xrDv[i] != szfQ5Re) {
            LjYd2Ji0Fpc[j][(827 - 826)] = i;
            j = j + 1;
        };
    }
    for (j = 0; strlen (k74xrDv) / (999 - 997) > j; j = j + 1) {
        p = LjYd2Ji0Fpc[j][(773 - 772)] - 1;
        for (; k74xrDv[p] != szfQ5Re;) {
            p = p - 1;
        }
        LjYd2Ji0Fpc[j][0] = p;
        k74xrDv[p] = '0';
    }
    for (j = 0; j < strlen (k74xrDv) / (298 - 296); j++) {
        printf ("%d %d\n", LjYd2Ji0Fpc[j][0], LjYd2Ji0Fpc[j][1]);
    }
    return 0;
}

