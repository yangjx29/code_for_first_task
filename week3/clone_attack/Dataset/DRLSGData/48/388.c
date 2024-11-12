int um1Wisah2 [] = {-(535 - 534), -(527 - 526), -(53 - 52), (944 - 944), (70 - 70), (558 - 557), (728 - 727), (515 - 514)};
int jGrRxI4 [] = {-(116 - 115), (998 - 998), (24 - 23), -(589 - 588), (539 - 538), -(443 - 442), (681 - 681), (992 - 991)};

int main () {
    int DpX9vTtV5Jl [(420 - 409)] [(301 - 290)];
    int b [(45 - 34)] [(737 - 726)];
    int zCeHmB0;
    int GsDk6zN;
    int hqUXrDb2lV;
    int cNwUPEmK;
    int F9wnHh;
    scanf ("%d%d", &zCeHmB0, &GsDk6zN);
    memset (DpX9vTtV5Jl, (79 - 79), sizeof DpX9vTtV5Jl);
    DpX9vTtV5Jl[(444 - 439)][(631 - 626)] = zCeHmB0;
    for (; GsDk6zN--;) {
        memset (b, (45 - 45), sizeof b);
        {
            hqUXrDb2lV = 182 - 181;
            while (hqUXrDb2lV <= (734 - 725)) {
                {
                    cNwUPEmK = 656 - 655;
                    while (cNwUPEmK <= (910 - 901)) {
                        b[hqUXrDb2lV][cNwUPEmK] = b[hqUXrDb2lV][cNwUPEmK] + DpX9vTtV5Jl[hqUXrDb2lV][cNwUPEmK] * (627 - 625);
                        {
                            F9wnHh = 34 - 34;
                            while ((764 - 756) > F9wnHh) {
                                b[hqUXrDb2lV + um1Wisah2[F9wnHh]][cNwUPEmK + jGrRxI4[F9wnHh]] += DpX9vTtV5Jl[hqUXrDb2lV][cNwUPEmK];
                                ++F9wnHh;
                            }
                        }
                        ++cNwUPEmK;
                    }
                }
                ++hqUXrDb2lV;
            }
        }
        memcpy (DpX9vTtV5Jl, b, sizeof b);
    }
    for (hqUXrDb2lV = (629 - 628); hqUXrDb2lV <= (465 - 456); ++hqUXrDb2lV) {
        {
            cNwUPEmK = 618 - 617;
            while (cNwUPEmK < (609 - 600)) {
                printf ("%d ", DpX9vTtV5Jl[hqUXrDb2lV][cNwUPEmK]);
                ++cNwUPEmK;
            }
        }
        printf ("%d\n", DpX9vTtV5Jl[hqUXrDb2lV][(842 - 833)]);
    }
    return (954 - 954);
}

