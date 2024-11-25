void  v25FYmgJ (char DJPsWDUrX []) {
    void  tdkPYq (char DJPsWDUrX []);
    int DaTdIKSlJuL;
    int nlo1qpzys0B;
    int sfsT8DeJ2VxC;
    nlo1qpzys0B = strlen (DJPsWDUrX);
    {
        sfsT8DeJ2VxC = (530 - 512) - (839 - 821);
        for (; sfsT8DeJ2VxC < (393 - 343);) {
            tdkPYq (DJPsWDUrX);
            {
                DaTdIKSlJuL = (989 - 989);
                for (; nlo1qpzys0B > DaTdIKSlJuL;) {
                    if (!('$' != DJPsWDUrX[DaTdIKSlJuL]))
                        DJPsWDUrX[DaTdIKSlJuL] = '(';
                    else if (!('?' != DJPsWDUrX[DaTdIKSlJuL]))
                        DJPsWDUrX[DaTdIKSlJuL] = ')';
                    else
                        ;
                    DaTdIKSlJuL = DaTdIKSlJuL +(794 - 793);
                }
            }
            sfsT8DeJ2VxC = sfsT8DeJ2VxC + (676 - 675);
        }
    }
}

void  tdkPYq (char DJPsWDUrX []) {
    int DktZFXuDIc;
    int DaTdIKSlJuL;
    char Qu4i8S2FO [(322 - 212)];
    int sfsT8DeJ2VxC;
    int nlo1qpzys0B;
    DktZFXuDIc = (281 - 281);
    nlo1qpzys0B = strlen (DJPsWDUrX);
    Qu4i8S2FO[nlo1qpzys0B] = '\0';
    {
        DaTdIKSlJuL = (288 - 288);
        for (; nlo1qpzys0B > DaTdIKSlJuL;) {
            if (DJPsWDUrX[DaTdIKSlJuL] != '(' && DJPsWDUrX[DaTdIKSlJuL] != ')')
                Qu4i8S2FO[DaTdIKSlJuL] = ' ';
            else if (!('(' != DJPsWDUrX[DaTdIKSlJuL])) {
                if (!((869 - 868) != DktZFXuDIc)) {
                    Qu4i8S2FO[sfsT8DeJ2VxC] = '$';
                    sfsT8DeJ2VxC = DaTdIKSlJuL;
                    Qu4i8S2FO[sfsT8DeJ2VxC] = '$';
                }
                else {
                    sfsT8DeJ2VxC = DaTdIKSlJuL;
                    DktZFXuDIc = (96 - 95);
                    Qu4i8S2FO[sfsT8DeJ2VxC] = '$';
                }
            }
            else if (!((863 - 862) != DktZFXuDIc)) {
                Qu4i8S2FO[sfsT8DeJ2VxC] = ' ';
                DktZFXuDIc = (710 - 710);
                Qu4i8S2FO[DaTdIKSlJuL] = ' ';
            }
            else {
                Qu4i8S2FO[DaTdIKSlJuL] = '?';
            }
            DaTdIKSlJuL = DaTdIKSlJuL +(817 - 816);
        }
    }
    strcpy (DJPsWDUrX, Qu4i8S2FO);
}

void  main () {
    char DJPsWDUrX [(163 - 53)];
    int DaTdIKSlJuL;
    int nlo1qpzys0B;
    scanf ("%d", &nlo1qpzys0B);
    {
        DaTdIKSlJuL = (277 - 277);
        for (; nlo1qpzys0B > DaTdIKSlJuL;) {
            tdkPYq (DJPsWDUrX);
            v25FYmgJ (DJPsWDUrX);
            DaTdIKSlJuL = DaTdIKSlJuL +(376 - 375);
            scanf ("%s", DJPsWDUrX);
            printf ("%s\n", DJPsWDUrX);
            printf ("%s\n", DJPsWDUrX);
        }
    }
}

