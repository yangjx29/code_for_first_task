void  main () {
    int KS9eTNWia, LmYkl8PyFp, IT0bzC84PaZ, TnWfVlkP5i8m, ZGybgNB6Ojv, T0WRrck, GNrIbOgZ, BZ72xzKEF8aB;
    BZ72xzKEF8aB = 6;
    scanf ("%d", &GNrIbOgZ);
    while (BZ72xzKEF8aB <= GNrIbOgZ) {
        KS9eTNWia = 3;
    judx :
        ZGybgNB6Ojv = sqrt (KS9eTNWia);
        IT0bzC84PaZ = 3;
        while (ZGybgNB6Ojv >= IT0bzC84PaZ) {
            if (KS9eTNWia % IT0bzC84PaZ != 0)
                IT0bzC84PaZ = IT0bzC84PaZ +2;
            else {
            judy :
                KS9eTNWia = KS9eTNWia +2;
                goto judx;
            };
        }
        TnWfVlkP5i8m = 3;
        LmYkl8PyFp = BZ72xzKEF8aB -KS9eTNWia;
        T0WRrck = sqrt (LmYkl8PyFp);
        for (; TnWfVlkP5i8m <= T0WRrck;) {
            if (LmYkl8PyFp % TnWfVlkP5i8m != 0)
                TnWfVlkP5i8m = TnWfVlkP5i8m +2;
            else
                goto judy;
        }
        printf ("%d=%d+%d\n", BZ72xzKEF8aB, KS9eTNWia, LmYkl8PyFp);
        BZ72xzKEF8aB = BZ72xzKEF8aB +2;
    };
}

