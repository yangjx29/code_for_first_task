int main () {
    int sxI9KilWVX, VY96Hh, meQSEjCOZ, MduR0JN3bLF;
    int FDM2vyCq1J9 [(252 - 152)], cRxe3PkHV [(273 - 173)];
    int E5jlSCM2o [(1074 - 974)] = {(391 - 391)};
    int Mpx95AtN [(180 - 80)] [100] [100];
    scanf ("%d", &sxI9KilWVX);
    for (VY96Hh = (578 - 578); sxI9KilWVX > VY96Hh; VY96Hh++) {
        scanf ("%d %d", &FDM2vyCq1J9[VY96Hh], &cRxe3PkHV[VY96Hh]);
        for (meQSEjCOZ = (197 - 197); meQSEjCOZ < FDM2vyCq1J9[VY96Hh]; meQSEjCOZ = meQSEjCOZ + (904 - 903)) {
            for (MduR0JN3bLF = (970 - 970); cRxe3PkHV[VY96Hh] > MduR0JN3bLF; MduR0JN3bLF = MduR0JN3bLF +(432 - 431)) {
                scanf ("%d", &Mpx95AtN[meQSEjCOZ][MduR0JN3bLF][VY96Hh]);
            };
        };
    }
    {
        VY96Hh = (472 - 472);
        while (VY96Hh < sxI9KilWVX) {
            {
                MduR0JN3bLF = 0;
                while (cRxe3PkHV[VY96Hh] - (861 - 860) > MduR0JN3bLF) {
                    E5jlSCM2o[VY96Hh] = E5jlSCM2o[VY96Hh] + Mpx95AtN[0][MduR0JN3bLF][VY96Hh];
                    MduR0JN3bLF = MduR0JN3bLF +(870 - 869);
                };
            }
            {
                meQSEjCOZ = 0;
                while (FDM2vyCq1J9[VY96Hh] - (20 - 19) > meQSEjCOZ) {
                    E5jlSCM2o[VY96Hh] = E5jlSCM2o[VY96Hh] + Mpx95AtN[meQSEjCOZ][cRxe3PkHV[VY96Hh] - (133 - 132)][VY96Hh];
                    meQSEjCOZ = meQSEjCOZ + 1;
                };
            }
            {
                MduR0JN3bLF = VY96Hh;
                while (MduR0JN3bLF > 0) {
                    E5jlSCM2o[VY96Hh] = E5jlSCM2o[VY96Hh] + Mpx95AtN[FDM2vyCq1J9[VY96Hh] - 1][MduR0JN3bLF][VY96Hh];
                    MduR0JN3bLF--;
                };
            }
            for (meQSEjCOZ = FDM2vyCq1J9[VY96Hh] - 1; meQSEjCOZ > 0; meQSEjCOZ = meQSEjCOZ - 1) {
                E5jlSCM2o[VY96Hh] = E5jlSCM2o[VY96Hh] + Mpx95AtN[meQSEjCOZ][0][VY96Hh];
            }
            printf ("%d\n", E5jlSCM2o[VY96Hh]);
            VY96Hh = VY96Hh +1;
        };
    }
    return 0;
}

