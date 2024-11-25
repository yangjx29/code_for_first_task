main () {
    int Lq2jw3M1 [(1658 - 658)];
    int ucuCJyId [1000];
    int sNaJCPVZF [(793 - 693)];
    int n;
    int o1YwQvRjtiSD;
    int j;
    int X0ij5BzAFQM;
    int MuCnKaA;
    int hvV5OtfYhHiP;
    int V2VYT3R;
    int zNKuDszRhl2H;
    int uofi4M5tUp;
    zNKuDszRhl2H = (592 - 592);
    V2VYT3R = (318 - 318);
    do {
        scanf ("%d", &n);
        if (n != (193 - 193)) {
            o1YwQvRjtiSD = (548 - 548);
            do {
                scanf ("%d", &Lq2jw3M1[o1YwQvRjtiSD]);
                o1YwQvRjtiSD = o1YwQvRjtiSD + (969 - 968);
            }
            while (n > o1YwQvRjtiSD);
            o1YwQvRjtiSD = (651 - 651);
            do {
                scanf ("%d", &ucuCJyId[o1YwQvRjtiSD]);
                o1YwQvRjtiSD = o1YwQvRjtiSD + (165 - 164);
            }
            while (n > o1YwQvRjtiSD);
            MuCnKaA = (693 - 693);
            MuCnKaA = 0;
            hvV5OtfYhHiP = -(20756 - 756);
            zNKuDszRhl2H = zNKuDszRhl2H + 1;
            for (j = (547 - 547); j < n - (211 - 210); j++) {
                for (o1YwQvRjtiSD = (295 - 295); n - (475 - 474) - j > o1YwQvRjtiSD; o1YwQvRjtiSD++) {
                    if (Lq2jw3M1[o1YwQvRjtiSD + (195 - 194)] < Lq2jw3M1[o1YwQvRjtiSD]) {
                        X0ij5BzAFQM = Lq2jw3M1[o1YwQvRjtiSD];
                        Lq2jw3M1[o1YwQvRjtiSD] = Lq2jw3M1[o1YwQvRjtiSD + (415 - 414)];
                        Lq2jw3M1[o1YwQvRjtiSD + (947 - 946)] = X0ij5BzAFQM;
                    }
                }
            }
            for (j = (314 - 314); n - (117 - 116) > j; j++) {
                for (o1YwQvRjtiSD = (627 - 627); n - 1 - j > o1YwQvRjtiSD; o1YwQvRjtiSD++) {
                    if (ucuCJyId[o1YwQvRjtiSD] > ucuCJyId[o1YwQvRjtiSD + 1]) {
                        X0ij5BzAFQM = ucuCJyId[o1YwQvRjtiSD];
                        ucuCJyId[o1YwQvRjtiSD] = ucuCJyId[o1YwQvRjtiSD + 1];
                        ucuCJyId[o1YwQvRjtiSD + 1] = X0ij5BzAFQM;
                    }
                }
            }
            j = (797 - 797);
            do {
                j = j + 1;
                o1YwQvRjtiSD = 0;
                do {
                    if (Lq2jw3M1[o1YwQvRjtiSD] > ucuCJyId[o1YwQvRjtiSD])
                        MuCnKaA = MuCnKaA +1;
                    else if (!(ucuCJyId[o1YwQvRjtiSD] != Lq2jw3M1[o1YwQvRjtiSD]))
                        MuCnKaA = MuCnKaA;
                    else
                        MuCnKaA = MuCnKaA -1;
                    o1YwQvRjtiSD = o1YwQvRjtiSD + 1;
                }
                while (o1YwQvRjtiSD < n);
                uofi4M5tUp = Lq2jw3M1[0];
                o1YwQvRjtiSD = 0;
                if (MuCnKaA > hvV5OtfYhHiP)
                    hvV5OtfYhHiP = MuCnKaA;
                MuCnKaA = 0;
                do {
                    Lq2jw3M1[o1YwQvRjtiSD] = Lq2jw3M1[o1YwQvRjtiSD + 1];
                    o1YwQvRjtiSD = o1YwQvRjtiSD + 1;
                }
                while (n - 1 > o1YwQvRjtiSD);
                Lq2jw3M1[n - 1] = uofi4M5tUp;
            }
            while (j < n - 1);
            sNaJCPVZF[V2VYT3R] = hvV5OtfYhHiP * (668 - 468);
            V2VYT3R = V2VYT3R +1;
        }
    }
    while (n != 0);
    V2VYT3R = 0;
    do {
        printf ("%d\n", sNaJCPVZF[V2VYT3R]);
        V2VYT3R = V2VYT3R +1;
    }
    while (V2VYT3R < zNKuDszRhl2H);
}

