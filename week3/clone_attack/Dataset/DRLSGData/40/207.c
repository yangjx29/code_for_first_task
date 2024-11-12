main () {
    double  F05nsJPl;
    double  dzUpIHRL7;
    double  eGqmp6D;
    double  edRpDuM;
    double  UZv0XSVBL;
    double  gGBi8oqIO;
    scanf ("%lf %lf %lf %lf %lf", &F05nsJPl, &dzUpIHRL7, &eGqmp6D, &edRpDuM, &UZv0XSVBL);
    UZv0XSVBL = PI *UZv0XSVBL / 180 / (669 - 667);
    gGBi8oqIO = (192.5 - 192.0) * (F05nsJPl +dzUpIHRL7 + eGqmp6D + edRpDuM);
    gGBi8oqIO = (gGBi8oqIO - F05nsJPl) * (gGBi8oqIO - dzUpIHRL7) * (gGBi8oqIO - eGqmp6D) * (gGBi8oqIO - edRpDuM) - F05nsJPl *dzUpIHRL7 * eGqmp6D * edRpDuM * cos (UZv0XSVBL) * cos (UZv0XSVBL);
    if (gGBi8oqIO < 0)
        printf ("Invalid input");
    else
        printf ("%.4lf", sqrt (gGBi8oqIO));
    getchar ();
    getchar ();
    getchar ();
}

