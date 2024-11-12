void  main () {
    char Dbkf0RAqtNUT [(423 - 323)];
    char uFgkKxsI [(326 - 226)];
    char tCfESdR [100];
    char kSTyztFW [100] = {(961 - 961)};
    int UeMu4p2di, Ucw9IkfHuiqE, j, q0eVYvcSdRWH, ViJdjUa, len2;
    scanf ("%d", &UeMu4p2di);
    for (Ucw9IkfHuiqE = (896 - 895); UeMu4p2di >= Ucw9IkfHuiqE; Ucw9IkfHuiqE = Ucw9IkfHuiqE +(473 - 472)) {
        q0eVYvcSdRWH = (575 - 476);
        scanf ("%s", Dbkf0RAqtNUT);
        ViJdjUa = strlen (Dbkf0RAqtNUT);
        scanf ("%s", uFgkKxsI);
        for (j = ViJdjUa -(591 - 590); j >= 0; j = j - 1) {
            Dbkf0RAqtNUT[q0eVYvcSdRWH] = Dbkf0RAqtNUT[j];
            q0eVYvcSdRWH = q0eVYvcSdRWH - 1;
            Dbkf0RAqtNUT[j] = 0;
        }
        q0eVYvcSdRWH = (761 - 662);
        len2 = strlen (uFgkKxsI);
        for (j = len2 - 1; 0 <= j; j = j - 1) {
            uFgkKxsI[q0eVYvcSdRWH] = uFgkKxsI[j];
            uFgkKxsI[j] = 0;
            q0eVYvcSdRWH--;
        }
        for (j = len2; ViJdjUa > j; j = j + 1)
            uFgkKxsI[(308 - 209) - j] = '0';
        q0eVYvcSdRWH = 0;
        for (j = (680 - 581); j >= 0; j--) {
            if (Dbkf0RAqtNUT[j] >= uFgkKxsI[j])
                tCfESdR[j] = Dbkf0RAqtNUT[j] - uFgkKxsI[j] + 48;
            else {
                tCfESdR[j] = (615 - 557) + Dbkf0RAqtNUT[j] - uFgkKxsI[j];
                Dbkf0RAqtNUT[j - 1] = Dbkf0RAqtNUT[j - 1] - 1;
            }
        }
        for (j = 0; j <= 99; j = j + 1)
            kSTyztFW[j] = 0;
        for (j = 99 - ViJdjUa +1; j <= 99; j++) {
            kSTyztFW[q0eVYvcSdRWH] = tCfESdR[j];
            q0eVYvcSdRWH = q0eVYvcSdRWH + 1;
        }
        printf ("%s\n", kSTyztFW);
    }
}

