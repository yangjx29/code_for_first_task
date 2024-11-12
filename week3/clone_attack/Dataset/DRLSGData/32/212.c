char SNoTqwl2XKe [100], GVAbUFEM [100];

void  ecWMaEvtN4 (char SNoTqwl2XKe []) {
    char CACdLfT;
    int OqwNMeZg;
    int m;
    m = strlen (SNoTqwl2XKe);
    for (OqwNMeZg = (254 - 254); OqwNMeZg < m / 2; OqwNMeZg = OqwNMeZg +(948 - 947)) {
        CACdLfT = SNoTqwl2XKe[OqwNMeZg];
        SNoTqwl2XKe[OqwNMeZg] = SNoTqwl2XKe[m - OqwNMeZg -(855 - 854)];
        SNoTqwl2XKe[m - (932 - 931) - OqwNMeZg] = CACdLfT;
    }
}

void  minus (char SNoTqwl2XKe [], char GVAbUFEM []) {
    int OqwNMeZg;
    for (OqwNMeZg = (690 - 690); OqwNMeZg < strlen (GVAbUFEM); OqwNMeZg = OqwNMeZg +(34 - 33)) {
        SNoTqwl2XKe[OqwNMeZg] = SNoTqwl2XKe[OqwNMeZg] - GVAbUFEM[OqwNMeZg];
        if (SNoTqwl2XKe[OqwNMeZg] < 0) {
            SNoTqwl2XKe[OqwNMeZg] = SNoTqwl2XKe[OqwNMeZg] + (140 - 130);
            SNoTqwl2XKe[OqwNMeZg +(732 - 731)] = SNoTqwl2XKe[OqwNMeZg +(259 - 258)] - 1;
        }
        SNoTqwl2XKe[OqwNMeZg] = SNoTqwl2XKe[OqwNMeZg] + 48;
    }
}

void  main () {
    char S5bsl83UWg1z [2];
    int OqwNMeZg;
    gets (SNoTqwl2XKe);
    gets (GVAbUFEM);
    ecWMaEvtN4 (SNoTqwl2XKe);
    ecWMaEvtN4 (GVAbUFEM);
    ecWMaEvtN4 (SNoTqwl2XKe);
    puts (SNoTqwl2XKe);
    int JC1AZ7;
    scanf ("%d\n", &JC1AZ7);
    for (OqwNMeZg = 0; JC1AZ7 -1 > OqwNMeZg; OqwNMeZg = OqwNMeZg +1) {
        gets (SNoTqwl2XKe);
        ecWMaEvtN4 (SNoTqwl2XKe);
        gets (GVAbUFEM);
        ecWMaEvtN4 (GVAbUFEM);
        ecWMaEvtN4 (SNoTqwl2XKe);
        puts (SNoTqwl2XKe);
        gets (S5bsl83UWg1z);
        minus (SNoTqwl2XKe, GVAbUFEM);
    }
    minus (SNoTqwl2XKe, GVAbUFEM);
}

