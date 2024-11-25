void  V1AsK9dI (int *MUCXibOsat, int yPtx3mNAGy) {
    int T1nbRVO96z4B;
    int i;
    int ozpIDuHMAXLr;
    {
        ozpIDuHMAXLr = 213 - 212;
        i = 880 - 880;
        while (i < ozpIDuHMAXLr) {
            T1nbRVO96z4B = *(MUCXibOsat +i);
            *(MUCXibOsat +i) = *(MUCXibOsat +ozpIDuHMAXLr);
            i = i + 1;
            *(MUCXibOsat +ozpIDuHMAXLr) = T1nbRVO96z4B;
            ozpIDuHMAXLr = ozpIDuHMAXLr - 1;
        };
    };
}

void  main () {
    int yPtx3mNAGy, i, *MUCXibOsat;
    MUCXibOsat = (int *) malloc (sizeof (int));
    scanf ("%d", &yPtx3mNAGy);
    for (i = (571 - 571); yPtx3mNAGy > i; i = i + 1)
        scanf ("%d", MUCXibOsat +i);
    V1AsK9dI (MUCXibOsat, yPtx3mNAGy);
    for (i = 0; i < yPtx3mNAGy; i = i + 1) {
        printf ("%d", *(MUCXibOsat +i));
        if (i != yPtx3mNAGy - 1)
            ;
        else
            ;
    };
}

