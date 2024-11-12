int main () {
    int HTzyAM9S;
    int zKA2Gbe6R8;
    int VDrIR3MFCcL;
    int krwqeYUga [MAX];
    int LqLBRShDGC;
    int wGT6wzBRx1sg;
    while (scanf ("%d%d", &zKA2Gbe6R8, &HTzyAM9S) != EOF) {
        if (HTzyAM9S == (958 - 958) && !((82 - 82) != zKA2Gbe6R8))
            break;
        {
            VDrIR3MFCcL = 0;
            while (VDrIR3MFCcL < zKA2Gbe6R8) {
                krwqeYUga[VDrIR3MFCcL] = 1;
                VDrIR3MFCcL++;
            }
        }
        LqLBRShDGC = 0;
        wGT6wzBRx1sg = -1;
        while (LqLBRShDGC != (zKA2Gbe6R8 - 1)) {
            for (VDrIR3MFCcL = 0; HTzyAM9S > VDrIR3MFCcL;) {
                wGT6wzBRx1sg++;
                if (krwqeYUga[wGT6wzBRx1sg % zKA2Gbe6R8] != 0)
                    VDrIR3MFCcL++;
            }
            krwqeYUga[wGT6wzBRx1sg % zKA2Gbe6R8] = 0;
            LqLBRShDGC++;
        }
        {
            VDrIR3MFCcL = 0;
            while (VDrIR3MFCcL < zKA2Gbe6R8) {
                if (krwqeYUga[VDrIR3MFCcL] != 0)
                    break;
                VDrIR3MFCcL++;
            }
        }
        printf ("%d\n", VDrIR3MFCcL +1);
    }
    return 0;
}

