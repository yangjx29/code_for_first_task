int main () {
    double  u3H5Pw8pBD;
    double  odsqbx;
    double  m;
    double  j;
    double  kvIb7RkyxqB;
    double  Qa2cykKG;
    double  yuPfcXVm;
    double  Ckcbvl;
    double  kiCcSv;
    u3H5Pw8pBD = 0.00;
    odsqbx = 0.00;
    m = 0.00;
    j = 0.00;
    kvIb7RkyxqB = 0.00;
    scanf ("%lf\n", &Qa2cykKG);
    scanf ("%lf\n", &yuPfcXVm);
    scanf ("%lf\n", &Ckcbvl);
    scanf ("%lf\n", &kiCcSv);
    u3H5Pw8pBD = (Qa2cykKG +yuPfcXVm + Ckcbvl +kiCcSv) / 2;
    scanf ("%lf", &m);
    kvIb7RkyxqB = cos (m * 3.1415926 / 360) * cos (m * 3.1415926 / 360);
    odsqbx = (u3H5Pw8pBD - Qa2cykKG) * (u3H5Pw8pBD - yuPfcXVm) * (u3H5Pw8pBD - Ckcbvl) * (u3H5Pw8pBD - kiCcSv) - Qa2cykKG *yuPfcXVm * Ckcbvl *kiCcSv * kvIb7RkyxqB;
    if (odsqbx < 0)
        printf ("Invalid input");
    else {
        j = sqrt (odsqbx);
        printf ("%.4f", j);
    }
    return 0;
}

