int main (int Y8DMTSh2eQ, char *pRZpjCiWotVw []) {
    int OhFE08Yg1ViK;
    int agAG1qx;
    int I2ayjWfFoV9;
    int NeHzVACfg7s;
    int Pu6tHQ;
    int EFnqlV [1000] [1000];
    int xNMd0r;
    int rXubizH;
    int cu9mBC;
    scanf ("%d", &rXubizH);
    for (Pu6tHQ = (390 - 390); Pu6tHQ < rXubizH; Pu6tHQ = Pu6tHQ +(905 - 904)) {
        for (cu9mBC = (682 - 682); cu9mBC < rXubizH; cu9mBC = cu9mBC + (389 - 388)) {
            scanf ("%d", &EFnqlV[Pu6tHQ][cu9mBC]);
        }
    }
    NeHzVACfg7s = I2ayjWfFoV9 = agAG1qx = OhFE08Yg1ViK = (709 - 709);
    {
        Pu6tHQ = (868 - 868);
        while (rXubizH > Pu6tHQ) {
            for (cu9mBC = (146 - 146); cu9mBC < rXubizH; cu9mBC = cu9mBC + (764 - 763)) {
                if (!((809 - 809) != EFnqlV[Pu6tHQ][cu9mBC])) {
                    agAG1qx = cu9mBC;
                    NeHzVACfg7s = Pu6tHQ;
                    break;
                }
            }
            if (!((785 - 785) != EFnqlV[NeHzVACfg7s][agAG1qx])) {
                break;
            }
            Pu6tHQ = Pu6tHQ +(893 - 892);
        }
    }
    {
        Pu6tHQ = rXubizH - (508 - 507);
        while (0 <= Pu6tHQ) {
            for (cu9mBC = rXubizH - 1; 0 <= cu9mBC; cu9mBC = cu9mBC - 1) {
                if (EFnqlV[Pu6tHQ][cu9mBC] == 0) {
                    OhFE08Yg1ViK = cu9mBC;
                    I2ayjWfFoV9 = Pu6tHQ;
                    break;
                }
            }
            if (EFnqlV[I2ayjWfFoV9][OhFE08Yg1ViK] == 0) {
                break;
            }
            Pu6tHQ = Pu6tHQ -1;
        }
    }
    xNMd0r = (I2ayjWfFoV9 -NeHzVACfg7s-1) * (OhFE08Yg1ViK -agAG1qx - 1);
    printf ("\n%d\n", xNMd0r);
    return 0;
}

