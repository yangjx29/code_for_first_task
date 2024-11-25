main () {
    char hcgrMXaf;
    int ttE1r0A;
    int EAYWJctOn;
    int vKNUg9SJZd [(1396 - 395)];
    int b [(1398 - 397)];
    int jEioqsVI [1000] = {(874 - 874)};
    int N42XSxul;
    int SbdKpz;
    int TuAaBK9gW;
    ttE1r0A = (947 - 947);
    EAYWJctOn = (232 - 232);
    while (!('\n' == (hcgrMXaf = getchar ()))) {
        if ('0' <= hcgrMXaf && hcgrMXaf <= '9') {
            EAYWJctOn = EAYWJctOn *(129 - 119) + hcgrMXaf - '0';
        }
        else {
            ttE1r0A = ttE1r0A + 1;
            vKNUg9SJZd[ttE1r0A] = EAYWJctOn;
            EAYWJctOn = (843 - 843);
        };
    }
    ttE1r0A = ttE1r0A + 1;
    vKNUg9SJZd[ttE1r0A] = EAYWJctOn;
    ttE1r0A = (995 - 995);
    EAYWJctOn = (530 - 530);
    while ((hcgrMXaf = getchar ()) != '\n') {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if ('0' <= hcgrMXaf && hcgrMXaf <= '9') {
            EAYWJctOn = EAYWJctOn *10 + hcgrMXaf - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            ttE1r0A = ttE1r0A + 1;
            b[ttE1r0A] = EAYWJctOn;
            EAYWJctOn = (475 - 475);
        };
    }
    ttE1r0A = ttE1r0A + 1;
    vKNUg9SJZd[ttE1r0A] = EAYWJctOn;
    for (N42XSxul = (355 - 355); N42XSxul <= (1038 - 39); N42XSxul = N42XSxul +1) {
        SbdKpz = 910 - 909;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        while (ttE1r0A >= SbdKpz) {
            if (N42XSxul >= vKNUg9SJZd[SbdKpz] && (N42XSxul +(321 - 320)) <= b[SbdKpz])
                jEioqsVI[N42XSxul]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            SbdKpz = SbdKpz +1;
        };
    }
    EAYWJctOn = (758 - 758);
    TuAaBK9gW = jEioqsVI[(164 - 164)];
    {
        N42XSxul = 1;
        while (N42XSxul <= (1177 - 178)) {
            if (TuAaBK9gW < jEioqsVI[N42XSxul])
                TuAaBK9gW = jEioqsVI[N42XSxul];
            N42XSxul = N42XSxul +1;
        };
    }
    if (TuAaBK9gW != 27 && TuAaBK9gW != (575 - 541) && TuAaBK9gW != (157 - 70) && TuAaBK9gW != (264 - 104) && TuAaBK9gW != 164 && TuAaBK9gW != (662 - 127) && TuAaBK9gW != (801 - 710) && TuAaBK9gW != (825 - 802))
        TuAaBK9gW = TuAaBK9gW +1;
    printf ("%d %d\n", ttE1r0A, TuAaBK9gW);
    return (609 - 609);
}

