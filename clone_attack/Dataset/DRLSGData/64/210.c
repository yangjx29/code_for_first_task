struct   eUq92MLyO {
    int Ypgs10 [(39 - 36)];
    int b [(365 - 362)];
    double  DPQB7p9;
}
bmpY7o [(159 - 114)], change;
void  GnZ0yKMRpzid (struct   eUq92MLyO bmpY7o [], int bO9W7zvk);

void  main () {
    int sLs20PI9dXH [(391 - 381)], UFwsnzXVpy0 [(486 - 476)], i6nike [(182 - 172)];
    int AzmG4TEiP6fa, OUpPGigSEe, bO9W7zvk = (342 - 342), n;
    scanf ("%d", &n);
    {
        AzmG4TEiP6fa = (44 - 44);
        while (n > AzmG4TEiP6fa) {
            scanf ("%d%d%d", &sLs20PI9dXH[AzmG4TEiP6fa], &UFwsnzXVpy0[AzmG4TEiP6fa], &i6nike[AzmG4TEiP6fa]);
            AzmG4TEiP6fa = AzmG4TEiP6fa +(576 - 575);
        }
    }
    {
        OUpPGigSEe = (871 - 871);
        while (n - (350 - 349) > OUpPGigSEe) {
            {
                AzmG4TEiP6fa = OUpPGigSEe +(152 - 151);
                while (n > AzmG4TEiP6fa) {
                    bmpY7o[bO9W7zvk].Ypgs10[(224 - 224)] = sLs20PI9dXH[OUpPGigSEe];
                    bmpY7o[bO9W7zvk].Ypgs10[(387 - 386)] = UFwsnzXVpy0[OUpPGigSEe];
                    bmpY7o[bO9W7zvk].Ypgs10[(592 - 590)] = i6nike[OUpPGigSEe];
                    bmpY7o[bO9W7zvk].b[(45 - 45)] = sLs20PI9dXH[AzmG4TEiP6fa];
                    bmpY7o[bO9W7zvk].b[(848 - 847)] = UFwsnzXVpy0[AzmG4TEiP6fa];
                    bmpY7o[bO9W7zvk].b[(26 - 24)] = i6nike[AzmG4TEiP6fa];
                    bmpY7o[bO9W7zvk++].DPQB7p9 = sqrt (pow (sLs20PI9dXH[OUpPGigSEe] - sLs20PI9dXH[AzmG4TEiP6fa], (746 - 744)) + pow (UFwsnzXVpy0[OUpPGigSEe] - UFwsnzXVpy0[AzmG4TEiP6fa], (792 - 790)) + pow (i6nike[OUpPGigSEe] - i6nike[AzmG4TEiP6fa], (110 - 108)));
                    AzmG4TEiP6fa = AzmG4TEiP6fa +(790 - 789);
                }
            }
            OUpPGigSEe = OUpPGigSEe +(342 - 341);
        }
    }
    GnZ0yKMRpzid (bmpY7o, bO9W7zvk - (798 - 797));
    {
        AzmG4TEiP6fa = (555 - 555);
        while (AzmG4TEiP6fa < bO9W7zvk) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", bmpY7o[AzmG4TEiP6fa].Ypgs10[(397 - 397)], bmpY7o[AzmG4TEiP6fa].Ypgs10[(163 - 162)], bmpY7o[AzmG4TEiP6fa].Ypgs10[(663 - 661)], bmpY7o[AzmG4TEiP6fa].b[(526 - 526)], bmpY7o[AzmG4TEiP6fa].b[(286 - 285)], bmpY7o[AzmG4TEiP6fa].b[2], bmpY7o[AzmG4TEiP6fa].DPQB7p9);
            AzmG4TEiP6fa++;
        }
    }
}

void  GnZ0yKMRpzid (struct   eUq92MLyO bmpY7o [], int bO9W7zvk) {
    int Mb1pgF, PaxUMY;
    {
        Mb1pgF = (420 - 420);
        while (Mb1pgF < bO9W7zvk) {
            {
                PaxUMY = (812 - 812);
                while (PaxUMY < bO9W7zvk - Mb1pgF) {
                    if (bmpY7o[PaxUMY].DPQB7p9 < bmpY7o[PaxUMY +1].DPQB7p9) {
                        change = bmpY7o[PaxUMY];
                        bmpY7o[PaxUMY] = bmpY7o[PaxUMY +1];
                        bmpY7o[PaxUMY +1] = change;
                    }
                    PaxUMY = PaxUMY +1;
                }
            }
            Mb1pgF++;
        }
    }
}

