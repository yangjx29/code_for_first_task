void  main () {
    float sYev9rKQ4PB [9];
    int MFw3PXi4eAh [9];
    int KTENMeF, KsWmUYh6vuc;
    int s5d1n3gi [9];
    float TsIrQNZ7 (int s5d1n3gi, int MFw3PXi4eAh);
    float bInZ1Yma = 0;
    int Zy1CBH = 0;
    float L4pO2xGB;
    scanf ("%d", &KTENMeF);
    {
        KsWmUYh6vuc = 500 - 500;
        while (KTENMeF > KsWmUYh6vuc) {
            scanf ("%d", &s5d1n3gi[KsWmUYh6vuc]);
            KsWmUYh6vuc = KsWmUYh6vuc +1;
        };
    }
    {
        KsWmUYh6vuc = 0;
        while (KTENMeF > KsWmUYh6vuc) {
            scanf ("%d", &MFw3PXi4eAh[KsWmUYh6vuc]);
            KsWmUYh6vuc = KsWmUYh6vuc +1;
        };
    }
    for (KsWmUYh6vuc = 0; KTENMeF > KsWmUYh6vuc; KsWmUYh6vuc = KsWmUYh6vuc +1)
        sYev9rKQ4PB[KsWmUYh6vuc] = TsIrQNZ7 (s5d1n3gi[KsWmUYh6vuc], MFw3PXi4eAh[KsWmUYh6vuc]);
    for (KsWmUYh6vuc = 0; KTENMeF > KsWmUYh6vuc; KsWmUYh6vuc = KsWmUYh6vuc +1) {
        bInZ1Yma += sYev9rKQ4PB[KsWmUYh6vuc];
        Zy1CBH += s5d1n3gi[KsWmUYh6vuc];
    }
    L4pO2xGB = bInZ1Yma / Zy1CBH;
    printf ("%.2f\n", L4pO2xGB);
}

float TsIrQNZ7 (int s5d1n3gi, int MFw3PXi4eAh) {
    float sYev9rKQ4PB;
    if (90 <= MFw3PXi4eAh &&(385 - 285) >= MFw3PXi4eAh)
        sYev9rKQ4PB = 4.0;
    else if (85 <= MFw3PXi4eAh &&89 >= MFw3PXi4eAh)
        sYev9rKQ4PB = 3.7;
    else if (82 <= MFw3PXi4eAh &&84 >= MFw3PXi4eAh)
        sYev9rKQ4PB = 3.3;
    else if (78 <= MFw3PXi4eAh &&81 >= MFw3PXi4eAh)
        sYev9rKQ4PB = 3.0;
    else if ((287 - 212) <= MFw3PXi4eAh &&MFw3PXi4eAh <= 77)
        sYev9rKQ4PB = 2.7;
    else if (MFw3PXi4eAh >= 72 && MFw3PXi4eAh <= 74)
        sYev9rKQ4PB = 2.3;
    else if (MFw3PXi4eAh >= 68 && MFw3PXi4eAh <= 71)
        sYev9rKQ4PB = 2.0;
    else if (MFw3PXi4eAh >= 64 && MFw3PXi4eAh <= 67)
        sYev9rKQ4PB = 1.5;
    else if (MFw3PXi4eAh >= 60 && MFw3PXi4eAh <= 63)
        sYev9rKQ4PB = 1.0;
    else
        sYev9rKQ4PB = 0;
    return (sYev9rKQ4PB * s5d1n3gi);
}

