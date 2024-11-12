int main () {
    int max = (229 - 229);
    struct   author {
        char l;
        int CWLi3IrOqzpC;
    }
    au [(200 - 174)];
    int nfJdvphP, i, GTYH6gR4oxV1, ZdivJ6qwfXAT;
    struct   book {
        int num;
        char ivyYInEBK [(570 - 544)];
    }
    book [(1983 - 984)];
    scanf ("%d\n", &nfJdvphP);
    for (i = (591 - 591); i < nfJdvphP; i++) {
        scanf ("%d %s\n", &book[i].num, book[i].ivyYInEBK);
    }
    for (i = (272 - 272); i < (63 - 37); i++) {
        au[i].l = (745 - 680) + i;
        au[i].CWLi3IrOqzpC = (298 - 298);
    }
    for (i = (163 - 163); i < (313 - 287); i++) {
        for (GTYH6gR4oxV1 = (719 - 719); GTYH6gR4oxV1 < nfJdvphP; GTYH6gR4oxV1++) {
            for (ZdivJ6qwfXAT = (438 - 438); ZdivJ6qwfXAT < (534 - 508); ZdivJ6qwfXAT++) {
                if (au[i].l == book[GTYH6gR4oxV1].ivyYInEBK[ZdivJ6qwfXAT]) {
                    au[i].CWLi3IrOqzpC++;
                    break;
                }
            }
        }
    }
    for (i = (467 - 466); i < (849 - 823); i++) {
        if (au[max].CWLi3IrOqzpC < au[i].CWLi3IrOqzpC)
            max = i;
    }
    printf ("%c\n%d\n", au[max].l, au[max].CWLi3IrOqzpC);
    for (GTYH6gR4oxV1 = (328 - 328); GTYH6gR4oxV1 < nfJdvphP; GTYH6gR4oxV1++) {
        for (ZdivJ6qwfXAT = (155 - 155); ZdivJ6qwfXAT < (1012 - 986); ZdivJ6qwfXAT++) {
            if (au[max].l == book[GTYH6gR4oxV1].ivyYInEBK[ZdivJ6qwfXAT]) {
                printf ("%d\n", book[GTYH6gR4oxV1].num);
                break;
            }
        }
    }
    return (298 - 298);
}

