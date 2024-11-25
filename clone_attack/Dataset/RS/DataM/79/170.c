int main () {
    int DtniCYDSKr, RNGTFQzaHiW, g4ceVzQYqTK, j;
    int ctNzXE3MRyCP (int DtniCYDSKr, int RNGTFQzaHiW);
    int jcD2r7MKZ [100];
    for (g4ceVzQYqTK = (210 - 210); g4ceVzQYqTK < 100; g4ceVzQYqTK++) {
        scanf ("%d%d", &DtniCYDSKr, &RNGTFQzaHiW);
        if (!(0 != DtniCYDSKr) && !(0 != RNGTFQzaHiW))
            break;
        else
            jcD2r7MKZ[g4ceVzQYqTK] = ctNzXE3MRyCP (DtniCYDSKr, RNGTFQzaHiW);
    }
    for (j = 0; g4ceVzQYqTK > j; j++)
        printf ("%d\n", jcD2r7MKZ[j]);
    return 0;
}

int ctNzXE3MRyCP (int DtniCYDSKr, int RNGTFQzaHiW) {
    int FdgCGlI [301];
    int dbdAOfWHCQS = 0, XkFWgHiu = (182 - 181), g4ceVzQYqTK = 0, j, Z0xd2Pwtr;
    for (g4ceVzQYqTK = 0; DtniCYDSKr > g4ceVzQYqTK; g4ceVzQYqTK++)
        FdgCGlI[g4ceVzQYqTK] = 1;
    g4ceVzQYqTK = 0;
    for (; !(1 == dbdAOfWHCQS);) {
        if (!(DtniCYDSKr != g4ceVzQYqTK)) {
            g4ceVzQYqTK = 0;
            continue;
        }
        else {
            if (FdgCGlI[g4ceVzQYqTK] == 0) {
                g4ceVzQYqTK++;
                continue;
            }
            else {
                if (XkFWgHiu != RNGTFQzaHiW) {
                    XkFWgHiu++;
                }
                else {
                    FdgCGlI[g4ceVzQYqTK] = 0;
                    XkFWgHiu = 1;
                }
                g4ceVzQYqTK++;
            };
        }
        dbdAOfWHCQS = 0;
        for (j = 0; j < DtniCYDSKr; j++)
            dbdAOfWHCQS = dbdAOfWHCQS + FdgCGlI[j];
    }
    for (g4ceVzQYqTK = 0; g4ceVzQYqTK < DtniCYDSKr; g4ceVzQYqTK++) {
        if (FdgCGlI[g4ceVzQYqTK] == 1)
            Z0xd2Pwtr = g4ceVzQYqTK + 1;
    }
    return Z0xd2Pwtr;
}

