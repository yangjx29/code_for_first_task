int main () {
    double  JufEce;
    double  Ct2l6g;
    double  GTIew92hOyz;
    double  b;
    double  ZOCWub48QkH;
    double  FD4IoOhN;
    double  CBV6SnigYaj;
    double  QCwba0QVW (double  GTIew92hOyz, double  b, double  ZOCWub48QkH, double  FD4IoOhN, double  CBV6SnigYaj);
    int GvVRgNDWf3;
    int EVXApUR2;
    int I0gwJybMO;
    int j;
    int Rbk5vlSy;
    int yQT8lbOP;
    scanf ("%lf%lf%lf%lf%lf", &GTIew92hOyz, &b, &ZOCWub48QkH, &FD4IoOhN, &CBV6SnigYaj);
    JufEce = QCwba0QVW (GTIew92hOyz, b, ZOCWub48QkH, FD4IoOhN, CBV6SnigYaj);
    if (!(0 == JufEce))
        printf ("%.4lf", JufEce);
    else
        ;
}

double  QCwba0QVW (double  GTIew92hOyz, double  b, double  ZOCWub48QkH, double  FD4IoOhN, double  CBV6SnigYaj) {
    double  Ct2l6g;
    double  EVXApUR2;
    double  GvVRgNDWf3;
    GvVRgNDWf3 = CBV6SnigYaj / 2 / 360 * 2 * P;
    Ct2l6g = (GTIew92hOyz +b + ZOCWub48QkH +FD4IoOhN) / 2;
    if (((Ct2l6g -GTIew92hOyz) * (Ct2l6g -b) * (Ct2l6g -ZOCWub48QkH) * (Ct2l6g -FD4IoOhN) - GTIew92hOyz *b * ZOCWub48QkH *FD4IoOhN*cos (GvVRgNDWf3) * cos (GvVRgNDWf3)) > 0)
        EVXApUR2 = sqrt ((Ct2l6g -GTIew92hOyz) * (Ct2l6g -b) * (Ct2l6g -ZOCWub48QkH) * (Ct2l6g -FD4IoOhN) - GTIew92hOyz *b * ZOCWub48QkH *FD4IoOhN*cos (GvVRgNDWf3) * cos (GvVRgNDWf3));
    else
        EVXApUR2 = 0;
    return (EVXApUR2);
}

