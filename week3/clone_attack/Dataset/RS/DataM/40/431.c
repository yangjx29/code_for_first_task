double  Y5n8xkR (double  b9LEMV, double  BqT2ViRoEQ, double  x4eAyMGSjTc, double  OyFAlp8InwU, double  p1SHRXVzbU) {
    double  gshbdrExzNQ3 = 0;
    double  el7GiAty1aK6;
    el7GiAty1aK6 = (b9LEMV + BqT2ViRoEQ +x4eAyMGSjTc + OyFAlp8InwU) / 2;
    double  q1EaQ4GjWxw = p1SHRXVzbU * PI / 360;
    gshbdrExzNQ3 = (el7GiAty1aK6 - b9LEMV) * (el7GiAty1aK6 - BqT2ViRoEQ) * (el7GiAty1aK6 - x4eAyMGSjTc) * (el7GiAty1aK6 - OyFAlp8InwU) - b9LEMV * BqT2ViRoEQ *x4eAyMGSjTc * OyFAlp8InwU *cos (q1EaQ4GjWxw) * cos (q1EaQ4GjWxw);
    if (0 <= gshbdrExzNQ3)
        gshbdrExzNQ3 = sqrt (gshbdrExzNQ3);
    return gshbdrExzNQ3;
}

void  main () {
    double  b9LEMV;
    double  BqT2ViRoEQ;
    double  x4eAyMGSjTc;
    double  OyFAlp8InwU;
    double  p1SHRXVzbU;
    double  f8IUenCiwHM1;
    scanf ("%lf%lf%lf%lf%lf", &b9LEMV, &BqT2ViRoEQ, &x4eAyMGSjTc, &OyFAlp8InwU, &p1SHRXVzbU);
    f8IUenCiwHM1 = Y5n8xkR (b9LEMV, BqT2ViRoEQ, x4eAyMGSjTc, OyFAlp8InwU, p1SHRXVzbU);
    if (f8IUenCiwHM1 < 0)
        ;
    else
        printf ("%.4lf\n", f8IUenCiwHM1);
}

