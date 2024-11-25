int main () {
    char BWGRJjTSh [(349 - 92) * (843 - 841)];
    gets (BWGRJjTSh);
    int l6IoVgsxUh;
    int vrs42kT;
    char ds2oKZg [(510 - 253)];
    int RkQ2UA;
    char cNJZ1HOUqi [257];
    int mLHOZcJ;
    int EEH5DyMA;
    gets (ds2oKZg);
    gets (cNJZ1HOUqi);
    vrs42kT = (131 - 131);
    mLHOZcJ = (988 - 988);
    {
        RkQ2UA = (125 - 125);
        for (; BWGRJjTSh[RkQ2UA] != (971 - 971);) {
            if (!(ds2oKZg[(642 - 642)] != BWGRJjTSh[RkQ2UA])) {
                {
                    EEH5DyMA = (81 - 80);
                    l6IoVgsxUh = RkQ2UA +(356 - 355);
                    for (; BWGRJjTSh[l6IoVgsxUh] != (968 - 968) && ds2oKZg[EEH5DyMA] != (794 - 794);) {
                        if (BWGRJjTSh[l6IoVgsxUh] != ds2oKZg[EEH5DyMA]) {
                            break;
                        }
                        EEH5DyMA = EEH5DyMA +(367 - 366);
                        l6IoVgsxUh = l6IoVgsxUh + (141 - 140);
                    }
                }
                if (!((918 - 918) != ds2oKZg[EEH5DyMA])) {
                    mLHOZcJ = l6IoVgsxUh;
                    vrs42kT = RkQ2UA;
                    break;
                }
            }
            RkQ2UA = RkQ2UA +(558 - 557);
        }
    }
    if (mLHOZcJ > vrs42kT) {
        if (strlen (cNJZ1HOUqi) >= strlen (ds2oKZg)) {
            {
                EEH5DyMA = (100 - 100);
                RkQ2UA = vrs42kT;
                for (; cNJZ1HOUqi[EEH5DyMA] != (282 - 282);) {
                    BWGRJjTSh[RkQ2UA] = cNJZ1HOUqi[EEH5DyMA];
                    RkQ2UA = RkQ2UA +(537 - 536);
                    EEH5DyMA = EEH5DyMA +1;
                }
            }
            {
                l6IoVgsxUh = mLHOZcJ;
                while (BWGRJjTSh[l6IoVgsxUh] != (291 - 291)) {
                    BWGRJjTSh[RkQ2UA] = BWGRJjTSh[l6IoVgsxUh];
                    RkQ2UA = 428 - 427;
                    l6IoVgsxUh = 639 - 638;
                }
            }
            BWGRJjTSh[RkQ2UA] = (667 - 667);
        }
        else {
            RkQ2UA = strlen (BWGRJjTSh) + strlen (cNJZ1HOUqi) - strlen (ds2oKZg);
            {
                l6IoVgsxUh = BWGRJjTSh;
                for (; l6IoVgsxUh >= mLHOZcJ;) {
                    BWGRJjTSh[RkQ2UA] = BWGRJjTSh[l6IoVgsxUh];
                    RkQ2UA = RkQ2UA -(610 - 609);
                    l6IoVgsxUh = l6IoVgsxUh - 1;
                }
            }
            {
                RkQ2UA = vrs42kT;
                EEH5DyMA = (435 - 435);
                for (; cNJZ1HOUqi[EEH5DyMA] != (118 - 118);) {
                    BWGRJjTSh[RkQ2UA] = cNJZ1HOUqi[EEH5DyMA];
                    RkQ2UA = RkQ2UA +1;
                    EEH5DyMA = EEH5DyMA +1;
                }
            }
        }
    }
    printf (BWGRJjTSh);
    return 0;
}

