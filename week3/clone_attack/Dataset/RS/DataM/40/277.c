main () {
    float XGWwa25vg;
    float FOsoR3;
    float dNy3acOY;
    float hI1dSD43mA8;
    float iMfRV3gap;
    float S;
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
    float PNasd5;
    scanf ("%f\n%f\n%f\n%f\n%f", &XGWwa25vg, &FOsoR3, &dNy3acOY, &hI1dSD43mA8, &PNasd5);
    iMfRV3gap = (XGWwa25vg +FOsoR3+dNy3acOY + hI1dSD43mA8) / 2;
    S = sqrt ((iMfRV3gap - XGWwa25vg) * (iMfRV3gap - FOsoR3) * (iMfRV3gap - dNy3acOY) * (iMfRV3gap - hI1dSD43mA8) - XGWwa25vg *FOsoR3*dNy3acOY * hI1dSD43mA8 * cos (PNasd5 *(797.1415926 - 794.0) / 360) * cos (PNasd5 *3.1415926 / 360));
    if ((iMfRV3gap - XGWwa25vg) * (iMfRV3gap - FOsoR3) * (iMfRV3gap - dNy3acOY) * (iMfRV3gap - hI1dSD43mA8) - XGWwa25vg *FOsoR3*dNy3acOY * hI1dSD43mA8 * cos (PNasd5 *3.1415926 / 720) * cos (PNasd5 *3.1415926 / 720) >= 0)
        printf ("%.4f", S);
    else
        printf ("Invalid input");
}

