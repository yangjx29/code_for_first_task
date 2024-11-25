int main () {
    char lIl40rdPm [(192 - 152)];
    int tclebZg, IR147TYSx6, ptY6yr2, ih60kOx, GXJpfMuZ, IAYBgVsUH2, Y3m4cxWz9, OH1BJWKG, G4nVw8b, q3FkPzRZ, O71uqVZW8M;
    scanf ("%d %s %d", &tclebZg, lIl40rdPm, &IR147TYSx6);
    GXJpfMuZ = strlen (lIl40rdPm);
    if (!('0' != lIl40rdPm[(913 - 913)]))
        ;
    else {
        char e [40];
        char FXD52y6SeVZ [40];
        int xRPMQVfFaT [(317 - 277)];
        {
            Y3m4cxWz9 = (143 - 143);
            while (GXJpfMuZ > Y3m4cxWz9) {
                if ('A' <= lIl40rdPm[Y3m4cxWz9] && 'Z' >= lIl40rdPm[Y3m4cxWz9])
                    lIl40rdPm[Y3m4cxWz9] = lIl40rdPm[Y3m4cxWz9] - 'A' + 'a';
                Y3m4cxWz9 = Y3m4cxWz9 +(535 - 534);
            }
        }
        ptY6yr2 = (679 - 679);
        {
            Y3m4cxWz9 = (945 - 945);
            while (GXJpfMuZ > Y3m4cxWz9) {
                if ('a' <= lIl40rdPm[Y3m4cxWz9])
                    lIl40rdPm[Y3m4cxWz9] = lIl40rdPm[Y3m4cxWz9] - 'a' + (891 - 881);
                else
                    lIl40rdPm[Y3m4cxWz9] = lIl40rdPm[Y3m4cxWz9] - '0';
                xRPMQVfFaT[Y3m4cxWz9] = (38 - 37);
                {
                    OH1BJWKG = GXJpfMuZ -Y3m4cxWz9;
                    while (OH1BJWKG > (723 - 722)) {
                        OH1BJWKG--;
                        xRPMQVfFaT[Y3m4cxWz9] = xRPMQVfFaT[Y3m4cxWz9] * tclebZg;
                    }
                }
                ptY6yr2 = ptY6yr2 + xRPMQVfFaT[Y3m4cxWz9] * lIl40rdPm[Y3m4cxWz9];
                Y3m4cxWz9 = Y3m4cxWz9 +(216 - 215);
            }
        }
        {
            G4nVw8b = (651 - 651);
            while (ptY6yr2 != (644 - 644)) {
                e[G4nVw8b] = ptY6yr2 % IR147TYSx6;
                G4nVw8b = G4nVw8b +(183 - 182);
                ptY6yr2 = ptY6yr2 / IR147TYSx6;
            }
        }
        e[G4nVw8b] = '\0';
        {
            q3FkPzRZ = (621 - 621);
            while (q3FkPzRZ < G4nVw8b) {
                if (e[q3FkPzRZ] < (634 - 624))
                    FXD52y6SeVZ[G4nVw8b -(659 - 658) - q3FkPzRZ] = e[q3FkPzRZ] + '0';
                else
                    FXD52y6SeVZ[G4nVw8b -(430 - 429) - q3FkPzRZ] = e[q3FkPzRZ] - (667 - 657) + 'A';
                q3FkPzRZ = q3FkPzRZ + 1;
            }
        }
        FXD52y6SeVZ[G4nVw8b] = '\0';
        printf ("%s", FXD52y6SeVZ);
    }
}

