int main (int PBfptNY78AH2, char *smXxvw []) {
    double  PAu31Ps;
    double  S1yXhVrcZ;
    double  TQnHIpR4XB;
    double  fmqNWYy8Si;
    double  sL9tpOQ;
    double  ziEoXAM;
    double  ImDyTjL6;
    double  uxgfOVPRbd5l;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%lf%lf%lf%lf%lf", &PAu31Ps, &S1yXhVrcZ, &TQnHIpR4XB, &fmqNWYy8Si, &sL9tpOQ);
    ziEoXAM = cos (3.1415926 * sL9tpOQ / 360);
    ImDyTjL6 = (PAu31Ps +S1yXhVrcZ+TQnHIpR4XB+fmqNWYy8Si) / 2;
    uxgfOVPRbd5l = (ImDyTjL6 -PAu31Ps) * (ImDyTjL6 -S1yXhVrcZ) * (ImDyTjL6 -TQnHIpR4XB) * (ImDyTjL6 -fmqNWYy8Si) - PAu31Ps *S1yXhVrcZ*TQnHIpR4XB*fmqNWYy8Si * pow (ziEoXAM, 2);
    if (uxgfOVPRbd5l < 0)
        printf ("Invalid input\n");
    else
        printf ("%.4lf\n", sqrt (uxgfOVPRbd5l));
    return 0;
}

