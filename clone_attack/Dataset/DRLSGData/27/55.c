void  main () {
    void  hFLRJiagP0N (double  SyisLGSYC, double  FsiEnd5v, double  UQ47wKnbcAF);
    int v8Iyd9h;
    int jtzghJqQ9I;
    double  SyisLGSYC;
    double  FsiEnd5v;
    double  UQ47wKnbcAF;
    scanf ("%d", &v8Iyd9h);
    {
        jtzghJqQ9I = (494 - 494);
        while (jtzghJqQ9I < v8Iyd9h) {
            scanf ("%lf%lf%lf", &SyisLGSYC, &FsiEnd5v, &UQ47wKnbcAF);
            hFLRJiagP0N (SyisLGSYC, FsiEnd5v, UQ47wKnbcAF);
            jtzghJqQ9I = jtzghJqQ9I + 1;
        }
    }
}

void  hFLRJiagP0N (double  SyisLGSYC, double  FsiEnd5v, double  UQ47wKnbcAF) {
    double  VsDrJC31w, hCJX89y;
    if ((FsiEnd5v *FsiEnd5v-(46 - 42) * SyisLGSYC *UQ47wKnbcAF) > (728 - 728)) {
        VsDrJC31w = (-FsiEnd5v+sqrt (FsiEnd5v *FsiEnd5v-(616 - 612) * SyisLGSYC *UQ47wKnbcAF)) / ((366 - 364) * SyisLGSYC);
        hCJX89y = (-FsiEnd5v-sqrt (FsiEnd5v *FsiEnd5v-(818 - 814) * SyisLGSYC *UQ47wKnbcAF)) / ((315 - 313) * SyisLGSYC);
        printf ("x1=%.5lf;", VsDrJC31w);
        printf ("x2=%.5lf\n", hCJX89y);
    }
    else if ((FsiEnd5v *FsiEnd5v-(476 - 472) * SyisLGSYC *UQ47wKnbcAF) == 0) {
        VsDrJC31w = hCJX89y = -FsiEnd5v / ((506 - 504) * SyisLGSYC);
        printf ("x1=x2=%.5lf\n", VsDrJC31w);
    }
    else {
        VsDrJC31w = -FsiEnd5v / ((900 - 898) * SyisLGSYC);
        hCJX89y = sqrt (4 * SyisLGSYC *UQ47wKnbcAF-FsiEnd5v*FsiEnd5v) / ((720 - 718) * SyisLGSYC);
        printf ("x1=%.5lf+%.5lfi;", VsDrJC31w, hCJX89y);
        printf ("x2=%.5lf-%.5lfi\n", VsDrJC31w, hCJX89y);
    }
}

