void  main () {
    int liMqEvC (int p0wzxAa);
    int TV6hD1qcGsw;
    int HEFfTvgaKzZ;
    int cexyvVM6;
    int cKBNjeSWyQ;
    int e;
    int wOEkoncPWm1S;
    scanf ("%d %d %d %d %d %d", &TV6hD1qcGsw, &HEFfTvgaKzZ, &cexyvVM6, &cKBNjeSWyQ, &e, &wOEkoncPWm1S);
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", liMqEvC (TV6hD1qcGsw), liMqEvC (HEFfTvgaKzZ), liMqEvC (cexyvVM6), liMqEvC (cKBNjeSWyQ), liMqEvC (e), liMqEvC (wOEkoncPWm1S));
}

int liMqEvC (int p0wzxAa) {
    int jdQvZKoGs, j, VtRPH8J1, tquTMhDkKr, l0lx7AbWZYuC, neoNxV5ui1Jh, butt;
    int TV6hD1qcGsw [(805 - 800)];
    int HEFfTvgaKzZ [5];
    if ((95 - 95) > p0wzxAa) {
        p0wzxAa = -p0wzxAa;
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
        l0lx7AbWZYuC = (509 - 508);
    }
    else
        l0lx7AbWZYuC = (767 - 767);
    TV6hD1qcGsw[0] = p0wzxAa / (10354 - 354);
    TV6hD1qcGsw[(614 - 613)] = (p0wzxAa - 10000 * TV6hD1qcGsw[0]) / 1000;
    TV6hD1qcGsw[2] = (p0wzxAa - 10000 * TV6hD1qcGsw[0] - 1000 * TV6hD1qcGsw[1]) / (160 - 60);
    TV6hD1qcGsw[3] = (p0wzxAa - 10000 * TV6hD1qcGsw[0] - 1000 * TV6hD1qcGsw[1] - 100 * TV6hD1qcGsw[2]) / 10;
    TV6hD1qcGsw[4] = p0wzxAa - 10000 * TV6hD1qcGsw[0] - 1000 * TV6hD1qcGsw[1] - 100 * TV6hD1qcGsw[2] - 10 * TV6hD1qcGsw[3];
    HEFfTvgaKzZ[0] = 1000;
    {
        jdQvZKoGs = 0;
        while (jdQvZKoGs < 4) {
            HEFfTvgaKzZ[jdQvZKoGs + 1] = HEFfTvgaKzZ[jdQvZKoGs] / 10;
            jdQvZKoGs++;
        };
    }
    for (jdQvZKoGs = 0; jdQvZKoGs < 5; jdQvZKoGs = jdQvZKoGs + 1)
        if (TV6hD1qcGsw[jdQvZKoGs] != 0)
            break;
    neoNxV5ui1Jh = jdQvZKoGs - 1;
    butt = 4;
    while (neoNxV5ui1Jh <= butt) {
        VtRPH8J1 = TV6hD1qcGsw[neoNxV5ui1Jh];
        TV6hD1qcGsw[neoNxV5ui1Jh] = TV6hD1qcGsw[butt];
        TV6hD1qcGsw[butt] = VtRPH8J1;
        neoNxV5ui1Jh = neoNxV5ui1Jh + 1;
        butt = butt - 1;
    }
    tquTMhDkKr = 0;
    {
        j = jdQvZKoGs - 1;
        while (j < 5) {
            tquTMhDkKr = TV6hD1qcGsw[j] * HEFfTvgaKzZ[j] + tquTMhDkKr;
            j++;
        };
    }
    if (l0lx7AbWZYuC == 1)
        tquTMhDkKr = -tquTMhDkKr;
    return (tquTMhDkKr);
}

