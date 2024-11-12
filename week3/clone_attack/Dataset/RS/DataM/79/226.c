void  main () {
    int a [(622 - 322)];
    int RQv16p3hac9;
    int T8ujX5;
    int KbPGsc [100];
    int yAXjpD29J [100];
    int lwq3AR1fTVG;
    int kp39tc;
    int JAOvxieg;
    int NbSm5Plxwo;
    RQv16p3hac9 = (18 - 17);
    T8ujX5 = 0;
    do {
        scanf ("%d%d", &KbPGsc[RQv16p3hac9], &yAXjpD29J[RQv16p3hac9]);
        RQv16p3hac9 = RQv16p3hac9 +1;
    }
    while (KbPGsc[RQv16p3hac9 -1] != 0 && yAXjpD29J[RQv16p3hac9 -1] != 0);
    {
        lwq3AR1fTVG = 1;
        while (lwq3AR1fTVG < RQv16p3hac9 -1) {
            kp39tc = 0;
            {
                NbSm5Plxwo = 1;
                while (NbSm5Plxwo <= KbPGsc[lwq3AR1fTVG]) {
                    a[NbSm5Plxwo] = 1;
                    NbSm5Plxwo = NbSm5Plxwo +1;
                };
            }
            JAOvxieg = KbPGsc[lwq3AR1fTVG];
            {
                kp39tc = kp39tc + 1;
                while (kp39tc <= KbPGsc[lwq3AR1fTVG]) {
                    if (JAOvxieg == 1)
                        break;
                    T8ujX5 = a[kp39tc] + T8ujX5;
                    if (T8ujX5 == yAXjpD29J[lwq3AR1fTVG]) {
                        a[kp39tc] = 0;
                        if (kp39tc == KbPGsc[lwq3AR1fTVG])
                            kp39tc = 0;
                        T8ujX5 = 0;
                        JAOvxieg = JAOvxieg -1;
                        if (JAOvxieg > 1)
                            continue;
                        else
                            break;
                    }
                    if (kp39tc == KbPGsc[lwq3AR1fTVG])
                        kp39tc = 0;
                    kp39tc = kp39tc + 1;
                };
            }
            for (kp39tc = 1; a[kp39tc] == 0;)
                kp39tc = kp39tc + 1;
            printf ("%d\n", kp39tc);
            lwq3AR1fTVG = lwq3AR1fTVG + 1;
        };
    };
}

