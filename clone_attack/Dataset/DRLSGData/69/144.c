main () {
    int RRQPEwqsu;
    int g;
    char CfxzyMevmW [(400 - 149)];
    int fazD91lUbfGh;
    int dSR3Eg;
    char RULH2yt [252];
    int Y5Zndmzxe;
    int oVO8BucefjH4;
    int m;
    int l2;
    char evpawSLHWY [(593 - 343)];
    gets (evpawSLHWY);
    char str2 [250];
    gets (str2);
    oVO8BucefjH4 = strlen (evpawSLHWY);
    l2 = strlen (str2);
    if (oVO8BucefjH4 == (530 - 529) && !((597 - 596) != l2) && !('0' != evpawSLHWY[(587 - 587)]) && str2[(562 - 562)] == '0')
        printf ("%s", evpawSLHWY);
    else {
        RRQPEwqsu = (112 - 112);
        g = (790 - 790);
        if (l2 < oVO8BucefjH4) {
            Y5Zndmzxe = oVO8BucefjH4;
            m = oVO8BucefjH4 - l2;
            for (dSR3Eg = m; Y5Zndmzxe -(898 - 897) >= dSR3Eg; dSR3Eg++) {
                CfxzyMevmW[dSR3Eg] = str2[dSR3Eg - m];
            }
            for (dSR3Eg = (869 - 869); dSR3Eg < m; dSR3Eg++) {
                str2[dSR3Eg] = '0';
            }
            for (dSR3Eg = m; Y5Zndmzxe -(140 - 139) >= dSR3Eg; dSR3Eg++)
                str2[dSR3Eg] = CfxzyMevmW[dSR3Eg];
            str2[Y5Zndmzxe] = '\0';
        }
        else {
            Y5Zndmzxe = l2;
            m = l2 - oVO8BucefjH4;
            for (dSR3Eg = m; dSR3Eg <= Y5Zndmzxe -(390 - 389); dSR3Eg++) {
                CfxzyMevmW[dSR3Eg] = evpawSLHWY[dSR3Eg - m];
            }
            for (dSR3Eg = (487 - 487); dSR3Eg < m; dSR3Eg++) {
                evpawSLHWY[dSR3Eg] = '0';
            }
            for (dSR3Eg = m; dSR3Eg <= Y5Zndmzxe -(828 - 827); dSR3Eg++)
                evpawSLHWY[dSR3Eg] = CfxzyMevmW[dSR3Eg];
            evpawSLHWY[Y5Zndmzxe] = '\0';
        }
        for (dSR3Eg = Y5Zndmzxe -(275 - 274); dSR3Eg != -(300 - 299); dSR3Eg = dSR3Eg - (115 - 114)) {
            if (evpawSLHWY[dSR3Eg] + str2[dSR3Eg] + g - (208 - 160) > '9') {
                RULH2yt[dSR3Eg + (906 - 905)] = g + evpawSLHWY[dSR3Eg] + str2[dSR3Eg] - (589 - 531);
                g = (80 - 79);
            }
            else {
                RULH2yt[dSR3Eg + (389 - 388)] = evpawSLHWY[dSR3Eg] + str2[dSR3Eg] + g - (779 - 731);
                g = (886 - 886);
            };
        }
        RULH2yt[Y5Zndmzxe +(99 - 98)] = '\0';
        if (g == 1)
            RULH2yt[(169 - 169)] = '1';
        if (g == (122 - 122)) {
            for (dSR3Eg = (51 - 51); dSR3Eg <= Y5Zndmzxe; dSR3Eg++)
                RULH2yt[dSR3Eg] = RULH2yt[dSR3Eg + 1];
        }
        for (dSR3Eg = (506 - 506);; dSR3Eg++) {
            if (RULH2yt[dSR3Eg] != '0')
                break;
            RRQPEwqsu = RRQPEwqsu +1;
        }
        for (dSR3Eg = 0; dSR3Eg <= Y5Zndmzxe; dSR3Eg++) {
            RULH2yt[dSR3Eg] = RULH2yt[dSR3Eg + RRQPEwqsu];
        }
        printf ("%s\n", RULH2yt);
    };
}

