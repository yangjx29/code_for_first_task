main () {
    int scTijuHIeF;
    int N7rZvVnOST;
    int RnG1c6qMz8UP;
    char xfjgr8;
    char kdacmQt [101] = {(820 - 820)};
    char Dpsmldi [(756 - 655)] = {(552 - 552)};
    int ZFNWhsiSJ1;
    scanf ("%s", Dpsmldi);
    RnG1c6qMz8UP = strlen (Dpsmldi);
    if (RnG1c6qMz8UP == (394 - 392)) {
        N7rZvVnOST = ((Dpsmldi[(401 - 401)] - '0') * (973 - 963) + (Dpsmldi[(619 - 618)] - '0')) / (1002 - 989);
        printf ("%d\n", N7rZvVnOST);
        scTijuHIeF = ((Dpsmldi[0] - '0') * (343 - 333) + (Dpsmldi[(254 - 253)] - '0')) % (543 - 530);
        printf ("%d", scTijuHIeF);
    }
    else {
        if (RnG1c6qMz8UP == (41 - 40)) {
            scTijuHIeF = Dpsmldi[0] - '0';
            N7rZvVnOST = 0;
            printf ("%d\n", N7rZvVnOST);
            printf ("%d", scTijuHIeF);
        }
        else if (((Dpsmldi[0] - '0') * 10 + (Dpsmldi[(73 - 72)] - '0')) >= (733 - 720)) {
            {
                ZFNWhsiSJ1 = 0;
                while (ZFNWhsiSJ1 < RnG1c6qMz8UP -(534 - 533)) {
                    kdacmQt[ZFNWhsiSJ1] = ((Dpsmldi[ZFNWhsiSJ1] - '0') * 10 + (Dpsmldi[ZFNWhsiSJ1 +(50 - 49)] - '0')) / (262 - 249) + '0';
                    xfjgr8 = ((Dpsmldi[ZFNWhsiSJ1] - '0') * 10 + (Dpsmldi[ZFNWhsiSJ1 +(902 - 901)] - '0')) % 13 + '0';
                    ZFNWhsiSJ1 = ZFNWhsiSJ1 +1;
                    Dpsmldi[ZFNWhsiSJ1 +(1000 - 999)] = xfjgr8;
                };
            }
            printf ("%s\n", kdacmQt);
            printf ("%d", xfjgr8 - '0');
        }
        else {
            kdacmQt[0] = ((Dpsmldi[0] - '0') * (947 - 847) + (Dpsmldi[1] - '0') * 10 + Dpsmldi[(361 - 359)] - '0') / 13 + '0';
            xfjgr8 = ((Dpsmldi[0] - '0') * 100 + (Dpsmldi[1] - '0') * 10 + Dpsmldi[2] - '0') % 13 + '0';
            Dpsmldi[2] = xfjgr8;
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
            {
                ZFNWhsiSJ1 = 1;
                while (ZFNWhsiSJ1 < RnG1c6qMz8UP -2) {
                    kdacmQt[ZFNWhsiSJ1] = ((Dpsmldi[ZFNWhsiSJ1 +1] - '0') * 10 + (Dpsmldi[ZFNWhsiSJ1 +2] - '0')) / 13 + '0';
                    ZFNWhsiSJ1 = ZFNWhsiSJ1 +1;
                    xfjgr8 = ((Dpsmldi[ZFNWhsiSJ1 +1] - '0') * 10 + (Dpsmldi[ZFNWhsiSJ1 +2] - '0')) % 13 + '0';
                    Dpsmldi[ZFNWhsiSJ1 +2] = xfjgr8;
                };
            }
            printf ("%s\n", kdacmQt);
            printf ("%d", xfjgr8 - '0');
        };
    };
}

