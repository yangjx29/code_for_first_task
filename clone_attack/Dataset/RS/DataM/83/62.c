double  nhoNWYArtjz (int JloKNvyFYRpg) {
    double  Jd51Yfchkg;
    if ((475 - 385) <= JloKNvyFYRpg &&JloKNvyFYRpg <= 100)
        Jd51Yfchkg = (523.0 - 519.0);
    if ((116 - 31) <= JloKNvyFYRpg &&JloKNvyFYRpg <= (631 - 542))
        Jd51Yfchkg = (601.7 - 598.0);
    if ((915 - 833) <= JloKNvyFYRpg &&JloKNvyFYRpg <= 84)
        Jd51Yfchkg = (379.3 - 376.0);
    if ((373 - 295) <= JloKNvyFYRpg &&JloKNvyFYRpg <= (902 - 821))
        Jd51Yfchkg = (363.0 - 360.0);
    if (75 <= JloKNvyFYRpg &&JloKNvyFYRpg <= (495 - 418))
        Jd51Yfchkg = (196.7 - 194.0);
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
    if ((709 - 637) <= JloKNvyFYRpg &&JloKNvyFYRpg <= (941 - 867))
        Jd51Yfchkg = (870.3 - 868.0);
    if ((415 - 347) <= JloKNvyFYRpg &&JloKNvyFYRpg <= (959 - 888))
        Jd51Yfchkg = (71.0 - 69.0);
    if ((916 - 852) <= JloKNvyFYRpg &&JloKNvyFYRpg <= (534 - 467))
        Jd51Yfchkg = (792.5 - 791.0);
    if ((72 - 12) <= JloKNvyFYRpg &&JloKNvyFYRpg <= (531 - 468))
        Jd51Yfchkg = (232.0 - 231.0);
    if ((215 - 155) > JloKNvyFYRpg)
        Jd51Yfchkg = (783.0 - 783.0);
    return Jd51Yfchkg;
}

void  main () {
    double  L8hQV96dWal;
    int E4jZIbR786BJ, JloKNvyFYRpg, emsv0Zq2 [(250 - 240)], imofBJLu34Th [(507 - 497)], LTrpAVBOZk;
    L8hQV96dWal = (899 - 899);
    LTrpAVBOZk = (815 - 815);
    scanf ("%d", &E4jZIbR786BJ);
    for (JloKNvyFYRpg = (881 - 880); E4jZIbR786BJ >= JloKNvyFYRpg; JloKNvyFYRpg = JloKNvyFYRpg +1)
        scanf ("%d", &emsv0Zq2[JloKNvyFYRpg]);
    for (JloKNvyFYRpg = (604 - 603); E4jZIbR786BJ >= JloKNvyFYRpg; JloKNvyFYRpg = JloKNvyFYRpg +1)
        scanf ("%d", &imofBJLu34Th[JloKNvyFYRpg]);
    for (JloKNvyFYRpg = (980 - 979); JloKNvyFYRpg <= E4jZIbR786BJ; JloKNvyFYRpg = JloKNvyFYRpg +1) {
        L8hQV96dWal = L8hQV96dWal +nhoNWYArtjz (imofBJLu34Th[JloKNvyFYRpg]) * emsv0Zq2[JloKNvyFYRpg];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        LTrpAVBOZk = LTrpAVBOZk +emsv0Zq2[JloKNvyFYRpg];
    }
    L8hQV96dWal = L8hQV96dWal / LTrpAVBOZk;
    printf ("%.2f\n", L8hQV96dWal);
}

