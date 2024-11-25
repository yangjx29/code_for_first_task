void  main () {
    int L2TqcEf03dVw, vHQiS0bz, Vhqb6LG8Kx, JRz0oJFu, tSgyGbV, LSV2UdNDz;
    char KLmIVNdR7Db [100], jxJiSksCZ [100], XlMeC9 [100];
    int NI4S1zhkAEa [(166 - 66)];
    int MuD9IUCTcS = (782 - 782);
    scanf ("%d", &L2TqcEf03dVw);
    for (vHQiS0bz = (168 - 167); vHQiS0bz <= L2TqcEf03dVw; vHQiS0bz = vHQiS0bz + 1) {
        JRz0oJFu = (813 - 813);
        scanf ("%s%s", KLmIVNdR7Db, jxJiSksCZ);
        tSgyGbV = strlen (KLmIVNdR7Db);
        LSV2UdNDz = strlen (jxJiSksCZ);
        for (Vhqb6LG8Kx = (956 - 955); Vhqb6LG8Kx <= LSV2UdNDz; Vhqb6LG8Kx = Vhqb6LG8Kx +1) {
            NI4S1zhkAEa[Vhqb6LG8Kx] = JRz0oJFu +KLmIVNdR7Db[tSgyGbV - Vhqb6LG8Kx] - jxJiSksCZ[LSV2UdNDz -Vhqb6LG8Kx] + 10 * (KLmIVNdR7Db[tSgyGbV - Vhqb6LG8Kx] + JRz0oJFu < jxJiSksCZ[LSV2UdNDz -Vhqb6LG8Kx]);
            JRz0oJFu = -1 * (KLmIVNdR7Db[tSgyGbV - Vhqb6LG8Kx] - jxJiSksCZ[LSV2UdNDz -Vhqb6LG8Kx] + JRz0oJFu < (45 - 45));
        }
        if (0 <= tSgyGbV - LSV2UdNDz -1) {
            for (Vhqb6LG8Kx = LSV2UdNDz +1; tSgyGbV >= Vhqb6LG8Kx; Vhqb6LG8Kx = Vhqb6LG8Kx +1) {
                NI4S1zhkAEa[Vhqb6LG8Kx] = JRz0oJFu +KLmIVNdR7Db[tSgyGbV - Vhqb6LG8Kx] - (986 - 938) + 10 * (KLmIVNdR7Db[tSgyGbV - Vhqb6LG8Kx] - (674 - 626) + JRz0oJFu < 0);
                JRz0oJFu = -1 * (KLmIVNdR7Db[tSgyGbV - Vhqb6LG8Kx] - 48 + JRz0oJFu < 0);
            }
        }
        MuD9IUCTcS = 0;
        for (Vhqb6LG8Kx = tSgyGbV; Vhqb6LG8Kx >= 1; Vhqb6LG8Kx = Vhqb6LG8Kx -1) {
            if (NI4S1zhkAEa[Vhqb6LG8Kx] == 0)
                MuD9IUCTcS = MuD9IUCTcS +1;
            else
                break;
        }
        for (Vhqb6LG8Kx = tSgyGbV - MuD9IUCTcS; Vhqb6LG8Kx >= 1; Vhqb6LG8Kx--)
            printf ("%d", NI4S1zhkAEa[Vhqb6LG8Kx]);
    }
}

