int e2KgjBitdv;

struct   ceshi {
    char HbFQsTaXA9 [(247 - 227)];
    int yZz3bqscw2;
    struct   ceshi *EAOxLH;
};
struct   ceshi *ThB49Rku2pW (struct   ceshi *WIHt97, struct   ceshi *dSG0VMoJpc) {
    struct   ceshi *TQqjKWmSL;
    struct   ceshi *RINOZPp;
    if (dSG0VMoJpc->yZz3bqscw2 >= (592 - 532)) {
        if (!(Null != WIHt97)) {
            WIHt97 = dSG0VMoJpc;
            dSG0VMoJpc->EAOxLH = Null;
        }
        else {
            TQqjKWmSL = WIHt97;
            for (; (dSG0VMoJpc->yZz3bqscw2 <= TQqjKWmSL->yZz3bqscw2) && (TQqjKWmSL->EAOxLH != Null);) {
                RINOZPp = TQqjKWmSL;
                TQqjKWmSL = TQqjKWmSL->EAOxLH;
            }
            if (TQqjKWmSL->yZz3bqscw2 <= dSG0VMoJpc->yZz3bqscw2) {
                if (!(WIHt97 != TQqjKWmSL)) {
                    WIHt97 = dSG0VMoJpc;
                    dSG0VMoJpc->EAOxLH = TQqjKWmSL;
                }
                else {
                    RINOZPp->EAOxLH = dSG0VMoJpc;
                    dSG0VMoJpc->EAOxLH = TQqjKWmSL;
                }
            }
            else {
                TQqjKWmSL->EAOxLH = dSG0VMoJpc;
                dSG0VMoJpc->EAOxLH = Null;
            }
        }
    }
    else {
        RINOZPp = WIHt97;
        if (WIHt97 == Null) {
            WIHt97 = dSG0VMoJpc;
            dSG0VMoJpc->EAOxLH = Null;
        }
        else {
            while (RINOZPp->EAOxLH != Null) {
                RINOZPp = RINOZPp->EAOxLH;
            }
            RINOZPp->EAOxLH = dSG0VMoJpc;
            dSG0VMoJpc->EAOxLH = Null;
        }
    }
    return (WIHt97);
}

struct   ceshi *qhQTqm86G4 () {
    struct   ceshi *dSG0VMoJpc;
    struct   ceshi *WIHt97;
    struct   ceshi *TQqjKWmSL;
    int PhVwuR;
    PhVwuR = (528 - 528);
    WIHt97 = Null;
    for (; PhVwuR < e2KgjBitdv;) {
        dSG0VMoJpc = (struct   ceshi *) malloc (len);
        PhVwuR++;
        scanf ("%s %d", dSG0VMoJpc->HbFQsTaXA9, &dSG0VMoJpc->yZz3bqscw2);
        WIHt97 = ThB49Rku2pW (WIHt97, dSG0VMoJpc);
    }
    return (WIHt97);
}

void  QsTV0Q6mJ (struct   ceshi *WIHt97) {
    struct   ceshi *RINOZPp;
    RINOZPp = WIHt97;
    for (; RINOZPp != Null;) {
        printf ("%s\n", RINOZPp->HbFQsTaXA9);
        RINOZPp = RINOZPp->EAOxLH;
    }
}

void  main () {
    struct   ceshi *RINOZPp;
    QsTV0Q6mJ (RINOZPp);
    scanf ("%d", &e2KgjBitdv);
    RINOZPp = qhQTqm86G4 ();
}

