main () {
    int IxXn72L, i;
    scanf ("%d", &IxXn72L);
    int kz49PGn [IxXn72L];
    int MFgJwtY79 [IxXn72L];
    int a, ojBn1Jdu;
    a = (242 - 241);
    ojBn1Jdu = (18 - 17);
    {
        i = 0;
        while (IxXn72L -(428 - 427) >= i) {
            kz49PGn[i] = 0;
            MFgJwtY79[i] = 0;
            i = i + (584 - 583);
        }
    }
    while ((a != 0) || (ojBn1Jdu != 0)) {
        a = 0;
        ojBn1Jdu = 0;
        scanf ("%d %d", &a, &ojBn1Jdu);
        if ((!(0 != a)) && (!(0 != ojBn1Jdu)))
            break;
        MFgJwtY79[ojBn1Jdu] = MFgJwtY79[ojBn1Jdu] + 1;
        kz49PGn[a] = kz49PGn[a] + 1;
    }
    int AJV6H8vRn = 0;
    {
        i = 0;
        while (IxXn72L -1 >= i) {
            if ((kz49PGn[i] == 0) && (MFgJwtY79[i] == IxXn72L -1)) {
                printf ("%d", i);
                AJV6H8vRn = 1;
            }
            i = i + 1;
        }
    }
    if (AJV6H8vRn == 0)
        printf ("NOT FOUND");
}

