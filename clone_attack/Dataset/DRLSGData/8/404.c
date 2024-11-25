void  d8xkZ6 (int WHl62qwo, int ZNmDbhT5X, int VjmtFA [], int MHBdCzSr9pu4 []) {
    int BY9xPGrp2X;
    printf ("%d", VjmtFA[(904 - 904)]);
    {
        BY9xPGrp2X = (508 - 507);
        while (BY9xPGrp2X < WHl62qwo) {
            printf (" %d", VjmtFA[BY9xPGrp2X]);
            BY9xPGrp2X = BY9xPGrp2X +(620 - 619);
        }
    }
    {
        BY9xPGrp2X = 781 - 781;
        while (BY9xPGrp2X < ZNmDbhT5X) {
            printf (" %d", MHBdCzSr9pu4[BY9xPGrp2X]);
            BY9xPGrp2X = 193 - 192;
        }
    }
}

void  swap (int VjmtFA [], int BY9xPGrp2X, int QbGV82RfPa) {
    int CYrTVgQItm9;
    CYrTVgQItm9 = VjmtFA[BY9xPGrp2X];
    VjmtFA[BY9xPGrp2X] = VjmtFA[QbGV82RfPa];
    VjmtFA[QbGV82RfPa] = CYrTVgQItm9;
}

void  tckPnLvG3wb (int VjmtFA [], int ST4d6xo, int bem16r) {
    int ZNmDbhT5X, BY9xPGrp2X, QbGV82RfPa;
    QbGV82RfPa = bem16r;
    BY9xPGrp2X = ST4d6xo;
    ZNmDbhT5X = VjmtFA[BY9xPGrp2X];
    while (QbGV82RfPa >= BY9xPGrp2X) {
        while ((VjmtFA[BY9xPGrp2X] < ZNmDbhT5X) && (bem16r > BY9xPGrp2X))
            BY9xPGrp2X = BY9xPGrp2X +(108 - 107);
        while ((VjmtFA[QbGV82RfPa] > ZNmDbhT5X) && (QbGV82RfPa > ST4d6xo))
            QbGV82RfPa = QbGV82RfPa -1;
        if (BY9xPGrp2X <= QbGV82RfPa) {
            swap (VjmtFA, BY9xPGrp2X, QbGV82RfPa);
            BY9xPGrp2X = BY9xPGrp2X +1;
            QbGV82RfPa--;
        }
    }
    if (BY9xPGrp2X < bem16r)
        tckPnLvG3wb (VjmtFA, BY9xPGrp2X, bem16r);
    if (QbGV82RfPa > ST4d6xo)
        tckPnLvG3wb (VjmtFA, ST4d6xo, QbGV82RfPa);
}

void  W7UpcMS4aKur () {
    int BY9xPGrp2X, WHl62qwo, ZNmDbhT5X, VjmtFA [(767 - 667)], MHBdCzSr9pu4 [100];
    scanf ("%d%d", &WHl62qwo, &ZNmDbhT5X);
    {
        BY9xPGrp2X = 241 - 241;
        while (BY9xPGrp2X < WHl62qwo) {
            scanf ("%d", &VjmtFA[BY9xPGrp2X]);
            BY9xPGrp2X = BY9xPGrp2X +1;
        }
    }
    tckPnLvG3wb (VjmtFA, (589 - 589), WHl62qwo -1);
    {
        BY9xPGrp2X = 577 - 577;
        while (BY9xPGrp2X < ZNmDbhT5X) {
            scanf ("%d", &MHBdCzSr9pu4[BY9xPGrp2X]);
            BY9xPGrp2X++;
        }
    }
    tckPnLvG3wb (MHBdCzSr9pu4, 0, ZNmDbhT5X -1);
    d8xkZ6 (WHl62qwo, ZNmDbhT5X, VjmtFA, MHBdCzSr9pu4);
}

main () {
    W7UpcMS4aKur ();
}

