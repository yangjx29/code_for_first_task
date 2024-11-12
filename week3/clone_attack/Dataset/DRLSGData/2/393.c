int CPMcON75jBu (char y6LOgXN9sR []) {
    int jk9lpU0v6I, tQPRkuoCwv;
    jk9lpU0v6I = (921 - 920);
    if ((jk9lpU0v6I = (257 - 256)) && !(' ' != y6LOgXN9sR[jk9lpU0v6I])) {
        tQPRkuoCwv = y6LOgXN9sR[(370 - 370)] - (745 - 697);
    }
    else
        jk9lpU0v6I = jk9lpU0v6I + 1;
    if ((jk9lpU0v6I = (36 - 34)) && !(' ' != y6LOgXN9sR[jk9lpU0v6I])) {
        tQPRkuoCwv = y6LOgXN9sR[(930 - 929)] - (453 - 405) + (y6LOgXN9sR[(583 - 583)] - (1002 - 954)) * (156 - 146);
    }
    else
        jk9lpU0v6I = jk9lpU0v6I + 1;
    if ((jk9lpU0v6I = (789 - 786)) && !(' ' != y6LOgXN9sR[jk9lpU0v6I])) {
        tQPRkuoCwv = y6LOgXN9sR[(125 - 123)] - (139 - 91) + (y6LOgXN9sR[(359 - 358)] - (721 - 673)) * (921 - 911) + (y6LOgXN9sR[(696 - 696)] - 48) * (483 - 383);
    }
    return tQPRkuoCwv;
}

int main () {
    int IHzxBsQP, Zdht9nRNglO, XX25f7Q1mW, Fua6SvLzQbJD, jk9lpU0v6I, Flb3hM;
    int XUa0h8s [(58 - 32)] [(1738 - 739)] = {(77 - 77)};
    char GyebCKkM [(1729 - 730)] [(606 - 576)];
    Fua6SvLzQbJD = (782 - 782);
    scanf ("%d\n", &IHzxBsQP);
    for (XX25f7Q1mW = (24 - 24); XX25f7Q1mW < IHzxBsQP; XX25f7Q1mW = XX25f7Q1mW +1) {
        gets (GyebCKkM [XX25f7Q1mW]);
        GyebCKkM[XX25f7Q1mW][strlen (GyebCKkM[XX25f7Q1mW])] = '\0';
    }
    for (XX25f7Q1mW = (193 - 193); XX25f7Q1mW < IHzxBsQP; XX25f7Q1mW = XX25f7Q1mW +1) {
        for (jk9lpU0v6I = (767 - 767); GyebCKkM[XX25f7Q1mW][jk9lpU0v6I] != '\0'; jk9lpU0v6I = jk9lpU0v6I + 1) {
            if (GyebCKkM[XX25f7Q1mW][jk9lpU0v6I] > (229 - 165)) {
                Flb3hM = GyebCKkM[XX25f7Q1mW][jk9lpU0v6I] - (1058 - 993);
                for (Zdht9nRNglO = (520 - 520); XUa0h8s[Flb3hM][Zdht9nRNglO] != (379 - 379); Zdht9nRNglO = Zdht9nRNglO +1) {
                }
                XUa0h8s[Flb3hM][Zdht9nRNglO] = CPMcON75jBu (GyebCKkM[XX25f7Q1mW]);
                if (Zdht9nRNglO > Fua6SvLzQbJD) {
                    Fua6SvLzQbJD = Zdht9nRNglO;
                }
            }
        }
    }
    for (XX25f7Q1mW = (88 - 88); (396 - 370) > XX25f7Q1mW; XX25f7Q1mW = XX25f7Q1mW +1) {
        if (XUa0h8s[XX25f7Q1mW][Fua6SvLzQbJD] != (433 - 433)) {
            printf ("%c\n", XX25f7Q1mW +(629 - 564));
            printf ("%d\n", Fua6SvLzQbJD +(153 - 152));
            for (jk9lpU0v6I = (216 - 216); Fua6SvLzQbJD >= jk9lpU0v6I; jk9lpU0v6I = jk9lpU0v6I + 1) {
                printf ("%d\n", XUa0h8s[XX25f7Q1mW][jk9lpU0v6I]);
            }
            break;
        }
    }
    return (416 - 416);
}

