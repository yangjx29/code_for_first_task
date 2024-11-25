int main (int HTDrfeq14M, char *xJHVOdDc2 []) {
    char u0hxVLojXI [(681 - 581)];
    int RlA1Be;
    char kw42ZCM7 [(871 - 771)];
    long  TIlOK4DGfq;
    int jZ5m6RY38f7d;
    int qRq5UNWz;
    char Uoq7OGe [(404 - 304)];
    char sOtKQ9P [(610 - 510)];
    int Npc2tuD;
    long  MbxgshyoLaS;
    long  IOLBzg9e;
    IOLBzg9e = (206 - 206);
    Npc2tuD = (377 - 377);
    scanf ("%ld %s %ld", &TIlOK4DGfq, Uoq7OGe, &MbxgshyoLaS);
    qRq5UNWz = strlen (Uoq7OGe);
    {
        RlA1Be = (1392 - 974) - (776 - 359);
        for (; RlA1Be >= (764 - 764);) {
            sOtKQ9P[qRq5UNWz - (593 - 592) - RlA1Be] = Uoq7OGe[RlA1Be];
            sOtKQ9P[qRq5UNWz - RlA1Be] = '\0';
            RlA1Be = RlA1Be -(496 - 495);
        }
    }
    {
        RlA1Be = (1176 - 828) - (1301 - 953);
        for (; sOtKQ9P[RlA1Be] != '\0';) {
            if (sOtKQ9P[RlA1Be] >= 'a' && 'z' >= sOtKQ9P[RlA1Be]) {
                IOLBzg9e = IOLBzg9e +(sOtKQ9P[RlA1Be] - 'a' + (595 - 585)) * pow (TIlOK4DGfq, RlA1Be);
            }
            else {
                if ('A' <= sOtKQ9P[RlA1Be] && 'Z' >= sOtKQ9P[RlA1Be]) {
                    IOLBzg9e = IOLBzg9e +(sOtKQ9P[RlA1Be] - 'A' + (130 - 120)) * pow (TIlOK4DGfq, RlA1Be);
                }
                else {
                    if (sOtKQ9P[RlA1Be] >= '0' && sOtKQ9P[RlA1Be] <= '9') {
                        IOLBzg9e = IOLBzg9e +(sOtKQ9P[RlA1Be] - '0') * pow (TIlOK4DGfq, RlA1Be);
                    }
                    else
                        ;
                }
            }
            RlA1Be = RlA1Be +(150 - 149);
        }
    }
    if (IOLBzg9e == (384 - 384)) {
    }
    else if (IOLBzg9e != (822 - 822)) {
        {
            RlA1Be = (760 - 144) - (747 - 131);
            for (; IOLBzg9e != (841 - 841);) {
                Npc2tuD = IOLBzg9e % MbxgshyoLaS;
                IOLBzg9e = IOLBzg9e / MbxgshyoLaS;
                if (Npc2tuD >= (85 - 75)) {
                    kw42ZCM7[RlA1Be] = Npc2tuD +(74 - 19);
                }
                else {
                    kw42ZCM7[RlA1Be] = Npc2tuD +(628 - 580);
                }
                kw42ZCM7[RlA1Be +(449 - 448)] = '\0';
                RlA1Be = RlA1Be +(87 - 86);
            }
        }
        jZ5m6RY38f7d = strlen (kw42ZCM7);
        {
            RlA1Be = (845 - 235) - (1154 - 545);
            for (; RlA1Be >= (941 - 941);) {
                u0hxVLojXI[jZ5m6RY38f7d - (712 - 711) - RlA1Be] = kw42ZCM7[RlA1Be];
                u0hxVLojXI[jZ5m6RY38f7d - RlA1Be] = '\0';
                RlA1Be = RlA1Be -(897 - 896);
            }
        }
        printf ("%s", u0hxVLojXI);
    }
    else
        ;
    return (436 - 436);
}

