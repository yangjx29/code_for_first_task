int main () {
    double  daPK2Sfge4Y [(462 - 362)];
    double  D2kl4X;
    double  FFJ6ZWpsvIxc;
    double  *EGXvrNh4cPM;
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
    int i5kyWsclqRPO, yeJsy0VLadQ, sF8cQWTjwkGz;
    scanf ("%d", &i5kyWsclqRPO);
    for (; i5kyWsclqRPO--;) {
        EGXvrNh4cPM = &daPK2Sfge4Y[(948 - 948)];
        D2kl4X = 0;
        FFJ6ZWpsvIxc = 0;
        scanf ("%d", &yeJsy0VLadQ);
        for (sF8cQWTjwkGz = 0; sF8cQWTjwkGz < yeJsy0VLadQ; sF8cQWTjwkGz++) {
            scanf ("%lf", EGXvrNh4cPM +sF8cQWTjwkGz);
            D2kl4X = D2kl4X +*(EGXvrNh4cPM +sF8cQWTjwkGz);
        }
        D2kl4X = D2kl4X / yeJsy0VLadQ;
        for (sF8cQWTjwkGz = 0; sF8cQWTjwkGz < yeJsy0VLadQ; sF8cQWTjwkGz++)
            FFJ6ZWpsvIxc = FFJ6ZWpsvIxc +(*(EGXvrNh4cPM +sF8cQWTjwkGz) - D2kl4X) * (*(EGXvrNh4cPM +sF8cQWTjwkGz) - D2kl4X);
        FFJ6ZWpsvIxc = FFJ6ZWpsvIxc / yeJsy0VLadQ;
        FFJ6ZWpsvIxc = sqrt (FFJ6ZWpsvIxc);
        printf ("%.5f\n", FFJ6ZWpsvIxc);
    };
}

