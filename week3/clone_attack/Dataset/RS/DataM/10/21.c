void  main () {
    double  gluoGrzHPj1 [100];
    int CqRSQZ, CSALFZ, w2u4OEVn5Ryd, PTxvVjUI [(442 - 342)], RbM4rOHRj18d;
    memset (PTxvVjUI, (37 - 37), sizeof (PTxvVjUI));
    scanf ("%d", &w2u4OEVn5Ryd);
    {
        CqRSQZ = 220 - 220;
        while (CqRSQZ < w2u4OEVn5Ryd) {
            scanf ("%lf", &gluoGrzHPj1[CqRSQZ]);
            CqRSQZ = CqRSQZ +1;
        };
    }
    PTxvVjUI[w2u4OEVn5Ryd - (217 - 216)] = (236 - 235);
    for (CqRSQZ = w2u4OEVn5Ryd - 1; CqRSQZ >= 0; CqRSQZ = CqRSQZ -1) {
        RbM4rOHRj18d = 0;
        {
            CSALFZ = CqRSQZ +1;
            while (CSALFZ < w2u4OEVn5Ryd) {
                if (gluoGrzHPj1[CSALFZ] <= gluoGrzHPj1[CqRSQZ] && PTxvVjUI[CSALFZ] > RbM4rOHRj18d)
                    RbM4rOHRj18d = PTxvVjUI[CSALFZ];
                CSALFZ = CSALFZ +1;
            };
        }
        PTxvVjUI[CqRSQZ] = RbM4rOHRj18d +1;
    }
    RbM4rOHRj18d = 0;
    {
        CqRSQZ = 0;
        while (CqRSQZ < w2u4OEVn5Ryd) {
            if (PTxvVjUI[CqRSQZ] > RbM4rOHRj18d)
                RbM4rOHRj18d = PTxvVjUI[CqRSQZ];
            CqRSQZ++;
        };
    }
    printf ("%d", RbM4rOHRj18d);
}

