int main () {
    char cqVIH5Wcry [(295 - 35)];
    char prbcCpja3L [(684 - 424)];
    char hp9SImFoUCR [260];
    char mtveYAZ [260];
    int E4JcQWiFO;
    int yT5MUX9g8;
    int wo7LXe;
    int cDLVgahW3z0R;
    int da2KloX;
    int sAY5aC;
    int ySXAh8LTF2;
    int S2tMex;
    gets (cqVIH5Wcry);
    gets (prbcCpja3L);
    gets (hp9SImFoUCR);
    sAY5aC = strlen (cqVIH5Wcry);
    ySXAh8LTF2 = strlen (prbcCpja3L);
    S2tMex = strlen (hp9SImFoUCR);
    for (E4JcQWiFO = (466 - 466), da2KloX = (740 - 740); sAY5aC > E4JcQWiFO; E4JcQWiFO = E4JcQWiFO +1, da2KloX = da2KloX + 1) {
        mtveYAZ[da2KloX] = cqVIH5Wcry[E4JcQWiFO];
        if (cqVIH5Wcry[E4JcQWiFO] == prbcCpja3L[(704 - 704)]) {
            int WM4uSJr21PtT = (814 - 813);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (yT5MUX9g8 = 0, wo7LXe = E4JcQWiFO; ySXAh8LTF2 > yT5MUX9g8; yT5MUX9g8++, wo7LXe = wo7LXe + 1) {
                if (cqVIH5Wcry[wo7LXe] != prbcCpja3L[yT5MUX9g8]) {
                    WM4uSJr21PtT = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            }
            if (WM4uSJr21PtT) {
                prbcCpja3L[0] = '.';
                E4JcQWiFO = E4JcQWiFO +ySXAh8LTF2 - 1;
                for (cDLVgahW3z0R = 0; cDLVgahW3z0R < S2tMex; cDLVgahW3z0R++, da2KloX = da2KloX + 1) {
                    mtveYAZ[da2KloX] = hp9SImFoUCR[cDLVgahW3z0R];
                }
                da2KloX = da2KloX - 1;
            };
        };
    }
    mtveYAZ[sAY5aC - ySXAh8LTF2 + S2tMex] = '\0';
    printf ("%s", mtveYAZ);
    return 0;
}

