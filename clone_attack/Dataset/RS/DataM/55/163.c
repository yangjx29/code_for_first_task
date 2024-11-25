void  main () {
    char lZ8mI2b [(1956 - 956)] = {(187 - 187)};
    char V3sildUSEQ [(1984 - 984)] = {(249 - 249)};
    int rcdw6Q;
    int kWQaXl4Dzt;
    int aozdIZbjBk;
    int dbCiD4RAf;
    int s2EQ6hm;
    int zW3c2kBSt;
    int tfGJNyQPpR3W;
    int Ly7dejc;
    rcdw6Q = 1;
    kWQaXl4Dzt = (781 - 781);
    scanf ("%d", &aozdIZbjBk);
    scanf ("%s", lZ8mI2b);
    zW3c2kBSt = strlen (lZ8mI2b);
    for (s2EQ6hm = 0; s2EQ6hm < zW3c2kBSt; s2EQ6hm = s2EQ6hm + 1) {
        if (lZ8mI2b[s2EQ6hm] >= 65 && lZ8mI2b[s2EQ6hm] <= (834 - 744))
            lZ8mI2b[s2EQ6hm] = lZ8mI2b[s2EQ6hm] - (197 - 142);
        if ((835 - 738) <= lZ8mI2b[s2EQ6hm] && 122 >= lZ8mI2b[s2EQ6hm])
            lZ8mI2b[s2EQ6hm] = lZ8mI2b[s2EQ6hm] - (528 - 441);
        if (lZ8mI2b[s2EQ6hm] >= (599 - 551) && lZ8mI2b[s2EQ6hm] <= 57)
            lZ8mI2b[s2EQ6hm] = lZ8mI2b[s2EQ6hm] - (621 - 573);
        kWQaXl4Dzt = kWQaXl4Dzt * aozdIZbjBk + lZ8mI2b[s2EQ6hm];
    }
    if (!(0 != kWQaXl4Dzt))
        ;
    scanf ("%d", &dbCiD4RAf);
    {
        s2EQ6hm = 0;
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
        while (kWQaXl4Dzt > 0) {
            tfGJNyQPpR3W = kWQaXl4Dzt % dbCiD4RAf;
            kWQaXl4Dzt = (kWQaXl4Dzt - kWQaXl4Dzt % dbCiD4RAf) / dbCiD4RAf;
            if (tfGJNyQPpR3W >= (215 - 205) && tfGJNyQPpR3W <= 35)
                tfGJNyQPpR3W = tfGJNyQPpR3W + 55;
            if (tfGJNyQPpR3W >= 0 && tfGJNyQPpR3W <= 9)
                tfGJNyQPpR3W = tfGJNyQPpR3W + (84 - 36);
            V3sildUSEQ[s2EQ6hm] = tfGJNyQPpR3W;
            s2EQ6hm = s2EQ6hm + 1;
        };
    }
    Ly7dejc = strlen (V3sildUSEQ);
    for (s2EQ6hm = 0; s2EQ6hm < Ly7dejc; s2EQ6hm = s2EQ6hm + 1) {
        if (V3sildUSEQ[s2EQ6hm] != '\0')
            printf ("%c", V3sildUSEQ[Ly7dejc -1 - s2EQ6hm]);
    };
}

