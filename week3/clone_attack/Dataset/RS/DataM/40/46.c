void  main () {
    double  NtG9Xe1 (double  a, double  AoUBQM, double  c, double  HywPgbYj, double  j);
    double  a, AoUBQM, c, HywPgbYj, j, jj, JkcBRKPo3udi;
    scanf ("%lf", &a);
    scanf ("%lf", &AoUBQM);
    scanf ("%lf", &c);
    scanf ("%lf", &HywPgbYj);
    scanf ("%lf", &j);
    jj = j * p / t;
    JkcBRKPo3udi = NtG9Xe1 (a, AoUBQM, c, HywPgbYj, jj);
    if (JkcBRKPo3udi != -(638 - 637))
        printf ("%.4lf\n", JkcBRKPo3udi);
    else
        printf ("Invalid input\n");
}

double  NtG9Xe1 (double  a, double  AoUBQM, double  c, double  HywPgbYj, double  jj) {
    double  FL8YT5u2S, Uo7xKn8luhfw, vsgQWAzh0;
    FL8YT5u2S = (a + AoUBQM +c + HywPgbYj) / 2;
    Uo7xKn8luhfw = (FL8YT5u2S -a) * (FL8YT5u2S -AoUBQM) * (FL8YT5u2S -c) * (FL8YT5u2S -HywPgbYj) - a * AoUBQM *c * HywPgbYj *cos (jj) * cos (jj);
    if (Uo7xKn8luhfw < 0)
        vsgQWAzh0 = -1;
    else
        vsgQWAzh0 = sqrt (Uo7xKn8luhfw);
    return (vsgQWAzh0);
}

