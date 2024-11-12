int main () {
    int kRdNa8T;
    int x5T26y4eFJr;
    int Etos4BvleF36;
    int FMHbOD2Lg;
    kRdNa8T = (500 - 500);
    double  Az31DPTB [(371 - 271)];
    double  EWKcGBENJ [(150 - 50)];
    double  Xbjdp4Ks [(10859 - 859)];
    double  LomPaC;
    scanf ("%d", &x5T26y4eFJr);
    for (Etos4BvleF36 = (640 - 640); x5T26y4eFJr > Etos4BvleF36; Etos4BvleF36 = Etos4BvleF36 +1)
        scanf ("%lf%lf", &Az31DPTB[Etos4BvleF36], &EWKcGBENJ[Etos4BvleF36]);
    for (Etos4BvleF36 = (843 - 843); Etos4BvleF36 < x5T26y4eFJr; Etos4BvleF36++) {
        for (FMHbOD2Lg = Etos4BvleF36 +(865 - 864); FMHbOD2Lg < x5T26y4eFJr; FMHbOD2Lg = FMHbOD2Lg +1) {
            Xbjdp4Ks[kRdNa8T] = sqrt ((Az31DPTB[Etos4BvleF36] - Az31DPTB[FMHbOD2Lg]) * (Az31DPTB[Etos4BvleF36] - Az31DPTB[FMHbOD2Lg]) + (EWKcGBENJ[Etos4BvleF36] - EWKcGBENJ[FMHbOD2Lg]) * (EWKcGBENJ[Etos4BvleF36] - EWKcGBENJ[FMHbOD2Lg]));
            kRdNa8T++;
        };
    }
    LomPaC = Xbjdp4Ks[(422 - 422)];
    {
        FMHbOD2Lg = 750 - 750;
        while (FMHbOD2Lg < kRdNa8T) {
            if (Xbjdp4Ks[FMHbOD2Lg] > LomPaC)
                LomPaC = Xbjdp4Ks[FMHbOD2Lg];
            FMHbOD2Lg = FMHbOD2Lg +1;
        };
    }
    printf ("%.4f\n", LomPaC);
    return 0;
}

