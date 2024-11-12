int main () {
    int WNBmds52;
    int tE5t2ONClz;
    int LfvZ69obKPu8;
    double  jbe29ZH;
    double  PpTJHsoA [(682 - 582)];
    double  Vv7f0kdz [(934 - 834)];
    double  LiGqtbPd47O2 [(1079 - 979)];
    jbe29ZH = (78 - 78);
    scanf ("%d", &WNBmds52);
    {
        tE5t2ONClz = 722 - 722;
        while (WNBmds52 > tE5t2ONClz) {
            scanf ("%lf%lf", &PpTJHsoA[tE5t2ONClz], &Vv7f0kdz[tE5t2ONClz]);
            tE5t2ONClz++;
        };
    }
    {
        tE5t2ONClz = 929 - 928;
        while (tE5t2ONClz > (682 - 682)) {
            {
                LfvZ69obKPu8 = 0;
                while (LfvZ69obKPu8 < tE5t2ONClz) {
                    LiGqtbPd47O2[LfvZ69obKPu8] = (PpTJHsoA[tE5t2ONClz] - PpTJHsoA[LfvZ69obKPu8]) * (PpTJHsoA[tE5t2ONClz] - PpTJHsoA[LfvZ69obKPu8]) + (Vv7f0kdz[tE5t2ONClz] - Vv7f0kdz[LfvZ69obKPu8]) * (Vv7f0kdz[tE5t2ONClz] - Vv7f0kdz[LfvZ69obKPu8]);
                    if (LiGqtbPd47O2[LfvZ69obKPu8] > jbe29ZH) {
                        jbe29ZH = LiGqtbPd47O2[LfvZ69obKPu8];
                    }
                    LfvZ69obKPu8++;
                };
            }
            tE5t2ONClz--;
        };
    }
    printf ("%.4lf", sqrt (jbe29ZH));
    return 0;
}

