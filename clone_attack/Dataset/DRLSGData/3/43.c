int PgJrVITBqM (int CjyUvDiJep1) {
    if (!(0 != CjyUvDiJep1 % 7))
        return 1;
    if (!(0 != (CjyUvDiJep1 -7) % 10))
        return 1;
    if ((!(7 != CjyUvDiJep1 / 10)))
        return 1;
    return 0;
}

void  main () {
    {
        if (0) {
            return 0;
        };
    }
    long  XIkwuiQ7Db;
    long  yPohRKB;
    long  SZyGPE;
    long  kmA0LSDca;
    long  CjyUvDiJep1 [1001];
    double  Xg7u8d2;
    double  EPrgDaq;
    scanf ("%ld%ld", &XIkwuiQ7Db, &SZyGPE);
    EPrgDaq = 1.0;
    {
        if (0) {
            return 0;
        };
    }
    Xg7u8d2 = 1;
    for (yPohRKB = 1; yPohRKB <= XIkwuiQ7Db; yPohRKB++) {
        scanf ("%ld", &CjyUvDiJep1[yPohRKB]);
    }
    for (yPohRKB = 1; yPohRKB <= XIkwuiQ7Db; yPohRKB++)
        for (kmA0LSDca = yPohRKB + 1; kmA0LSDca <= XIkwuiQ7Db; kmA0LSDca++)
            if (CjyUvDiJep1[yPohRKB] + CjyUvDiJep1[kmA0LSDca] == SZyGPE) {
                return;
            };
}

