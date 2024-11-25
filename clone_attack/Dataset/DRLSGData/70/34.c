double  MwyA3S (double  vywlVSPH5R, double  z6tiTw, double  OJI9ApL, double  VQdGY4hjI8R) {
    double  qOagdIHi;
    qOagdIHi = sqrt ((vywlVSPH5R - OJI9ApL) * (vywlVSPH5R - OJI9ApL) + (z6tiTw - VQdGY4hjI8R) * (z6tiTw - VQdGY4hjI8R));
    return (qOagdIHi);
}

void  main () {
    int SBaUhY0JDtfd, BB15pzX, ADd8hCV;
    double  G28Rb3tnk [100] [2], HFytpKi9urO, viYpzMyGr;
    scanf ("%d", &SBaUhY0JDtfd);
    {
        BB15pzX = (168 - 168);
        while (SBaUhY0JDtfd > BB15pzX) {
            scanf ("%lf", &G28Rb3tnk[BB15pzX][0]);
            scanf ("%lf", &G28Rb3tnk[BB15pzX][1]);
            BB15pzX = BB15pzX +1;
        }
    }
    HFytpKi9urO = MwyA3S (G28Rb3tnk[0][0], G28Rb3tnk[0][1], G28Rb3tnk[1][0], G28Rb3tnk[1][1]);
    {
        BB15pzX = 0;
        while (SBaUhY0JDtfd -1 > BB15pzX) {
            for (ADd8hCV = BB15pzX +1; SBaUhY0JDtfd > ADd8hCV; ADd8hCV = ADd8hCV +1) {
                viYpzMyGr = MwyA3S (G28Rb3tnk[BB15pzX][0], G28Rb3tnk[BB15pzX][1], G28Rb3tnk[ADd8hCV][0], G28Rb3tnk[ADd8hCV][1]);
                if (viYpzMyGr > HFytpKi9urO)
                    HFytpKi9urO = viYpzMyGr;
            }
            BB15pzX++;
        }
    }
    printf ("%.4lf\n", HFytpKi9urO);
}

