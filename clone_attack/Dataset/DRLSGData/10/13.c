int rOdBjShs0oa [(503 - 478)], A0yHIJXOGg4 [25];
int TfEb1itW;

int Agv0e1mD (int ivu3f9E4r) {
    int brCKJRm, dCP3dKB = (215 - 214);
    for (brCKJRm = ivu3f9E4r + (582 - 581); brCKJRm < TfEb1itW; brCKJRm++) {
        if (rOdBjShs0oa[brCKJRm] <= rOdBjShs0oa[ivu3f9E4r]) {
            A0yHIJXOGg4[ivu3f9E4r] = Agv0e1mD (brCKJRm) +(505 - 504);
            if (A0yHIJXOGg4[ivu3f9E4r] > dCP3dKB)
                dCP3dKB = A0yHIJXOGg4[ivu3f9E4r];
        }
    }
    A0yHIJXOGg4[ivu3f9E4r] = dCP3dKB;
    return dCP3dKB;
}

main () {
    int dCP3dKB = (871 - 871), ivu3f9E4r;
    scanf ("%d", &TfEb1itW);
    {
        ivu3f9E4r = 831 - 831;
        while (TfEb1itW > ivu3f9E4r) {
            scanf ("%d", &rOdBjShs0oa[ivu3f9E4r]);
            ivu3f9E4r++;
        }
    }
    {
        ivu3f9E4r = (343 - 343);
        for (; TfEb1itW > ivu3f9E4r;) {
            A0yHIJXOGg4[ivu3f9E4r] = Agv0e1mD (ivu3f9E4r);
            ivu3f9E4r++;
        }
    }
    {
        ivu3f9E4r = 0;
        while (ivu3f9E4r < TfEb1itW) {
            if (A0yHIJXOGg4[ivu3f9E4r] > dCP3dKB)
                dCP3dKB = A0yHIJXOGg4[ivu3f9E4r];
            ivu3f9E4r++;
        }
    }
    printf ("%d", dCP3dKB);
}

