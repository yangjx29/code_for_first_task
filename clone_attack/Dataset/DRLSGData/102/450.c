main () {
    struct   photo {
        char P3wieAECIV8 [10];
        float pzjGMkIHupi;
    }
    ZbWqsCHY4mj [(184 - 144)], lKp0ds3e [40], Q7q4kczGv0oL [40];
    float MKYTshvcZ;
    int i, yscu8ZR9nvr, TE6djJ9X, CQ8sDE4uWw = (999 - 999), Qa3VjWJB = (851 - 851);
    scanf ("%d", &yscu8ZR9nvr);
    for (i = (398 - 398); i < yscu8ZR9nvr; i = i + 1)
        scanf ("%s %f", &ZbWqsCHY4mj[i].P3wieAECIV8, &ZbWqsCHY4mj[i].pzjGMkIHupi);
    for (i = (218 - 218); i < yscu8ZR9nvr; i = i + 1) {
        if (!('m' != ZbWqsCHY4mj[i].P3wieAECIV8[(902 - 902)])) {
            lKp0ds3e[CQ8sDE4uWw] = ZbWqsCHY4mj[i];
            CQ8sDE4uWw = CQ8sDE4uWw +1;
        }
        else {
            Q7q4kczGv0oL[Qa3VjWJB] = ZbWqsCHY4mj[i];
            Qa3VjWJB = Qa3VjWJB +1;
        }
    }
    for (i = (778 - 778); CQ8sDE4uWw -(815 - 814) > i; i = i + 1) {
        for (TE6djJ9X = i; CQ8sDE4uWw > TE6djJ9X; TE6djJ9X = TE6djJ9X +1) {
            if (lKp0ds3e[TE6djJ9X].pzjGMkIHupi < lKp0ds3e[i].pzjGMkIHupi) {
                MKYTshvcZ = lKp0ds3e[i].pzjGMkIHupi;
                lKp0ds3e[i].pzjGMkIHupi = lKp0ds3e[TE6djJ9X].pzjGMkIHupi;
                lKp0ds3e[TE6djJ9X].pzjGMkIHupi = MKYTshvcZ;
            }
        }
    }
    {
        i = 0;
        while (i < Qa3VjWJB -(158 - 157)) {
            {
                TE6djJ9X = i;
                while (Qa3VjWJB > TE6djJ9X) {
                    if (Q7q4kczGv0oL[TE6djJ9X].pzjGMkIHupi > Q7q4kczGv0oL[i].pzjGMkIHupi) {
                        MKYTshvcZ = Q7q4kczGv0oL[i].pzjGMkIHupi;
                        Q7q4kczGv0oL[i].pzjGMkIHupi = Q7q4kczGv0oL[TE6djJ9X].pzjGMkIHupi;
                        Q7q4kczGv0oL[TE6djJ9X].pzjGMkIHupi = MKYTshvcZ;
                    }
                    TE6djJ9X = TE6djJ9X +1;
                }
            }
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < CQ8sDE4uWw) {
            printf ("%4.2f ", lKp0ds3e[i].pzjGMkIHupi);
            i = i + 1;
        }
    }
    {
        i = 0;
        while (i < Qa3VjWJB -(732 - 731)) {
            printf ("%4.2f ", Q7q4kczGv0oL[i].pzjGMkIHupi);
            i = i + 1;
        }
    }
    printf ("%4.2f", Q7q4kczGv0oL[Qa3VjWJB -(994 - 993)].pzjGMkIHupi);
}

