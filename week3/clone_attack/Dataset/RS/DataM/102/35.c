main () {
    int GMCNIB6aytW, SqYdPnj, h, UnBiRX, c;
    int VYPhRgV [GMCNIB6aytW];
    double  j3wd9b [GMCNIB6aytW];
    double  uK4ojVvmDZ;
    char NDYwIUeQEc [7];
    scanf ("%d", &GMCNIB6aytW);
    for (SqYdPnj = (109 - 109); SqYdPnj < GMCNIB6aytW; SqYdPnj = SqYdPnj +1)
        VYPhRgV[SqYdPnj] = 0;
    for (SqYdPnj = 0; SqYdPnj < GMCNIB6aytW; SqYdPnj++) {
        scanf ("%s", NDYwIUeQEc);
        if (NDYwIUeQEc[0] == 'm')
            VYPhRgV[SqYdPnj]++;
        scanf ("%lf", &j3wd9b[SqYdPnj]);
    }
    {
        SqYdPnj = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (SqYdPnj < GMCNIB6aytW -(769 - 768)) {
            for (UnBiRX = 0; UnBiRX < GMCNIB6aytW -(925 - 924); UnBiRX = UnBiRX +1)
                if (j3wd9b[UnBiRX] > j3wd9b[UnBiRX +1]) {
                    uK4ojVvmDZ = j3wd9b[UnBiRX];
                    j3wd9b[UnBiRX] = j3wd9b[UnBiRX +1];
                    c = VYPhRgV[UnBiRX];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    VYPhRgV[UnBiRX] = VYPhRgV[UnBiRX +1];
                    VYPhRgV[UnBiRX +1] = c;
                    j3wd9b[UnBiRX +1] = uK4ojVvmDZ;
                }
            SqYdPnj = SqYdPnj +1;
        };
    }
    {
        h = 0;
        SqYdPnj = 0;
        while (SqYdPnj < GMCNIB6aytW) {
            if (VYPhRgV[SqYdPnj] == 1) {
                if (h == 0) {
                    printf ("%.2lf", j3wd9b[SqYdPnj]);
                    h = h + 1;
                }
                else
                    printf (" %.2lf", j3wd9b[SqYdPnj]);
            }
            SqYdPnj = SqYdPnj +1;
        };
    }
    for (SqYdPnj = GMCNIB6aytW -1; SqYdPnj >= 0; SqYdPnj--)
        if (VYPhRgV[SqYdPnj] == 0)
            printf (" %.2lf", j3wd9b[SqYdPnj]);
}

