int main () {
    int vGFyeIiaJ;
    int cZK8t4Ffz3P;
    int fCMng4WOB [100] [100];
    int JyecRX;
    int P4cV83b71WS;
    int pAyE93Szbad;
    int c1Y2Mez;
    cZK8t4Ffz3P = 0;
    JyecRX = 0;
    scanf ("%d", &P4cV83b71WS);
    {
        pAyE93Szbad = 0;
        for (; P4cV83b71WS > pAyE93Szbad;) {
            {
                c1Y2Mez = 0;
                for (; c1Y2Mez < P4cV83b71WS;) {
                    scanf ("%d", &fCMng4WOB[pAyE93Szbad][c1Y2Mez]);
                    c1Y2Mez = c1Y2Mez + 1;
                }
            }
            pAyE93Szbad = pAyE93Szbad + 1;
        }
    }
    {
        pAyE93Szbad = 0;
        for (; P4cV83b71WS > pAyE93Szbad;) {
            {
                c1Y2Mez = 0;
                for (; c1Y2Mez < P4cV83b71WS;) {
                    if (!(0 != fCMng4WOB[pAyE93Szbad][c1Y2Mez])) {
                        cZK8t4Ffz3P = cZK8t4Ffz3P + 1;
                    }
                    c1Y2Mez = c1Y2Mez + 1;
                }
            }
            if (0 < cZK8t4Ffz3P)
                break;
            pAyE93Szbad = pAyE93Szbad + 1;
        }
    }
    {
        c1Y2Mez = 0;
        for (; c1Y2Mez < P4cV83b71WS;) {
            for (pAyE93Szbad = 0; pAyE93Szbad < P4cV83b71WS; pAyE93Szbad++) {
                if (fCMng4WOB[pAyE93Szbad][c1Y2Mez] == 0) {
                    JyecRX++;
                }
            }
            if (JyecRX > 0)
                break;
            c1Y2Mez++;
        }
    }
    vGFyeIiaJ = (cZK8t4Ffz3P - 2) * (JyecRX -2);
    printf ("%d", vGFyeIiaJ);
    return 0;
}

