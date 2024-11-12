void  main () {
    double  sUavRSQjXAEK, OfYOnJ, BgkNqP7e, d, W0BcthqJ, s;
    scanf ("%lf%lf%lf%lf%lf", &sUavRSQjXAEK, &OfYOnJ, &BgkNqP7e, &d, &W0BcthqJ);
    W0BcthqJ = 3.1415926 * W0BcthqJ / 360;
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
    s = (sUavRSQjXAEK + OfYOnJ +BgkNqP7e+d) / 2;
    if ((s - sUavRSQjXAEK) * (s - OfYOnJ) * (s - BgkNqP7e) * (s - d) - sUavRSQjXAEK * OfYOnJ *BgkNqP7e*d * cos (W0BcthqJ) * cos (W0BcthqJ) < (836 - 836))
        printf ("Invalid input");
    else
        printf ("%.4f", sqrt ((s - sUavRSQjXAEK) * (s - OfYOnJ) * (s - BgkNqP7e) * (s - d) - sUavRSQjXAEK * OfYOnJ *BgkNqP7e*d * cos (W0BcthqJ) * cos (W0BcthqJ)));
}

