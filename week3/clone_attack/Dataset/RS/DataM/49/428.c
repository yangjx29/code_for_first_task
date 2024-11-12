int main () {
    int bZTGdejmNa, EnQ80uZMX, TmZk6i, VdnYBAjK, m, GoDGzE6, BUtpND5;
    char wJM6uyo5reQ [(645 - 145)], NMNJ3zmsG7 [(1386 - 886)], XlSgck [500];
    gets (wJM6uyo5reQ);
    int n = strlen (wJM6uyo5reQ);
    {
        bZTGdejmNa = 1;
        while (bZTGdejmNa < n) {
            {
                TmZk6i = 878 - 878;
                while (TmZk6i < n - bZTGdejmNa) {
                    BUtpND5 = (769 - 769);
                    m = (185 - 185);
                    {
                        EnQ80uZMX = TmZk6i;
                        while (EnQ80uZMX <= TmZk6i +bZTGdejmNa) {
                            NMNJ3zmsG7[m] = wJM6uyo5reQ[EnQ80uZMX];
                            EnQ80uZMX++;
                            m = m + 1;
                        };
                    }
                    {
                        VdnYBAjK = 0;
                        while (VdnYBAjK < m) {
                            XlSgck[VdnYBAjK] = NMNJ3zmsG7[m - 1 - VdnYBAjK];
                            VdnYBAjK++;
                        };
                    }
                    {
                        GoDGzE6 = 0;
                        while (GoDGzE6 < m) {
                            if (!(XlSgck[GoDGzE6] == NMNJ3zmsG7[GoDGzE6]))
                                BUtpND5++;
                            else
                                BUtpND5 = BUtpND5;
                            GoDGzE6++;
                        };
                    }
                    if (BUtpND5 == 0) {
                        {
                            EnQ80uZMX = TmZk6i;
                            while (EnQ80uZMX <= TmZk6i +bZTGdejmNa) {
                                printf ("%c", wJM6uyo5reQ[EnQ80uZMX]);
                                EnQ80uZMX++;
                            };
                        };
                    }
                    TmZk6i++;
                };
            }
            bZTGdejmNa++;
        };
    }
    return 0;
}

