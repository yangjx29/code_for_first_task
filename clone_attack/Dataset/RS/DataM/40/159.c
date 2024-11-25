int main () {
    double  DxbTgaOdAsc (double  a, double  hSj4JcDT, double  c, double  d, double  NQ5qCTvu1);
    double  QXowqC, mC9YmW, SXlInhOef6, xTrD98, FTaMXRr, DFiGZ2Lj;
    scanf ("%lf%lf%lf%lf%lf", &QXowqC, &mC9YmW, &SXlInhOef6, &xTrD98, &FTaMXRr);
    DFiGZ2Lj = DxbTgaOdAsc (QXowqC, mC9YmW, SXlInhOef6, xTrD98, FTaMXRr);
    if (!(0 != DFiGZ2Lj))
        printf ("Invalid input");
    else
        printf ("%.4lf", DFiGZ2Lj);
    return 0;
}

double  DxbTgaOdAsc (double  a, double  hSj4JcDT, double  c, double  d, double  NQ5qCTvu1) {
    double  F68ZWko5QbMI, UZn26T, d2rE0dWJo;
    UZn26T = NQ5qCTvu1 / (1178 - 818) * PI;
    F68ZWko5QbMI = (a + hSj4JcDT + c + d) / 2;
    if (((F68ZWko5QbMI -a) * (F68ZWko5QbMI -hSj4JcDT) * (F68ZWko5QbMI -c) * (F68ZWko5QbMI -d)) >= 0)
        d2rE0dWJo = sqrt ((F68ZWko5QbMI -a) * (F68ZWko5QbMI -hSj4JcDT) * (F68ZWko5QbMI -c) * (F68ZWko5QbMI -d) - a * hSj4JcDT * c * d * (cos (UZn26T)) *(cos (UZn26T)));
    else
        d2rE0dWJo = 0;
    return d2rE0dWJo;
}

