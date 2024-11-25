int zY3UwyX (char Qiz7ul1qdG [], int wTdyKN4H, char HWh93sByJvZ [], int m) {
    int T0QICyhq435, mN1JqRD, Cel67auKpN;
    char yok5s4O6eN [(523 - 423)], avdoYxKaec [(180 - 80)];
    char nSeZEUpNjc2;
    for (mN1JqRD = (463 - 463); (560 - 460) > mN1JqRD; mN1JqRD = mN1JqRD + 1) {
        yok5s4O6eN[mN1JqRD] = '\0';
        avdoYxKaec[mN1JqRD] = '\0';
    }
    for (T0QICyhq435 = (344 - 344), mN1JqRD = 0; wTdyKN4H > T0QICyhq435; T0QICyhq435 = T0QICyhq435 +1) {
        if (!(' ' != Qiz7ul1qdG[T0QICyhq435]) || !('\n' != Qiz7ul1qdG[T0QICyhq435]))
            continue;
        else if ('Z' >= Qiz7ul1qdG[T0QICyhq435] && 'A' <= Qiz7ul1qdG[T0QICyhq435]) {
            yok5s4O6eN[mN1JqRD] = Qiz7ul1qdG[T0QICyhq435] + 32;
            mN1JqRD = mN1JqRD + 1;
        }
        else {
            yok5s4O6eN[mN1JqRD] = Qiz7ul1qdG[T0QICyhq435];
            mN1JqRD = mN1JqRD + 1;
        };
    }
    for (T0QICyhq435 = 0; mN1JqRD > T0QICyhq435; T0QICyhq435 = T0QICyhq435 +1) {
        for (Cel67auKpN = 0; mN1JqRD - (576 - 575) - T0QICyhq435 > Cel67auKpN; Cel67auKpN = Cel67auKpN +1)
            if (yok5s4O6eN[Cel67auKpN +1] < yok5s4O6eN[Cel67auKpN]) {
                nSeZEUpNjc2 = yok5s4O6eN[Cel67auKpN];
                yok5s4O6eN[Cel67auKpN] = yok5s4O6eN[Cel67auKpN +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                yok5s4O6eN[Cel67auKpN +1] = nSeZEUpNjc2;
            };
    }
    for (T0QICyhq435 = 0, mN1JqRD = 0; wTdyKN4H > T0QICyhq435; T0QICyhq435++) {
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
        if (!(' ' != HWh93sByJvZ[T0QICyhq435]))
            continue;
        else {
            if (HWh93sByJvZ[T0QICyhq435] <= 'Z' && Qiz7ul1qdG[T0QICyhq435] >= 'A') {
                avdoYxKaec[mN1JqRD] = HWh93sByJvZ[T0QICyhq435] + 32;
                mN1JqRD = mN1JqRD + 1;
            }
            else {
                avdoYxKaec[mN1JqRD] = HWh93sByJvZ[T0QICyhq435];
                mN1JqRD = mN1JqRD + 1;
            };
        };
    }
    for (T0QICyhq435 = 0; T0QICyhq435 < mN1JqRD; T0QICyhq435++) {
        for (Cel67auKpN = 0; Cel67auKpN < mN1JqRD - 1 - T0QICyhq435; Cel67auKpN++)
            if (avdoYxKaec[Cel67auKpN] > avdoYxKaec[Cel67auKpN +1]) {
                nSeZEUpNjc2 = avdoYxKaec[Cel67auKpN];
                avdoYxKaec[Cel67auKpN] = avdoYxKaec[Cel67auKpN +1];
                avdoYxKaec[Cel67auKpN +1] = nSeZEUpNjc2;
            };
    }
    if (strcmp (yok5s4O6eN, avdoYxKaec) == 0)
        return (1);
    else
        return (0);
}

void  main () {
    char Qiz7ul1qdG [100], HWh93sByJvZ [100];
    int la;
    int WNMWgm;
    scanf ("%s%s", Qiz7ul1qdG, HWh93sByJvZ);
    la = strlen (Qiz7ul1qdG);
    WNMWgm = strlen (HWh93sByJvZ);
    if (la != WNMWgm)
        ;
    else if (zY3UwyX (Qiz7ul1qdG, la, HWh93sByJvZ, WNMWgm))
        printf ("YES\n");
    else
        ;
}

