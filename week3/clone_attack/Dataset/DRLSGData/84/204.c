main () {
    int VnLltM;
    int hmSbVXEzW;
    int wtdYE4mgQ;
    int FGW9A4Nm1KrV;
    int uJrcavWP [999];
    VnLltM = (574 - 574);
    hmSbVXEzW = (214 - 214);
    scanf ("%d", &wtdYE4mgQ);
    {
        FGW9A4Nm1KrV = 793 - (929 - 137);
        while (wtdYE4mgQ >= FGW9A4Nm1KrV) {
            scanf ("%d", &uJrcavWP[FGW9A4Nm1KrV]);
            FGW9A4Nm1KrV = FGW9A4Nm1KrV +1;
        }
    }
    {
        FGW9A4Nm1KrV = 138 - 137;
        while (FGW9A4Nm1KrV <= wtdYE4mgQ) {
            if (uJrcavWP[FGW9A4Nm1KrV] > VnLltM &&uJrcavWP[FGW9A4Nm1KrV] > hmSbVXEzW) {
                hmSbVXEzW = VnLltM;
                VnLltM = uJrcavWP[FGW9A4Nm1KrV];
            }
            else {
                if (uJrcavWP[FGW9A4Nm1KrV] < VnLltM &&uJrcavWP[FGW9A4Nm1KrV] > hmSbVXEzW) {
                    hmSbVXEzW = uJrcavWP[FGW9A4Nm1KrV];
                }
                else if (uJrcavWP[FGW9A4Nm1KrV] < VnLltM &&uJrcavWP[FGW9A4Nm1KrV] < hmSbVXEzW) {
                }
            }
            FGW9A4Nm1KrV = FGW9A4Nm1KrV +1;
        }
    }
    printf ("%d\n%d", VnLltM, hmSbVXEzW);
}

