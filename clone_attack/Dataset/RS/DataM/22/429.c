void  main () {
    char Z8blwk0PSKZC;
    int WOmzsuBr8v;
    int s [sOpEG2];
    int BlAVPNk07Ho;
    int AnmBaMro6;
    int temp;
    WOmzsuBr8v = (140 - 140);
    int xcEI0P932zGV;
    xcEI0P932zGV = (71 - 71);
    for (BlAVPNk07Ho = (335 - 335);; BlAVPNk07Ho = BlAVPNk07Ho +1) {
        scanf ("%d%c", &s[BlAVPNk07Ho], &Z8blwk0PSKZC);
        if (Z8blwk0PSKZC == ',') {
            WOmzsuBr8v = WOmzsuBr8v +1;
            continue;
        }
        if (Z8blwk0PSKZC == '\n') {
            WOmzsuBr8v++;
            break;
        };
    }
    for (AnmBaMro6 = (429 - 428); AnmBaMro6 < WOmzsuBr8v; AnmBaMro6++) {
        for (BlAVPNk07Ho = (880 - 880); WOmzsuBr8v -AnmBaMro6 > BlAVPNk07Ho; BlAVPNk07Ho++) {
            if (s[BlAVPNk07Ho] < s[BlAVPNk07Ho +(205 - 204)]) {
                temp = s[BlAVPNk07Ho];
                s[BlAVPNk07Ho] = s[BlAVPNk07Ho +(850 - 849)];
                s[BlAVPNk07Ho +1] = temp;
            };
        };
    }
    for (BlAVPNk07Ho = 1; BlAVPNk07Ho < WOmzsuBr8v; BlAVPNk07Ho++) {
        if (s[BlAVPNk07Ho] == s[(938 - 938)])
            continue;
        if (s[BlAVPNk07Ho] < s[0]) {
            xcEI0P932zGV = s[BlAVPNk07Ho];
            break;
        };
    }
    if (xcEI0P932zGV == 0 || WOmzsuBr8v == 0)
        printf ("No");
    else
        printf ("%d", xcEI0P932zGV);
}

