int main () {
    char zN0M3WSfeZhk [1000];
    char RAI0pfL395E8 [1000];
    int UKw8vdi6PC;
    int Psg1aFIRJQ4W;
    int XkaOugADVn;
    int vpwMCOz2Wo;
    int TE8VdFNHR;
    int m2cEa4wKTDmR;
    int RAMOPb0GuZp;
    UKw8vdi6PC = 0;
    Psg1aFIRJQ4W = 0;
    scanf ("%s %s", zN0M3WSfeZhk, RAI0pfL395E8);
    TE8VdFNHR = strlen (zN0M3WSfeZhk);
    m2cEa4wKTDmR = strlen (RAI0pfL395E8);
    for (XkaOugADVn = 0; XkaOugADVn < m2cEa4wKTDmR; XkaOugADVn = XkaOugADVn +1) {
        UKw8vdi6PC = 0;
        if (RAI0pfL395E8[XkaOugADVn] == zN0M3WSfeZhk[0]) {
            for (vpwMCOz2Wo = 0; vpwMCOz2Wo < TE8VdFNHR; vpwMCOz2Wo = vpwMCOz2Wo + 1) {
                if (RAI0pfL395E8[XkaOugADVn +vpwMCOz2Wo] == zN0M3WSfeZhk[Psg1aFIRJQ4W++])
                    UKw8vdi6PC = UKw8vdi6PC +1;
            };
        }
        if (UKw8vdi6PC == TE8VdFNHR)
            RAMOPb0GuZp = XkaOugADVn;
    }
    scanf ("%d", &XkaOugADVn);
    printf ("%d\n", RAMOPb0GuZp);
    return 0;
}

