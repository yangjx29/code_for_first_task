double  eRszhNcvoq (double  a, double  UUNzPCkaT, double  lVetFui, double  d, double  degree) {
    double  s = (a + UUNzPCkaT +lVetFui + d) / 2;
    double  oMSLweFoQENs = degree / 360 * 3.1415926;
    double  Ad2nYuWmIz = sqrt ((s - a) * (s - UUNzPCkaT) * (s - lVetFui) * (s - d) - a * UUNzPCkaT *lVetFui * d * pow (cos (oMSLweFoQENs), 2));
    if ((s - a) * (s - UUNzPCkaT) * (s - lVetFui) * (s - d) - a * UUNzPCkaT *lVetFui * d * pow (cos (oMSLweFoQENs), 2) < 0)
        return -1;
    else
        return Ad2nYuWmIz;
}

int main () {
    double  a, UUNzPCkaT, lVetFui, d, degree, Ad2nYuWmIz;
    scanf ("%lf%lf%lf%lf%lf", &a, &UUNzPCkaT, &lVetFui, &d, &degree);
    Ad2nYuWmIz = eRszhNcvoq (a, UUNzPCkaT, lVetFui, d, degree);
    if (Ad2nYuWmIz == -1)
        printf ("Invalid input");
    else
        printf ("%.4lf", Ad2nYuWmIz);
    return 0;
}

