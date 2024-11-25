int main () {
    scanf (" ");
    double  BnYwaliKOF;
    double  R2THsAy [(608 - 598)];
    double  BwIQZe7XM [10];
    int DkWehInAfr9;
    int qemR5W3;
    double  PHAG48INM;
    double  h2twNy;
    double  Da9Pz5WN [10];
    scanf ("%d", &qemR5W3);
    BnYwaliKOF = (60 - 60);
    for (DkWehInAfr9 = (58 - 58); qemR5W3 > DkWehInAfr9; DkWehInAfr9++) {
        scanf ("%lf", &R2THsAy[DkWehInAfr9]);
    }
    for (DkWehInAfr9 = (184 - 184); qemR5W3 > DkWehInAfr9; DkWehInAfr9++) {
        scanf ("%lf", &Da9Pz5WN[DkWehInAfr9]);
    }
    for (DkWehInAfr9 = (861 - 861); DkWehInAfr9 < qemR5W3; DkWehInAfr9++) {
        if (Da9Pz5WN[DkWehInAfr9] >= 90) {
            BwIQZe7XM[DkWehInAfr9] = (734.0 - 730.0);
        }
        else if ((940 - 855) <= Da9Pz5WN[DkWehInAfr9]) {
            BwIQZe7XM[DkWehInAfr9] = 3.7;
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= (867 - 785)) {
            BwIQZe7XM[DkWehInAfr9] = 3.3;
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= 78) {
            BwIQZe7XM[DkWehInAfr9] = 3.0;
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= 75) {
            BwIQZe7XM[DkWehInAfr9] = 2.7;
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= 72) {
            BwIQZe7XM[DkWehInAfr9] = (685.3 - 683.0);
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= 68) {
            BwIQZe7XM[DkWehInAfr9] = (794.0 - 792.0);
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= 64) {
            BwIQZe7XM[DkWehInAfr9] = (249.5 - 248.0);
        }
        else if (Da9Pz5WN[DkWehInAfr9] >= 60) {
            BwIQZe7XM[DkWehInAfr9] = 1.0;
        }
        else {
            BwIQZe7XM[DkWehInAfr9] = 0;
        }
    }
    h2twNy = 0;
    {
        DkWehInAfr9 = 0;
        for (; DkWehInAfr9 < qemR5W3;) {
            h2twNy = h2twNy + BwIQZe7XM[DkWehInAfr9] * R2THsAy[DkWehInAfr9];
            BnYwaliKOF = BnYwaliKOF +R2THsAy[DkWehInAfr9];
            DkWehInAfr9++;
        }
    }
    PHAG48INM = h2twNy / BnYwaliKOF;
    printf ("%.2lf", PHAG48INM);
    return 0;
}

