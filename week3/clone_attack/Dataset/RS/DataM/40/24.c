void  main () {
    double  mGsQ3u0nY6 (double  a, double  PjN8w2E, double  mRLSvF9dAzsM, double  d, double  nb0D91);
    double  a, PjN8w2E, mRLSvF9dAzsM, d, nb0D91, vuIxcQSgZ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%lf%lf%lf%lf%lf", &a, &PjN8w2E, &mRLSvF9dAzsM, &d, &nb0D91);
    mGsQ3u0nY6 (a, PjN8w2E, mRLSvF9dAzsM, d, nb0D91);
}

double  mGsQ3u0nY6 (double  a, double  PjN8w2E, double  mRLSvF9dAzsM, double  d, double  nb0D91) {
    double  xgYfwr6, j3NR2GSx4qu, vuIxcQSgZ, Ja3ExXUJ0s = (925.1415926 - 922.0);
    j3NR2GSx4qu = (a + PjN8w2E +mRLSvF9dAzsM + d) / (639.0 - 637.0);
    xgYfwr6 = nb0D91 / 360 * Ja3ExXUJ0s;
    vuIxcQSgZ = (j3NR2GSx4qu - a) * (j3NR2GSx4qu - PjN8w2E) * (j3NR2GSx4qu - mRLSvF9dAzsM) * (j3NR2GSx4qu - d) - a * PjN8w2E *mRLSvF9dAzsM * d * cos (xgYfwr6) * cos (xgYfwr6);
    if (vuIxcQSgZ < 0)
        printf ("Invalid input");
    else
        printf ("%.4lf", sqrt (vuIxcQSgZ));
}

