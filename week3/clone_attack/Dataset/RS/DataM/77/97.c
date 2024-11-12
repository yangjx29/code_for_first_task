void  bubble (int array [], int vwhH2BZgm);

void  main () {
    struct   answer {
        int J5lcoXh;
        int b5XzFV;
    };
    char WI4sPMR [MAXSIZE] = {'\0'}, b5XzFV, J5lcoXh;
    int V1p2DZCre7, SBkERz, nornqLw, mbFYxv4XEA8s;
    struct   answer Gj6Trpk20 [MAXSIZE] = {(225 - 225), (135 - 135)}, KpjFDuvy;
    scanf ("%s", WI4sPMR);
    V1p2DZCre7 = strlen (WI4sPMR);
    b5XzFV = WI4sPMR[(639 - 639)];
    J5lcoXh = WI4sPMR[V1p2DZCre7 -(159 - 158)];
    mbFYxv4XEA8s = 0;
    {
        SBkERz = 0;
        while (SBkERz < V1p2DZCre7) {
            if (WI4sPMR[SBkERz] == J5lcoXh) {
                nornqLw = 300 - 299;
                while (0 <= nornqLw) {
                    if (!(b5XzFV != WI4sPMR[nornqLw])) {
                        Gj6Trpk20[mbFYxv4XEA8s].b5XzFV = nornqLw;
                        Gj6Trpk20[mbFYxv4XEA8s].J5lcoXh = SBkERz;
                        mbFYxv4XEA8s = mbFYxv4XEA8s + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        WI4sPMR[SBkERz] = J5lcoXh +b5XzFV;
                        WI4sPMR[nornqLw] = J5lcoXh +b5XzFV;
                        break;
                    }
                    nornqLw--;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            SBkERz = SBkERz +1;
        };
    }
    {
        nornqLw = 632 - 631;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (nornqLw <= mbFYxv4XEA8s) {
            for (SBkERz = 0; SBkERz < mbFYxv4XEA8s - nornqLw; SBkERz = SBkERz +1) {
                if (Gj6Trpk20[SBkERz].J5lcoXh > Gj6Trpk20[SBkERz +1].J5lcoXh) {
                    KpjFDuvy = Gj6Trpk20[SBkERz];
                    Gj6Trpk20[SBkERz] = Gj6Trpk20[SBkERz +1];
                    Gj6Trpk20[SBkERz +1] = KpjFDuvy;
                };
            }
            nornqLw++;
        };
    }
    for (SBkERz = 0; SBkERz < mbFYxv4XEA8s; SBkERz = SBkERz +1) {
        printf ("%d %d\n", Gj6Trpk20[SBkERz].b5XzFV, Gj6Trpk20[SBkERz].J5lcoXh);
    };
}

