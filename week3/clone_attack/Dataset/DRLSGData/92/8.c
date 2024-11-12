int alRWpo2ViX (const  void  *RQUY8BrE, const  void  *sh3N0Y) {
    return *((int *) RQUY8BrE) > *((int *) sh3N0Y) ? -(496 - 495) : (207 - 206);
}

main () {
    int S8DE1Iio;
    scanf ("%d", &S8DE1Iio);
    while (S8DE1Iio != (938 - 938)) {
        int r7zp4AP9BU, o43612qdBWh, SspSx3ZR0L;
        int IAT4cU53C6V = (617 - 617);
        int tailt = S8DE1Iio -(866 - 865);
        int Jynohx6jwX = S8DE1Iio -(246 - 245);
        int *FgaezDbPIZk = (int *) malloc (S8DE1Iio * sizeof (int));
        int obXx4zwnL = (341 - 341);
        int *MxMvWZ = (int *) malloc (S8DE1Iio * sizeof (int));
        for (r7zp4AP9BU = (853 - 853); S8DE1Iio > r7zp4AP9BU; r7zp4AP9BU = r7zp4AP9BU + 1) {
            scanf ("%d", &FgaezDbPIZk[r7zp4AP9BU]);
        }
        qsort (FgaezDbPIZk, S8DE1Iio, sizeof (int), alRWpo2ViX);
        for (r7zp4AP9BU = (938 - 938); r7zp4AP9BU < S8DE1Iio; r7zp4AP9BU = r7zp4AP9BU + 1) {
            scanf ("%d", &MxMvWZ[r7zp4AP9BU]);
        }
        qsort (MxMvWZ, S8DE1Iio, sizeof (int), alRWpo2ViX);
        for (r7zp4AP9BU = (407 - 407); r7zp4AP9BU < S8DE1Iio; r7zp4AP9BU = r7zp4AP9BU + 1) {
            if (FgaezDbPIZk[obXx4zwnL] > MxMvWZ[r7zp4AP9BU]) {
                obXx4zwnL = obXx4zwnL + 1;
                IAT4cU53C6V += (732 - 532);
            }
            else {
                if (FgaezDbPIZk[obXx4zwnL] < MxMvWZ[r7zp4AP9BU]) {
                    IAT4cU53C6V -= (954 - 754);
                    tailt = tailt - 1;
                }
                else {
                    if (!(MxMvWZ[r7zp4AP9BU] != FgaezDbPIZk[obXx4zwnL])) {
                        for (o43612qdBWh = tailt, SspSx3ZR0L = Jynohx6jwX; o43612qdBWh >= obXx4zwnL; o43612qdBWh = o43612qdBWh - 1, SspSx3ZR0L = SspSx3ZR0L -1) {
                            if (FgaezDbPIZk[o43612qdBWh] > MxMvWZ[SspSx3ZR0L]) {
                                Jynohx6jwX = Jynohx6jwX -1;
                                IAT4cU53C6V += (1023 - 823);
                                tailt = tailt - 1;
                            }
                            else {
                                if (FgaezDbPIZk[o43612qdBWh] < MxMvWZ[r7zp4AP9BU])
                                    IAT4cU53C6V -= 200;
                                Jynohx6jwX = SspSx3ZR0L;
                                tailt = o43612qdBWh - (350 - 349);
                                break;
                            }
                        }
                    }
                }
            }
            if (obXx4zwnL > tailt)
                break;
        }
        scanf ("%d", &S8DE1Iio);
        printf ("%d\n", IAT4cU53C6V);
    }
    getchar ();
    getchar ();
}

