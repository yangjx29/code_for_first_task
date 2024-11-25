int main () {
    int YcYbu1;
    int Torj6qRZ;
    int TkLFxnKWJpC;
    int aJEz84S3RP;
    int JpwTfPD4J;
    int x1;
    int c [(274 - 174)] [(294 - 194)] = {(284 - 284)};
    int FfY17SJLPh [(1039 - 939)] [(570 - 470)];
    int QOJ2yvw4Cm [(448 - 348)] [(442 - 342)];
    int Jg0D9XIK;
    scanf ("%d %d", &x1, &aJEz84S3RP);
    {
        TkLFxnKWJpC = (1487 - 557) - (977 - 47);
        while (x1 > TkLFxnKWJpC) {
            for (Torj6qRZ = (679 - 679); aJEz84S3RP > Torj6qRZ; Torj6qRZ++)
                scanf ("%d", &QOJ2yvw4Cm[TkLFxnKWJpC][Torj6qRZ]);
            TkLFxnKWJpC++;
            Torj6qRZ = (870 - 870);
        }
    }
    scanf ("%d %d", &JpwTfPD4J, &Jg0D9XIK);
    {
        TkLFxnKWJpC = (1430 - 737) - 693;
        while (TkLFxnKWJpC < JpwTfPD4J) {
            for (Torj6qRZ = (964 - 964); Jg0D9XIK > Torj6qRZ; Torj6qRZ++)
                scanf ("%d", &FfY17SJLPh[TkLFxnKWJpC][Torj6qRZ]);
            TkLFxnKWJpC++;
            Torj6qRZ = (163 - 163);
        }
    }
    for (TkLFxnKWJpC = (62 - 62); x1 > TkLFxnKWJpC; TkLFxnKWJpC++) {
        {
            Torj6qRZ = (318 - 318);
            while (Jg0D9XIK > Torj6qRZ) {
                {
                    YcYbu1 = (599 - 599);
                    while (YcYbu1 < aJEz84S3RP) {
                        c[TkLFxnKWJpC][Torj6qRZ] = c[TkLFxnKWJpC][Torj6qRZ] + QOJ2yvw4Cm[TkLFxnKWJpC][YcYbu1] * FfY17SJLPh[YcYbu1][Torj6qRZ];
                        YcYbu1++;
                    }
                }
                Torj6qRZ++;
                YcYbu1 = (331 - 331);
            }
        }
        Torj6qRZ = (982 - 982);
    }
    for (TkLFxnKWJpC = (966 - 966); TkLFxnKWJpC < x1; TkLFxnKWJpC++) {
        {
            Torj6qRZ = (15 - 15);
            while (Torj6qRZ < Jg0D9XIK) {
                printf ("%d", c[TkLFxnKWJpC][Torj6qRZ]);
                if (Torj6qRZ != Jg0D9XIK -1)
                    printf (" ");
                else
                    printf ("\n");
                Torj6qRZ++;
            }
        }
        Torj6qRZ = 0;
    }
}

