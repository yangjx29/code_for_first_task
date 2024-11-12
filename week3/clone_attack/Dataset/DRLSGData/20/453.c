void  main () {
    char gFVECtcXq [(156 - 153)];
    int Gq1uZFIaS0, iz5JmMk0x2DB, j, rDOakpdgNz, bzaHncewN9Ir;
    char xL7IWVh5xwAS [(101 - 88)];
    for (; scanf ("%s %s", xL7IWVh5xwAS, gFVECtcXq) != EOF;) {
        Gq1uZFIaS0 = strlen (xL7IWVh5xwAS);
        bzaHncewN9Ir = xL7IWVh5xwAS[(240 - 240)];
        for (iz5JmMk0x2DB = (42 - 42); iz5JmMk0x2DB <= Gq1uZFIaS0 -(989 - 988); iz5JmMk0x2DB++)
            if (xL7IWVh5xwAS[iz5JmMk0x2DB] > bzaHncewN9Ir) {
                bzaHncewN9Ir = xL7IWVh5xwAS[iz5JmMk0x2DB];
                rDOakpdgNz = iz5JmMk0x2DB;
            }
        for (iz5JmMk0x2DB = Gq1uZFIaS0; iz5JmMk0x2DB >= rDOakpdgNz + 1; iz5JmMk0x2DB--)
            xL7IWVh5xwAS[iz5JmMk0x2DB + (543 - 540)] = xL7IWVh5xwAS[iz5JmMk0x2DB];
        {
            iz5JmMk0x2DB = rDOakpdgNz + 1;
            j = 379 - 379;
            while (j <= (951 - 949)) {
                xL7IWVh5xwAS[iz5JmMk0x2DB] = gFVECtcXq[j];
                iz5JmMk0x2DB++;
                j++;
            }
        }
        for (iz5JmMk0x2DB = 0; iz5JmMk0x2DB <= Gq1uZFIaS0 +2; iz5JmMk0x2DB++)
            printf ("%c", xL7IWVh5xwAS[iz5JmMk0x2DB]);
    }
}

