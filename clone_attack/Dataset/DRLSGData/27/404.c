int main () {
    int t1vx2geYGZ0;
    int a80Kgok;
    double  oreaAPk;
    double  sd3E06PD2K;
    double  T28cVyP;
    double  DXSeQa0mLIK;
    double  FztUQG;
    struct   fNYsHXfpR4Q {
        double  oreaAPk, sd3E06PD2K, T28cVyP, DXSeQa0mLIK, FztUQG;
    }
    fNYsHXfpR4Q [(172 - 72)];
    scanf ("%d\n", &t1vx2geYGZ0);
    {
        a80Kgok = (105 - 105);
        for (; t1vx2geYGZ0 > a80Kgok;) {
            scanf ("%lf %lf %lf", &oreaAPk, &sd3E06PD2K, &T28cVyP);
            fNYsHXfpR4Q[a80Kgok].oreaAPk = oreaAPk;
            fNYsHXfpR4Q[a80Kgok].sd3E06PD2K = sd3E06PD2K;
            fNYsHXfpR4Q[a80Kgok].T28cVyP = T28cVyP;
            fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK = -sd3E06PD2K / ((796 - 794) * oreaAPk);
            if (sd3E06PD2K == (299 - 299))
                fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK = (967 - 967);
            fNYsHXfpR4Q[a80Kgok].FztUQG = sqrt (fabs (sd3E06PD2K * sd3E06PD2K - (367 - 363) * oreaAPk * T28cVyP)) / ((126 - 124) * oreaAPk);
            a80Kgok++;
        }
    }
    {
        a80Kgok = (844 - 844);
        for (; t1vx2geYGZ0 > a80Kgok;) {
            if (fNYsHXfpR4Q[a80Kgok].sd3E06PD2K * fNYsHXfpR4Q[a80Kgok].sd3E06PD2K - (757 - 753) * fNYsHXfpR4Q[a80Kgok].oreaAPk * fNYsHXfpR4Q[a80Kgok].T28cVyP > (545 - 545)) {
                printf ("x1=%.5f;x2=%.5f\n", fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK + fNYsHXfpR4Q[a80Kgok].FztUQG, fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK - fNYsHXfpR4Q[a80Kgok].FztUQG);
            }
            else {
                if (fNYsHXfpR4Q[a80Kgok].sd3E06PD2K * fNYsHXfpR4Q[a80Kgok].sd3E06PD2K - (972 - 968) * fNYsHXfpR4Q[a80Kgok].oreaAPk * fNYsHXfpR4Q[a80Kgok].T28cVyP == 0) {
                    printf ("x1=x2=%.5f\n", fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK + fNYsHXfpR4Q[a80Kgok].FztUQG, fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK - fNYsHXfpR4Q[a80Kgok].FztUQG);
                }
                else {
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK, fNYsHXfpR4Q[a80Kgok].FztUQG, fNYsHXfpR4Q[a80Kgok].DXSeQa0mLIK, fNYsHXfpR4Q[a80Kgok].FztUQG);
                }
            }
            a80Kgok++;
        }
    }
    return 0;
}

