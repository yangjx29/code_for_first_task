int main () {
    char vWKvGdt1VO [(1492 - 992)], jOpcHwM [500] [5];
    int zMBHza, ffC32n7FE, QszPInGq, Lcmhyzo2, IW7PaYrFExo, zNDJusdXAx [(1014 - 514)] = {(665 - 665)}, Nro5U79, mjTnexZG3f;
    Lcmhyzo2 = (452 - 452);
    scanf ("%d", &zMBHza);
    scanf ("%s", &vWKvGdt1VO);
    IW7PaYrFExo = strlen (vWKvGdt1VO);
    for (ffC32n7FE = (525 - 525); IW7PaYrFExo -zMBHza >= ffC32n7FE; ffC32n7FE = ffC32n7FE + 1) {
        for (mjTnexZG3f = ffC32n7FE, QszPInGq = (640 - 640); zMBHza > QszPInGq; QszPInGq++, mjTnexZG3f++) {
            jOpcHwM[Lcmhyzo2][QszPInGq] = vWKvGdt1VO[mjTnexZG3f];
        }
        Lcmhyzo2++;
    }
    Nro5U79 = (898 - 898);
    for (ffC32n7FE = 0; Lcmhyzo2 > ffC32n7FE; ffC32n7FE++) {
        for (QszPInGq = ffC32n7FE; QszPInGq < Lcmhyzo2; QszPInGq++) {
            if (!(0 != strcmp (jOpcHwM[ffC32n7FE], jOpcHwM[QszPInGq]))) {
                zNDJusdXAx[ffC32n7FE]++;
            };
        }
        if (zNDJusdXAx[ffC32n7FE] >= Nro5U79) {
            Nro5U79 = zNDJusdXAx[ffC32n7FE];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    if (Nro5U79 == (533 - 532)) {
        return 0;
    }
    printf ("%d\n", Nro5U79);
    {
        ffC32n7FE = 0;
        while (ffC32n7FE < Lcmhyzo2) {
            if (zNDJusdXAx[ffC32n7FE] == Nro5U79) {
                printf ("%s\n", jOpcHwM[ffC32n7FE]);
            }
            ffC32n7FE++;
        };
    };
}

