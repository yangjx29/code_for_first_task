main () {
    double  dv0MyiYSqNKI, Mq38MSF4BrP, lACJglPFy6o, gS68X0Jku, jBVHxSZNWh, qET6yxk, vaxP9eTH4kOj, F, QpLJP4;
    double  DsuPa1 (double  Hxj7hB, double  pqdOF53K7k, double  QXobYsu, double  b4k1A6igc, double  Eut9M0Qzi);
    scanf ("%lf%lf%lf%lf%lf", &dv0MyiYSqNKI, &Mq38MSF4BrP, &lACJglPFy6o, &gS68X0Jku, &jBVHxSZNWh);
    vaxP9eTH4kOj = 0.5 * (dv0MyiYSqNKI + Mq38MSF4BrP +lACJglPFy6o + gS68X0Jku);
    QpLJP4 = jBVHxSZNWh / 360 * 3.1415926;
    F = cos (QpLJP4);
    if ((vaxP9eTH4kOj - dv0MyiYSqNKI) * (vaxP9eTH4kOj - Mq38MSF4BrP) * (vaxP9eTH4kOj - lACJglPFy6o) * (vaxP9eTH4kOj - gS68X0Jku) - dv0MyiYSqNKI * Mq38MSF4BrP *lACJglPFy6o * gS68X0Jku * F *F < 0) {
        printf ("Invalid input\n");
    }
    else {
        qET6yxk = DsuPa1 (dv0MyiYSqNKI, Mq38MSF4BrP, lACJglPFy6o, gS68X0Jku, jBVHxSZNWh);
        printf ("%.4lf", qET6yxk);
    };
}

double  DsuPa1 (double  Hxj7hB, double  pqdOF53K7k, double  QXobYsu, double  b4k1A6igc, double  Eut9M0Qzi) {
    double  URuJot4Up3K, XPXC47BL3, DDnxlCz9WGTq, grVb6xs;
    URuJot4Up3K = 0.5 * (Hxj7hB +pqdOF53K7k + QXobYsu +b4k1A6igc);
    grVb6xs = Eut9M0Qzi / 360 * 3.1415926;
    XPXC47BL3 = cos (grVb6xs);
    DDnxlCz9WGTq = sqrt ((URuJot4Up3K -Hxj7hB) * (URuJot4Up3K -pqdOF53K7k) * (URuJot4Up3K -QXobYsu) * (URuJot4Up3K -b4k1A6igc) - Hxj7hB *pqdOF53K7k * QXobYsu *b4k1A6igc * XPXC47BL3 *XPXC47BL3);
    return (DDnxlCz9WGTq);
}

