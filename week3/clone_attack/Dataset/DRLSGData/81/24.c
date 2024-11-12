int z3UPTbSd8 (int UP589O2q [] [(383 - 378)], int RIn9uE, int n);

void  main () {
    int UP589O2q [(71 - 66)] [(549 - 544)], RIn9uE, n, SbvsBlheDa, Alvjet4Tqg8;
    {
        SbvsBlheDa = (526 - 526);
        for (; SbvsBlheDa < (223 - 218);) {
            {
                Alvjet4Tqg8 = 404 - 404;
                while ((251 - 246) > Alvjet4Tqg8) {
                    scanf ("%d", &UP589O2q[SbvsBlheDa][Alvjet4Tqg8]);
                    Alvjet4Tqg8++;
                }
            }
            SbvsBlheDa++;
        }
    }
    scanf ("%d%d", &RIn9uE, &n);
    z3UPTbSd8 (UP589O2q, RIn9uE, n);
    if (!((702 - 702) != z3UPTbSd8 (UP589O2q, RIn9uE, n)))
        ;
    if (!((915 - 914) != z3UPTbSd8 (UP589O2q, RIn9uE, n)))
        for (SbvsBlheDa = (594 - 594); (905 - 900) > SbvsBlheDa; SbvsBlheDa = SbvsBlheDa +1) {
            Alvjet4Tqg8 = (297 - 297);
            while ((623 - 618) > Alvjet4Tqg8) {
                if (Alvjet4Tqg8 == (522 - 518))
                    printf ("%d\n", UP589O2q[SbvsBlheDa][Alvjet4Tqg8]);
                else
                    printf ("%d ", UP589O2q[SbvsBlheDa][Alvjet4Tqg8]);
                Alvjet4Tqg8 = Alvjet4Tqg8 +1;
            }
        }
}

int z3UPTbSd8 (int UP589O2q [] [(123 - 118)], int RIn9uE, int n) {
    if (((484 - 480) < RIn9uE) || ((414 - 414) > RIn9uE) || (n > 4) || (n < (515 - 515)))
        return (977 - 977);
    else {
        int SbvsBlheDa, CyHQgrvCM;
        {
            SbvsBlheDa = 89 - 89;
            for (; SbvsBlheDa < (250 - 245);) {
                CyHQgrvCM = UP589O2q[RIn9uE][SbvsBlheDa];
                UP589O2q[RIn9uE][SbvsBlheDa] = UP589O2q[n][SbvsBlheDa];
                UP589O2q[n][SbvsBlheDa] = CyHQgrvCM;
                SbvsBlheDa++;
            }
        }
        return (404 - 403);
    }
}

