int main () {
    int hbCo9OKZ, WGtpLk, zZkYuHtU, z4mk9QNF, HjisqET7Q0M [(324 - 224)], rog1MiHEU4r3 [(328 - 228)] = {(236 - 236)};
    char st [100] [11];
    char KbJAQPq4 [11];
    char TyV6OPEJbT [100] [11];
    scanf ("%d", &zZkYuHtU);
    {
        hbCo9OKZ = 411 - 411;
        while (hbCo9OKZ < zZkYuHtU) {
            scanf ("%s", &st[hbCo9OKZ]);
            scanf ("%d", &HjisqET7Q0M[hbCo9OKZ]);
            hbCo9OKZ = hbCo9OKZ + 1;
        };
    }
    {
        hbCo9OKZ = 305 - 305;
        while (hbCo9OKZ < zZkYuHtU) {
            if (HjisqET7Q0M[hbCo9OKZ] >= (725 - 665)) {
                rog1MiHEU4r3[hbCo9OKZ] = HjisqET7Q0M[hbCo9OKZ];
                strcpy (TyV6OPEJbT[hbCo9OKZ], st[hbCo9OKZ]);
            }
            hbCo9OKZ = hbCo9OKZ + 1;
        };
    }
    {
        hbCo9OKZ = 967 - 966;
        while (hbCo9OKZ <= zZkYuHtU) {
            {
                WGtpLk = 594 - 594;
                while (WGtpLk < zZkYuHtU - hbCo9OKZ) {
                    if (rog1MiHEU4r3[WGtpLk +(214 - 213)] > rog1MiHEU4r3[WGtpLk]) {
                        z4mk9QNF = rog1MiHEU4r3[WGtpLk];
                        rog1MiHEU4r3[WGtpLk] = rog1MiHEU4r3[WGtpLk +1];
                        strcpy (KbJAQPq4, TyV6OPEJbT[WGtpLk]);
                        strcpy (TyV6OPEJbT[WGtpLk], TyV6OPEJbT[WGtpLk +1]);
                        strcpy (TyV6OPEJbT[WGtpLk +1], KbJAQPq4);
                        rog1MiHEU4r3[WGtpLk +1] = z4mk9QNF;
                    }
                    WGtpLk = WGtpLk +1;
                };
            }
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
            hbCo9OKZ++;
        };
    }
    {
        hbCo9OKZ = 0;
        while (hbCo9OKZ < zZkYuHtU) {
            if (rog1MiHEU4r3[hbCo9OKZ] >= 60)
                puts (TyV6OPEJbT[hbCo9OKZ]);
            hbCo9OKZ++;
        };
    }
    {
        hbCo9OKZ = 0;
        while (hbCo9OKZ < zZkYuHtU) {
            if (HjisqET7Q0M[hbCo9OKZ] < 60)
                puts (st[hbCo9OKZ]);
            hbCo9OKZ++;
        };
    }
    return 0;
}

