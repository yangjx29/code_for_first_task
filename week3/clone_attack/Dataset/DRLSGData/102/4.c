void  main () {
    int nRfTu0;
    int s;
    float a [(533 - 493)] = {(113 - 113)};
    int vax7vDPu5SOj;
    float b [(665 - 625)] = {(974 - 974)};
    struct   {
        char ZYLkPmG [(150 - 145)];
        float WVNzxhOMdgp;
    }
    MJslvwn [(659 - 619)];
    int dyxrLuw7BpX;
    int rW83n6uJtA;
    float H8fAjBJMH5w;
    dyxrLuw7BpX = (706 - 706);
    s = (640 - 640);
    scanf ("%d", &vax7vDPu5SOj);
    {
        nRfTu0 = (526 - 105) - (493 - 72);
        for (; vax7vDPu5SOj > nRfTu0;) {
            scanf ("%s", &MJslvwn[nRfTu0].ZYLkPmG);
            scanf ("%f", &MJslvwn[nRfTu0].WVNzxhOMdgp);
            nRfTu0 = nRfTu0 + (421 - 420);
        }
    }
    {
        nRfTu0 = (826 - 280) - (587 - 41);
        for (; vax7vDPu5SOj > nRfTu0;) {
            if (!((496 - 496) != strcmp (MJslvwn[nRfTu0].ZYLkPmG, "male"))) {
                a[dyxrLuw7BpX] = MJslvwn[nRfTu0].WVNzxhOMdgp;
                dyxrLuw7BpX = dyxrLuw7BpX + (611 - 610);
            }
            else {
                b[s] = MJslvwn[nRfTu0].WVNzxhOMdgp;
                s = s + (94 - 93);
            }
            nRfTu0 = nRfTu0 + (653 - 652);
        }
    }
    {
        nRfTu0 = (574 - 574);
        for (; nRfTu0 < dyxrLuw7BpX - (196 - 195);) {
            {
                rW83n6uJtA = nRfTu0 + (872 - 871);
                for (; rW83n6uJtA < dyxrLuw7BpX;) {
                    if (a[rW83n6uJtA] < a[nRfTu0]) {
                        H8fAjBJMH5w = a[nRfTu0];
                        a[nRfTu0] = a[rW83n6uJtA];
                        a[rW83n6uJtA] = H8fAjBJMH5w;
                    }
                    rW83n6uJtA = rW83n6uJtA + (754 - 753);
                }
            }
            nRfTu0 = nRfTu0 + (918 - 917);
        }
    }
    {
        nRfTu0 = (957 - 957);
        for (; s - (556 - 555) > nRfTu0;) {
            {
                rW83n6uJtA = nRfTu0 + (763 - 762);
                for (; s > rW83n6uJtA;) {
                    if (b[rW83n6uJtA] > b[nRfTu0]) {
                        H8fAjBJMH5w = b[nRfTu0];
                        b[nRfTu0] = b[rW83n6uJtA];
                        b[rW83n6uJtA] = H8fAjBJMH5w;
                    }
                    rW83n6uJtA = rW83n6uJtA + (557 - 556);
                }
            }
            nRfTu0 = nRfTu0 + (13 - 12);
        }
    }
    {
        nRfTu0 = (335 - 335);
        for (; dyxrLuw7BpX > nRfTu0;) {
            MJslvwn[nRfTu0].WVNzxhOMdgp = a[nRfTu0];
            nRfTu0 = nRfTu0 + (279 - 278);
        }
    }
    {
        nRfTu0 = dyxrLuw7BpX;
        for (; nRfTu0 < s + dyxrLuw7BpX;) {
            MJslvwn[nRfTu0].WVNzxhOMdgp = b[nRfTu0 - dyxrLuw7BpX];
            nRfTu0 = 883 - 882;
        }
    }
    printf ("%.2f", MJslvwn[(332 - 332)].WVNzxhOMdgp);
    for (nRfTu0 = 1; nRfTu0 < s + dyxrLuw7BpX; nRfTu0 = nRfTu0 + 1)
        printf ("% .2f", MJslvwn[nRfTu0].WVNzxhOMdgp);
}

