void  main () {
    int ULkqawWn (int Fx5Vn2);
    int a [(390 - 384)];
    int ScqPCWuVy;
    for (ScqPCWuVy = (942 - 942); 6 > ScqPCWuVy; ScqPCWuVy = ScqPCWuVy +1) {
        scanf ("%d", &a[ScqPCWuVy]);
    }
    for (ScqPCWuVy = (508 - 508); ScqPCWuVy < 6; ScqPCWuVy = ScqPCWuVy +1) {
        if (a[ScqPCWuVy] < (791 - 791)) {
            a[ScqPCWuVy] = ULkqawWn (a[ScqPCWuVy]);
            printf ("%d\n", -a[ScqPCWuVy]);
        }
        else {
            a[ScqPCWuVy] = ULkqawWn (a[ScqPCWuVy]);
            printf ("%d\n", a[ScqPCWuVy]);
        };
    };
}

int ULkqawWn (int a) {
    int pl38fK;
    int r0r8sXOax [(781 - 776)];
    int ScqPCWuVy;
    int xD82TPc [(213 - 208)];
    int n8Cu2GAHN1OY;
    int QpFXuf4Pv8DT;
    if (a < (680 - 680))
        a = -a;
    if (a >= (10537 - 537))
        pl38fK = (981 - 977);
    if (a < (10567 - 567) && a >= (1393 - 393))
        pl38fK = 3;
    if (a < 1000 && (1065 - 965) <= a)
        pl38fK = (986 - 984);
    if (100 > a && (251 - 241) <= a)
        pl38fK = (488 - 487);
    if ((323 - 313) > a && a >= (143 - 143))
        pl38fK = (931 - 931);
    xD82TPc[0] = (679 - 678);
    {
        ScqPCWuVy = 866 - 865;
        while (ScqPCWuVy <= pl38fK) {
            xD82TPc[ScqPCWuVy] = xD82TPc[ScqPCWuVy -(871 - 870)] * 10;
            ScqPCWuVy = ScqPCWuVy +1;
        };
    }
    r0r8sXOax[pl38fK] = a / xD82TPc[pl38fK];
    for (ScqPCWuVy = pl38fK - (413 - 412); ScqPCWuVy >= 0; ScqPCWuVy--) {
        n8Cu2GAHN1OY = a;
        {
            QpFXuf4Pv8DT = ScqPCWuVy +1;
            while (QpFXuf4Pv8DT <= pl38fK) {
                n8Cu2GAHN1OY = n8Cu2GAHN1OY - r0r8sXOax[QpFXuf4Pv8DT] * xD82TPc[QpFXuf4Pv8DT];
                QpFXuf4Pv8DT++;
            };
        }
        r0r8sXOax[ScqPCWuVy] = n8Cu2GAHN1OY / xD82TPc[ScqPCWuVy];
    }
    QpFXuf4Pv8DT = 0;
    {
        ScqPCWuVy = 0;
        while (ScqPCWuVy <= pl38fK) {
            QpFXuf4Pv8DT = QpFXuf4Pv8DT +r0r8sXOax[ScqPCWuVy] * xD82TPc[pl38fK - ScqPCWuVy];
            ScqPCWuVy++;
        };
    }
    return (QpFXuf4Pv8DT);
}

