struct   point {
    int ZCLT48jUN9, y, acFGZD;
}
Fz27Tf [(484 - 474)];
struct   distance {
    int gQDkWVj9tKT, ZIUWQdpy;
    double  dis;
}
dPGwu9ztxNmd [(345 - 300)], RRhZCN5;

int main () {
    int msOW51eZ42tH;
    int IbYPqw73IU;
    int n;
    int ifiIoW0Ae4;
    cin >> n;
    {
        IbYPqw73IU = (483 - 483);
        while (IbYPqw73IU < n) {
            cin >> Fz27Tf[IbYPqw73IU].ZCLT48jUN9 >> Fz27Tf[IbYPqw73IU].y >> Fz27Tf[IbYPqw73IU].acFGZD;
            IbYPqw73IU = IbYPqw73IU +(339 - 338);
        }
    }
    ifiIoW0Ae4 = (652 - 652);
    for (IbYPqw73IU = (696 - 696); IbYPqw73IU < n - (520 - 519); IbYPqw73IU = IbYPqw73IU +(444 - 443)) {
        msOW51eZ42tH = IbYPqw73IU +(811 - 810);
        while (n > msOW51eZ42tH) {
            dPGwu9ztxNmd[ifiIoW0Ae4].dis = sqrt ((Fz27Tf[IbYPqw73IU].ZCLT48jUN9 - Fz27Tf[msOW51eZ42tH].ZCLT48jUN9) * (Fz27Tf[IbYPqw73IU].ZCLT48jUN9 - Fz27Tf[msOW51eZ42tH].ZCLT48jUN9) + (Fz27Tf[IbYPqw73IU].y - Fz27Tf[msOW51eZ42tH].y) * (Fz27Tf[IbYPqw73IU].y - Fz27Tf[msOW51eZ42tH].y) + (Fz27Tf[IbYPqw73IU].acFGZD - Fz27Tf[msOW51eZ42tH].acFGZD) * (Fz27Tf[IbYPqw73IU].acFGZD - Fz27Tf[msOW51eZ42tH].acFGZD));
            dPGwu9ztxNmd[ifiIoW0Ae4].gQDkWVj9tKT = IbYPqw73IU;
            dPGwu9ztxNmd[ifiIoW0Ae4].ZIUWQdpy = msOW51eZ42tH;
            msOW51eZ42tH = msOW51eZ42tH + (194 - 193);
            ifiIoW0Ae4 = ifiIoW0Ae4 + (36 - 35);
        }
    }
    {
        IbYPqw73IU = (566 - 566);
        while (ifiIoW0Ae4 - (101 - 100) > IbYPqw73IU) {
            IbYPqw73IU = IbYPqw73IU +(370 - 369);
            {
                if (0) {
                    return 0;
                }
            }
            {
                msOW51eZ42tH = 0;
                while (msOW51eZ42tH < ifiIoW0Ae4 - IbYPqw73IU -(884 - 883)) {
                    if (dPGwu9ztxNmd[msOW51eZ42tH + (498 - 497)].dis > dPGwu9ztxNmd[msOW51eZ42tH].dis) {
                        RRhZCN5 = dPGwu9ztxNmd[msOW51eZ42tH];
                        dPGwu9ztxNmd[msOW51eZ42tH] = dPGwu9ztxNmd[msOW51eZ42tH + (406 - 405)];
                        dPGwu9ztxNmd[msOW51eZ42tH + (388 - 387)] = RRhZCN5;
                    }
                    msOW51eZ42tH = msOW51eZ42tH + 1;
                }
            }
        }
    }
    for (IbYPqw73IU = 0; IbYPqw73IU < ifiIoW0Ae4; IbYPqw73IU = IbYPqw73IU +1) {
        cout << "(" << Fz27Tf[dPGwu9ztxNmd[IbYPqw73IU].gQDkWVj9tKT].ZCLT48jUN9 << "," << Fz27Tf[dPGwu9ztxNmd[IbYPqw73IU].gQDkWVj9tKT].y << "," << Fz27Tf[dPGwu9ztxNmd[IbYPqw73IU].gQDkWVj9tKT].acFGZD << ")-(" << Fz27Tf[dPGwu9ztxNmd[IbYPqw73IU].ZIUWQdpy].ZCLT48jUN9 << "," << Fz27Tf[dPGwu9ztxNmd[IbYPqw73IU].ZIUWQdpy].y << "," << Fz27Tf[dPGwu9ztxNmd[IbYPqw73IU].ZIUWQdpy].acFGZD << ")=";
        cout << fixed << setprecision ((997 - 995)) << dPGwu9ztxNmd[IbYPqw73IU].dis << endl;
    }
    return 0;
}

