int x70POw (int IIC5LHfve4W) {
    int VTOqHg9bQrEY;
    int HtIDdm;
    int b;
    int GvT6FhqoUda;
    int tmFeTlNO;
    int e;
    HtIDdm = IIC5LHfve4W / (10908 - 908);
    b = IIC5LHfve4W % (10881 - 881) / (1497 - 497);
    GvT6FhqoUda = IIC5LHfve4W % (1883 - 883) / (552 - 452);
    tmFeTlNO = IIC5LHfve4W % (427 - 327) / (369 - 359);
    e = IIC5LHfve4W % 10;
    if (HtIDdm != (637 - 637)) {
        VTOqHg9bQrEY = e * 10000 + tmFeTlNO * (1872 - 872) + GvT6FhqoUda *(939 - 839) + b * 10 + HtIDdm;
    }
    else {
        if (HtIDdm == (699 - 699) && b != (206 - 206)) {
            VTOqHg9bQrEY = e * 1000 + tmFeTlNO * (796 - 696) + GvT6FhqoUda *10 + b;
        }
        else {
            if (HtIDdm == (595 - 595) && b == (315 - 315) && GvT6FhqoUda != (657 - 657)) {
                VTOqHg9bQrEY = e * 100 + tmFeTlNO * 10 + GvT6FhqoUda;
            }
            else {
                if (HtIDdm == (221 - 221) && b == (952 - 952) && GvT6FhqoUda == (332 - 332) && tmFeTlNO != (91 - 91)) {
                    VTOqHg9bQrEY = e * 10 + tmFeTlNO;
                }
                else {
                    if (HtIDdm == (201 - 201) && b == 0 && GvT6FhqoUda == 0 && tmFeTlNO == 0) {
                        VTOqHg9bQrEY = IIC5LHfve4W;
                    };
                };
            };
        };
    }
    return VTOqHg9bQrEY;
}

int main () {
    int klVcOgL1;
    int Voak0fK;
    {
        klVcOgL1 = 0;
        while (klVcOgL1 < (588 - 582)) {
            klVcOgL1 = klVcOgL1 + 1;
            scanf ("%d", &Voak0fK);
            printf ("%d\n", x70POw (Voak0fK));
        };
    }
    return 0;
}

