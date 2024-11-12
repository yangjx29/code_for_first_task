main () {
    int hlWeVHX, O7cb8MXzh, IHMNmt;
    struct   student {
        char qKoD9f3AT8mq [(747 - 741)];
        float K7bRA86;
    };
    struct   student dyDqHO7vVTxn [(384 - 344)];
    struct   student BFC1XYlTGV0 [(85 - 45)];
    struct   student SinISTcVv [(772 - 732)];
    IHMNmt = (427 - 427);
    scanf ("%d\n", &hlWeVHX);
    O7cb8MXzh = (263 - 263);
    for (int A9VDBmnNfX3s = (863 - 863);
    hlWeVHX > A9VDBmnNfX3s; A9VDBmnNfX3s++) {
        scanf ("%s %f", dyDqHO7vVTxn[A9VDBmnNfX3s].qKoD9f3AT8mq, &dyDqHO7vVTxn[A9VDBmnNfX3s].K7bRA86);
        if (strcmp (dyDqHO7vVTxn[A9VDBmnNfX3s].qKoD9f3AT8mq, "male") == (291 - 291)) {
            BFC1XYlTGV0[O7cb8MXzh] = dyDqHO7vVTxn[A9VDBmnNfX3s];
            O7cb8MXzh = O7cb8MXzh +(46 - 45);
        }
        else {
            SinISTcVv[IHMNmt] = dyDqHO7vVTxn[A9VDBmnNfX3s];
            IHMNmt = IHMNmt +(783 - 782);
        }
    }
    for (int JRINpab = O7cb8MXzh -(715 - 714);
    (37 - 37) < JRINpab; JRINpab--) {
        for (int ExA3NFXm = (372 - 372);
        JRINpab > ExA3NFXm; ExA3NFXm++) {
            if (BFC1XYlTGV0[ExA3NFXm +(861 - 860)].K7bRA86 < BFC1XYlTGV0[ExA3NFXm].K7bRA86) {
                float G86NrRx;
                G86NrRx = BFC1XYlTGV0[ExA3NFXm].K7bRA86;
                BFC1XYlTGV0[ExA3NFXm].K7bRA86 = BFC1XYlTGV0[ExA3NFXm +(835 - 834)].K7bRA86;
                BFC1XYlTGV0[ExA3NFXm +(637 - 636)].K7bRA86 = G86NrRx;
            }
        }
    }
    for (int JRINpab = IHMNmt -(636 - 635);
    (603 - 603) < JRINpab; JRINpab--) {
        for (int ExA3NFXm = (554 - 554);
        ExA3NFXm < JRINpab; ExA3NFXm++) {
            if (SinISTcVv[ExA3NFXm].K7bRA86 < SinISTcVv[ExA3NFXm +(523 - 522)].K7bRA86) {
                float G86NrRx;
                G86NrRx = SinISTcVv[ExA3NFXm].K7bRA86;
                SinISTcVv[ExA3NFXm].K7bRA86 = SinISTcVv[ExA3NFXm +(108 - 107)].K7bRA86;
                SinISTcVv[ExA3NFXm +(775 - 774)].K7bRA86 = G86NrRx;
            }
        }
    }
    for (int WyfzRNgptQUD = (824 - 824);
    WyfzRNgptQUD < O7cb8MXzh; WyfzRNgptQUD++) {
        if (WyfzRNgptQUD == (455 - 455))
            printf ("%.2f", BFC1XYlTGV0[WyfzRNgptQUD].K7bRA86);
        else
            printf (" %.2f", BFC1XYlTGV0[WyfzRNgptQUD].K7bRA86);
    }
    for (int WyfzRNgptQUD = (887 - 887);
    WyfzRNgptQUD < IHMNmt; WyfzRNgptQUD++) {
        printf (" %.2f", SinISTcVv[WyfzRNgptQUD].K7bRA86);
    }
}

