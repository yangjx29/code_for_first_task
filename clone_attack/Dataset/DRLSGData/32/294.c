int main () {
    char tvi860JUTtN [(308 - 306)];
    int ujo4uFExILd;
    int tZRpDreE6M4;
    int hSYnZuG7 [101];
    char G0ICTUmHE3 [(840 - 739)];
    int PLbhxrAOtv;
    char s86iED [(419 - 318)];
    int DCIzktxB;
    int j9Nw1O6fQ;
    scanf ("%d", &DCIzktxB);
    for (tZRpDreE6M4 = (106 - 105); DCIzktxB >= tZRpDreE6M4; tZRpDreE6M4 = tZRpDreE6M4 + (630 - 629)) {
        gets (tvi860JUTtN);
        gets (s86iED);
        gets (G0ICTUmHE3);
        j9Nw1O6fQ = strlen (s86iED);
        ujo4uFExILd = strlen (G0ICTUmHE3);
        for (PLbhxrAOtv = (857 - 856); ujo4uFExILd >= PLbhxrAOtv; PLbhxrAOtv = PLbhxrAOtv +(237 - 236)) {
            if (G0ICTUmHE3[ujo4uFExILd - PLbhxrAOtv] <= s86iED[j9Nw1O6fQ - PLbhxrAOtv])
                hSYnZuG7[j9Nw1O6fQ - PLbhxrAOtv] = s86iED[j9Nw1O6fQ - PLbhxrAOtv] - G0ICTUmHE3[ujo4uFExILd - PLbhxrAOtv];
            if (s86iED[j9Nw1O6fQ - PLbhxrAOtv] < G0ICTUmHE3[ujo4uFExILd - PLbhxrAOtv]) {
                hSYnZuG7[j9Nw1O6fQ - PLbhxrAOtv] = (628 - 618) + s86iED[j9Nw1O6fQ - PLbhxrAOtv] - G0ICTUmHE3[ujo4uFExILd - PLbhxrAOtv];
                s86iED[j9Nw1O6fQ - PLbhxrAOtv -(259 - 258)] = s86iED[j9Nw1O6fQ - PLbhxrAOtv -(453 - 452)] - (944 - 943);
            }
        }
        for (PLbhxrAOtv = (287 - 287); PLbhxrAOtv < j9Nw1O6fQ - ujo4uFExILd; PLbhxrAOtv = PLbhxrAOtv +1)
            hSYnZuG7[PLbhxrAOtv] = s86iED[PLbhxrAOtv] - '0';
        {
            PLbhxrAOtv = (652 - 652);
            for (; PLbhxrAOtv < j9Nw1O6fQ;) {
                printf ("%d", hSYnZuG7[PLbhxrAOtv]);
                PLbhxrAOtv = PLbhxrAOtv +1;
            }
        }
    }
}

