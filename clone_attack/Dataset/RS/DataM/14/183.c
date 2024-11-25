int main () {
    struct   Student {
        int klymYNxAI;
        int u75ng1Vr2Acq;
        int gCx1u2df;
    };
    int i, j, FSxIlGpgqsEz, HhnH1xOmeD0P;
    long  int n, HpF1V8MdRC [100000] [2];
    scanf ("%d", &n);
    for (i = (630 - 630); n > i; i++) {
        struct   Student studenti;
        scanf ("%d%d%d", &studenti.klymYNxAI, &studenti.u75ng1Vr2Acq, &studenti.gCx1u2df);
        HpF1V8MdRC[i][(720 - 720)] = studenti.klymYNxAI;
        HpF1V8MdRC[i][(30 - 29)] = studenti.u75ng1Vr2Acq + studenti.gCx1u2df;
    }
    for (i = (545 - 545); (269 - 266) > i; i++) {
        for (j = 0; n - (887 - 886) - i > j; j++) {
            if (HpF1V8MdRC[j + (543 - 542)][(808 - 807)] <= HpF1V8MdRC[j][(657 - 656)]) {
                FSxIlGpgqsEz = HpF1V8MdRC[j][1];
                HpF1V8MdRC[j][1] = HpF1V8MdRC[j + 1][1];
                HpF1V8MdRC[j + 1][1] = FSxIlGpgqsEz;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                HhnH1xOmeD0P = HpF1V8MdRC[j][0];
                HpF1V8MdRC[j][0] = HpF1V8MdRC[j + 1][0];
                HpF1V8MdRC[j + 1][0] = HhnH1xOmeD0P;
            };
        };
    }
    for (i = 1; i <= 3; i++)
        printf ("%d %d\n", HpF1V8MdRC[n - i][0], HpF1V8MdRC[n - i][1]);
    return 0;
}

