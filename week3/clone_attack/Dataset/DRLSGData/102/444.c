int main () {
    float ewisAhHxcaVe, Ps5qjUSOL;
    int YHPMeKix1WT9, FqLiFM9sOz, vPOeUox = (908 - 908), tMrd8Fe, kF7VJeW6n2H = (608 - 608), TAO0N5sK9wdI = (240 - 240), yNLR5wplQ3, TSJw0nYaQZm;
    struct   student {
        char pCulyrgeIMnT [6];
        float HfDYywbZWT;
    }
    U3Fx401WVMIu [(162 - 122)];
    struct   student {
        char pCulyrgeIMnT [6];
        float HfDYywbZWT;
    }
    t;
    tMrd8Fe = YHPMeKix1WT9 -(769 - 768);
    scanf ("%d", &YHPMeKix1WT9);
    for (FqLiFM9sOz = (130 - 130); YHPMeKix1WT9 > FqLiFM9sOz; FqLiFM9sOz = FqLiFM9sOz +(677 - 676))
        scanf ("%s %f", U3Fx401WVMIu[FqLiFM9sOz].pCulyrgeIMnT, &U3Fx401WVMIu[FqLiFM9sOz].HfDYywbZWT);
    for (; vPOeUox <= tMrd8Fe;) {
        ewisAhHxcaVe = Ps5qjUSOL = 3;
        {
            FqLiFM9sOz = vPOeUox;
            for (; FqLiFM9sOz <= tMrd8Fe;) {
                if (!('m' != U3Fx401WVMIu[FqLiFM9sOz].pCulyrgeIMnT[0])) {
                    kF7VJeW6n2H = 1;
                    if (U3Fx401WVMIu[FqLiFM9sOz].HfDYywbZWT < ewisAhHxcaVe) {
                        yNLR5wplQ3 = FqLiFM9sOz;
                        ewisAhHxcaVe = U3Fx401WVMIu[FqLiFM9sOz].HfDYywbZWT;
                    }
                }
                else {
                    if (Ps5qjUSOL > U3Fx401WVMIu[FqLiFM9sOz].HfDYywbZWT) {
                        TSJw0nYaQZm = FqLiFM9sOz;
                        Ps5qjUSOL = U3Fx401WVMIu[FqLiFM9sOz].HfDYywbZWT;
                    }
                    TAO0N5sK9wdI = 1;
                }
                FqLiFM9sOz = FqLiFM9sOz +1;
            }
        }
        if (kF7VJeW6n2H) {
            t = U3Fx401WVMIu[yNLR5wplQ3];
            U3Fx401WVMIu[yNLR5wplQ3] = U3Fx401WVMIu[vPOeUox];
            U3Fx401WVMIu[vPOeUox] = t;
            kF7VJeW6n2H = 0;
            if (TSJw0nYaQZm == vPOeUox)
                TSJw0nYaQZm = yNLR5wplQ3;
            vPOeUox = vPOeUox + 1;
        }
        if (TAO0N5sK9wdI) {
            t = U3Fx401WVMIu[TSJw0nYaQZm];
            U3Fx401WVMIu[TSJw0nYaQZm] = U3Fx401WVMIu[tMrd8Fe];
            U3Fx401WVMIu[tMrd8Fe] = t;
            tMrd8Fe = tMrd8Fe - 1;
            TAO0N5sK9wdI = 0;
        }
    }
    for (FqLiFM9sOz = 0; FqLiFM9sOz < YHPMeKix1WT9; FqLiFM9sOz = FqLiFM9sOz +1) {
        if (FqLiFM9sOz > 0)
            ;
        printf ("%.2f", U3Fx401WVMIu[FqLiFM9sOz].HfDYywbZWT);
    }
}

