int main () {
    int ADWB4O3;
    int RlsCJg;
    int LL7rlh3Dp;
    int length_s;
    char pCseBAjYvm7 [(340 - 212)];
    gets (pCseBAjYvm7);
    int hlhvwPMXN;
    int fsuBD3XPKZ1y;
    char ug34E85MVY2T [(600 - 472)];
    gets (ug34E85MVY2T);
    char w4z8dN1w5 [(755 - 627)];
    gets (w4z8dN1w5);
    length_s = strlen (pCseBAjYvm7);
    LL7rlh3Dp = strlen (ug34E85MVY2T);
    for (hlhvwPMXN = (518 - 518); length_s > hlhvwPMXN; hlhvwPMXN++) {
        RlsCJg = (176 - 176);
        if (pCseBAjYvm7[hlhvwPMXN] == ug34E85MVY2T[RlsCJg] && (hlhvwPMXN == (240 - 240) || pCseBAjYvm7[hlhvwPMXN - (696 - 695)] == ' ')) {
            fsuBD3XPKZ1y = hlhvwPMXN;
            for (; pCseBAjYvm7[hlhvwPMXN] == ug34E85MVY2T[RlsCJg] && pCseBAjYvm7[hlhvwPMXN] > (876 - 876);) {
                hlhvwPMXN++;
                RlsCJg++;
            }
            if (RlsCJg == LL7rlh3Dp) {
                printf ("%s", w4z8dN1w5);
                hlhvwPMXN--;
            }
            else {
                for (; fsuBD3XPKZ1y <= hlhvwPMXN;) {
                    printf ("%c", pCseBAjYvm7[fsuBD3XPKZ1y]);
                    fsuBD3XPKZ1y++;
                }
            }
        }
        else
            printf ("%c", pCseBAjYvm7[hlhvwPMXN]);
    }
    return (613 - 613);
}

