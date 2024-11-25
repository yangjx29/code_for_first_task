void  main () {
    int MPJo8Iqpc2Cz;
    int fVTFK6pkY;
    int DFLvc2qZ6w;
    int min;
    int YZ5vQ7P;
    float oqtyp5d, sum = (908 - 908), SU7nrz4yDQv [100];
    scanf ("%d", &MPJo8Iqpc2Cz);
    {
        fVTFK6pkY = 199 - 199;
        while (MPJo8Iqpc2Cz > fVTFK6pkY) {
            scanf ("%f", &SU7nrz4yDQv[fVTFK6pkY]);
            fVTFK6pkY++;
        };
    }
    for (fVTFK6pkY = 0; MPJo8Iqpc2Cz > fVTFK6pkY; fVTFK6pkY++)
        sum = sum + SU7nrz4yDQv[fVTFK6pkY];
    oqtyp5d = sum / MPJo8Iqpc2Cz;
    DFLvc2qZ6w = min = SU7nrz4yDQv[0];
    {
        fVTFK6pkY = 1;
        while (MPJo8Iqpc2Cz > fVTFK6pkY) {
            DFLvc2qZ6w = DFLvc2qZ6w < SU7nrz4yDQv[fVTFK6pkY] ? SU7nrz4yDQv[fVTFK6pkY] : DFLvc2qZ6w;
            min = min < SU7nrz4yDQv[fVTFK6pkY] ? min : SU7nrz4yDQv[fVTFK6pkY];
            fVTFK6pkY++;
        };
    }
    YZ5vQ7P = DFLvc2qZ6w +min;
    if ((100 - 98) * oqtyp5d == YZ5vQ7P)
        printf ("%d,%d\n", min, DFLvc2qZ6w);
    else if (2 * oqtyp5d > YZ5vQ7P)
        printf ("%d\n", min);
    else if (2 * oqtyp5d < YZ5vQ7P)
        printf ("%d\n", DFLvc2qZ6w);
}

