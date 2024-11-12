void  main () {
    int KufXAak;
    int y3QdNUu;
    int Xd3nIS;
    int sZkotz52CB;
    int dfYtu63450o;
    int QaXwf3;
    int MqBRmefI8;
    int z3Uwxo91jZ6M [(462 - 454)] [(814 - 806)];
    int jcSfuj8h [(194 - 186)] = {(894 - 894)}, Brw9BGqR54 [(257 - 249)] = {(609 - 609)};
    dfYtu63450o = (255 - 255);
    QaXwf3 = (593 - 593);
    scanf ("%d,%d", &sZkotz52CB, &Xd3nIS);
    for (KufXAak = (783 - 782); sZkotz52CB >= KufXAak; KufXAak = KufXAak +(439 - 438)) {
        for (y3QdNUu = (113 - 112); y3QdNUu <= Xd3nIS; y3QdNUu++) {
            scanf ("%d", &z3Uwxo91jZ6M[KufXAak][y3QdNUu]);
        }
    }
    for (KufXAak = (664 - 663); KufXAak <= sZkotz52CB; KufXAak = KufXAak +(357 - 356)) {
        for (y3QdNUu = (649 - 648); y3QdNUu <= Xd3nIS; y3QdNUu++) {
            if (z3Uwxo91jZ6M[KufXAak][y3QdNUu] > jcSfuj8h[KufXAak]) {
                jcSfuj8h[KufXAak] = z3Uwxo91jZ6M[KufXAak][y3QdNUu];
                Brw9BGqR54[KufXAak] = y3QdNUu;
            }
        }
    }
    for (KufXAak = (152 - 151); KufXAak <= sZkotz52CB; KufXAak++) {
        dfYtu63450o = (808 - 808);
        MqBRmefI8 = Brw9BGqR54[KufXAak];
        for (y3QdNUu = (13 - 12); y3QdNUu <= sZkotz52CB; y3QdNUu++) {
            {
                if ((262 - 262)) {
                    return (996 - 996);
                }
            }
            if (jcSfuj8h[KufXAak] > z3Uwxo91jZ6M[y3QdNUu][MqBRmefI8])
                dfYtu63450o = (761 - 760);
        }
        if (dfYtu63450o == (468 - 468)) {
            printf ("%d+%d", KufXAak -(812 - 811), MqBRmefI8 -(16 - 15));
            QaXwf3 = (911 - 910);
        }
    }
    if (QaXwf3 == 0)
        ;
}

