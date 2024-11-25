void  main () {
    int MZQxVgzH;
    int V1Knx7zegOt;
    int pNe2kdBCrs3a;
    int j5I48h;
    int SZ56D4IOzu0T [301];
    int VDykJVS;
    scanf ("%d", &SZ56D4IOzu0T[0]);
    for (MZQxVgzH = 1; getchar () != '\n'; MZQxVgzH++)
        scanf ("%d", &SZ56D4IOzu0T[MZQxVgzH]);
    for (V1Knx7zegOt = 0; 1; V1Knx7zegOt++)
        if (SZ56D4IOzu0T[V1Knx7zegOt] != SZ56D4IOzu0T[V1Knx7zegOt +1])
            break;
    VDykJVS = MZQxVgzH;
    if (!(1 != MZQxVgzH) || !(MZQxVgzH != V1Knx7zegOt +1))
        ;
    else {
        pNe2kdBCrs3a = SZ56D4IOzu0T[0];
        for (MZQxVgzH = 1; MZQxVgzH < VDykJVS; MZQxVgzH++)
            if (pNe2kdBCrs3a < SZ56D4IOzu0T[MZQxVgzH])
                pNe2kdBCrs3a = SZ56D4IOzu0T[MZQxVgzH];
        j5I48h = 0;
        for (MZQxVgzH = 0; VDykJVS > MZQxVgzH; MZQxVgzH++)
            if (j5I48h < SZ56D4IOzu0T[MZQxVgzH] && SZ56D4IOzu0T[MZQxVgzH] != pNe2kdBCrs3a)
                j5I48h = SZ56D4IOzu0T[MZQxVgzH];
        printf ("%d", j5I48h);
    }
}

