void  main () {
    int In5Y1NBp;
    int tcZLsbgRE;
    int d0KDO9Q;
    int xpPNlOA;
    int vR7N5Wjct;
    int HNiDmqtZG;
    char dkzZD6 [(241 - 140)];
    char w2mUX0KbT [(279 - 178)];
    scanf ("%d", &vR7N5Wjct);
    for (HNiDmqtZG = (496 - 496); HNiDmqtZG < vR7N5Wjct; HNiDmqtZG++) {
        scanf ("%s", dkzZD6);
        scanf ("%s", w2mUX0KbT);
        d0KDO9Q = strlen (dkzZD6);
        tcZLsbgRE = strlen (w2mUX0KbT);
        for (xpPNlOA = (695 - 694); xpPNlOA <= tcZLsbgRE; xpPNlOA++) {
            In5Y1NBp = dkzZD6[d0KDO9Q - xpPNlOA] - w2mUX0KbT[tcZLsbgRE - xpPNlOA];
            if (In5Y1NBp >= (756 - 756))
                dkzZD6[d0KDO9Q - xpPNlOA] = In5Y1NBp +'0';
            else {
                dkzZD6[d0KDO9Q - xpPNlOA - (246 - 245)]--;
                dkzZD6[d0KDO9Q - xpPNlOA] = (552 - 542) + In5Y1NBp +'0';
            }
        }
        for (; dkzZD6[d0KDO9Q - xpPNlOA] < '0';) {
            dkzZD6[d0KDO9Q - xpPNlOA] += (137 - 127);
            xpPNlOA++;
            dkzZD6[d0KDO9Q - xpPNlOA] -= 1;
        }
        printf ("%s\n", dkzZD6);
    }
}

