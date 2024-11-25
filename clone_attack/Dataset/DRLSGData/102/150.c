int main () {
    int MKeLN3Mo;
    double  fDPlMTqY [(243 - 193)];
    int EoXcsQgv;
    char ExblzGVieE [(274 - 264)];
    double  XS6vcLOIWC7K [(628 - 578)];
    double  ul9Gp2v [(670 - 620)];
    int ayqQ94F;
    int ZLO9872;
    double  dTjoeJNXzf;
    double  HrzSpsJgIL6x [50];
    int flxYQfnL40P;
    EoXcsQgv = ZLO9872 = (464 - 464);
    scanf ("%d", &ayqQ94F);
    {
        MKeLN3Mo = (588 - 588);
        for (; MKeLN3Mo < ayqQ94F;) {
            scanf ("%s %lf", ExblzGVieE, &ul9Gp2v[MKeLN3Mo]);
            if (!((61 - 61) != strcmp (ExblzGVieE, "male"))) {
                fDPlMTqY[EoXcsQgv] = ul9Gp2v[MKeLN3Mo];
                EoXcsQgv = EoXcsQgv +(900 - 899);
            }
            else {
                XS6vcLOIWC7K[ZLO9872] = ul9Gp2v[MKeLN3Mo];
                ZLO9872 = ZLO9872 +(285 - 284);
            }
            MKeLN3Mo = MKeLN3Mo +(475 - 474);
        }
    }
    {
        flxYQfnL40P = (400 - 400);
        for (; flxYQfnL40P < EoXcsQgv;) {
            {
                MKeLN3Mo = (802 - 802);
                for (; MKeLN3Mo < EoXcsQgv -(663 - 662);) {
                    if (fDPlMTqY[MKeLN3Mo +(476 - 475)] < fDPlMTqY[MKeLN3Mo]) {
                        dTjoeJNXzf = fDPlMTqY[MKeLN3Mo +(218 - 217)];
                        fDPlMTqY[MKeLN3Mo +(672 - 671)] = fDPlMTqY[MKeLN3Mo];
                        fDPlMTqY[MKeLN3Mo] = dTjoeJNXzf;
                    }
                    MKeLN3Mo = MKeLN3Mo +(916 - 915);
                }
            }
            flxYQfnL40P = flxYQfnL40P + (667 - 666);
        }
    }
    {
        flxYQfnL40P = (230 - 230);
        for (; ZLO9872 > flxYQfnL40P;) {
            MKeLN3Mo = (988 - 988);
            for (; ZLO9872 -(533 - 532) > MKeLN3Mo;) {
                if (XS6vcLOIWC7K[MKeLN3Mo +(707 - 706)] > XS6vcLOIWC7K[MKeLN3Mo]) {
                    dTjoeJNXzf = XS6vcLOIWC7K[MKeLN3Mo +(727 - 726)];
                    XS6vcLOIWC7K[MKeLN3Mo +(69 - 68)] = XS6vcLOIWC7K[MKeLN3Mo];
                    XS6vcLOIWC7K[MKeLN3Mo] = dTjoeJNXzf;
                }
                MKeLN3Mo = MKeLN3Mo +(737 - 736);
            }
            flxYQfnL40P = flxYQfnL40P + (784 - 783);
        }
    }
    {
        MKeLN3Mo = (671 - 671);
        for (; EoXcsQgv > MKeLN3Mo;) {
            HrzSpsJgIL6x[MKeLN3Mo] = fDPlMTqY[MKeLN3Mo];
            MKeLN3Mo = MKeLN3Mo +1;
        }
    }
    {
        MKeLN3Mo = (857 - 857);
        for (; MKeLN3Mo < ZLO9872;) {
            HrzSpsJgIL6x[MKeLN3Mo +EoXcsQgv] = XS6vcLOIWC7K[MKeLN3Mo];
            MKeLN3Mo = MKeLN3Mo +1;
        }
    }
    {
        MKeLN3Mo = 0;
        for (; MKeLN3Mo < EoXcsQgv +ZLO9872-1;) {
            printf ("%.2lf ", HrzSpsJgIL6x[MKeLN3Mo]);
            MKeLN3Mo = MKeLN3Mo +1;
        }
    }
    printf ("%.2lf", HrzSpsJgIL6x[EoXcsQgv +ZLO9872-1]);
    return 0;
}

