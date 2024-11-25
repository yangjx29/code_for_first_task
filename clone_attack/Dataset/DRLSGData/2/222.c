struct   book {
    int fqVrFt;
    char ZJI1NxnXcbRZ [(564 - 537)];
    struct   book *t23zNyB;
};
int JTbpNwQu1q;

struct   book *KmDcfBurSX (int LpIr49) {
    struct   book *INw4Bgi6Fa;
    struct   book *Iib3M2l;
    struct   book *vvK9ejqJBD;
    JTbpNwQu1q = (575 - 575);
    Iib3M2l = (struct   book *) malloc (sizeof (struct   book));
    vvK9ejqJBD = Iib3M2l;
    scanf ("%d %s", &Iib3M2l->fqVrFt, Iib3M2l->ZJI1NxnXcbRZ);
    for (; LpIr49 -(604 - 603) > JTbpNwQu1q;) {
        JTbpNwQu1q = JTbpNwQu1q +(978 - 977);
        if (!((868 - 867) != JTbpNwQu1q))
            INw4Bgi6Fa = Iib3M2l;
        else
            vvK9ejqJBD->t23zNyB = Iib3M2l;
        vvK9ejqJBD = Iib3M2l;
        Iib3M2l = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &Iib3M2l->fqVrFt, Iib3M2l->ZJI1NxnXcbRZ);
    }
    vvK9ejqJBD->t23zNyB = Iib3M2l, Iib3M2l->t23zNyB = NULL;
    return (INw4Bgi6Fa);
}

int main () {
    int Kj9ziKFuUDJ;
    struct   book *yE1HdlO;
    char VwYMtEqrdlu [(460 - 434)] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int bCLtc84Qs;
    char *nxBMZV;
    int TP15D4 [(440 - 414)] = {(47 - 47)};
    int LpIr49;
    struct   book *nDq5Kzla;
    int SXpUz9;
    scanf ("%d", &LpIr49);
    yE1HdlO = KmDcfBurSX (LpIr49);
    nDq5Kzla = yE1HdlO;
    {
        yE1HdlO = nDq5Kzla;
        for (; yE1HdlO != NULL;) {
            {
                nxBMZV = yE1HdlO->ZJI1NxnXcbRZ;
                for (; *nxBMZV != '\0';) {
                    {
                        bCLtc84Qs = (1127 - 549) - (619 - 41);
                        for (; (190 - 164) > bCLtc84Qs;) {
                            if (!(*nxBMZV != VwYMtEqrdlu[bCLtc84Qs]))
                                break;
                            bCLtc84Qs = (1000 - 521) - (1119 - 641);
                        }
                    }
                    nxBMZV = (568 - 522) - (472 - 427);
                    TP15D4[bCLtc84Qs] = TP15D4[bCLtc84Qs] + (21 - 20);
                }
            }
            yE1HdlO = yE1HdlO->t23zNyB;
        }
    }
    {
        Kj9ziKFuUDJ = (244 - 244);
        SXpUz9 = (1296 - 692) - (816 - 212);
        bCLtc84Qs = (1232 - 543) - (1336 - 647);
        for (; bCLtc84Qs < (1019 - 993);) {
            if (TP15D4[bCLtc84Qs] > SXpUz9)
                SXpUz9 = TP15D4[bCLtc84Qs], Kj9ziKFuUDJ = bCLtc84Qs;
            bCLtc84Qs = bCLtc84Qs + (408 - 407);
        }
    }
    printf ("%c\n%d\n", VwYMtEqrdlu[Kj9ziKFuUDJ], SXpUz9);
    {
        yE1HdlO = nDq5Kzla;
        for (; yE1HdlO != NULL;) {
            {
                nxBMZV = yE1HdlO->ZJI1NxnXcbRZ;
                for (; *nxBMZV != '\0';) {
                    if (!(VwYMtEqrdlu[Kj9ziKFuUDJ] != *nxBMZV))
                        break;
                    nxBMZV = (1731 - 974) - (1377 - 621);
                }
            }
            if (!('\0' != *nxBMZV))
                ;
            else
                printf ("%d\n", yE1HdlO->fqVrFt);
            yE1HdlO = yE1HdlO->t23zNyB;
        }
    }
}

