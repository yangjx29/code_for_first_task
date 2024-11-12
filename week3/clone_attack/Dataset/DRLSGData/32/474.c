void  main () {
    int cIXjoywu;
    int InRhST4DX0d;
    int nUGHMDS [20] [100] = {'\0'};
    char lhoyxTVOtr [20] [100] = {'\0'};
    int cTU3oy64M;
    int zfu7dG3XDKHg;
    int wbmuDcpvNZ8;
    char tpsYy6 [(563 - 543)] [(533 - 433)] = {'\0'};
    char jELiTIz [(508 - 488)] [(648 - 548)] = {'\0'};
    int Mxclq6gZ;
    scanf ("%d", &cTU3oy64M);
    InRhST4DX0d = (708 - 708);
    for (zfu7dG3XDKHg = (755 - 755); zfu7dG3XDKHg < cTU3oy64M; zfu7dG3XDKHg++) {
        scanf ("%s", lhoyxTVOtr[zfu7dG3XDKHg]);
        scanf ("%s", jELiTIz[zfu7dG3XDKHg]);
        cIXjoywu = strlen (lhoyxTVOtr[zfu7dG3XDKHg]);
        Mxclq6gZ = strlen (jELiTIz[zfu7dG3XDKHg]);
        for (wbmuDcpvNZ8 = cIXjoywu - Mxclq6gZ; wbmuDcpvNZ8 < cIXjoywu; wbmuDcpvNZ8++) {
            tpsYy6[zfu7dG3XDKHg][wbmuDcpvNZ8] = jELiTIz[zfu7dG3XDKHg][wbmuDcpvNZ8 - cIXjoywu + Mxclq6gZ];
        }
        {
            wbmuDcpvNZ8 = 108 - 108;
            for (; wbmuDcpvNZ8 < cIXjoywu - Mxclq6gZ;) {
                tpsYy6[zfu7dG3XDKHg][wbmuDcpvNZ8] = '0';
                wbmuDcpvNZ8++;
            }
        }
        for (wbmuDcpvNZ8 = cIXjoywu - (50 - 49); wbmuDcpvNZ8 > (767 - 767); wbmuDcpvNZ8--) {
            if (lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8] < (521 - 473)) {
                lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8] = lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8] + (804 - 794);
                lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8 - (989 - 988)] = lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8 - (819 - 818)] - (691 - 690);
            }
            if (tpsYy6[zfu7dG3XDKHg][wbmuDcpvNZ8] > lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8]) {
                lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8 - (741 - 740)] = lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8 - (356 - 355)] - (242 - 241);
                nUGHMDS[zfu7dG3XDKHg][wbmuDcpvNZ8] = (int) (227 - 217) + lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8] - tpsYy6[zfu7dG3XDKHg][wbmuDcpvNZ8];
            }
            else {
                nUGHMDS[zfu7dG3XDKHg][wbmuDcpvNZ8] = (int) lhoyxTVOtr[zfu7dG3XDKHg][wbmuDcpvNZ8] - tpsYy6[zfu7dG3XDKHg][wbmuDcpvNZ8];
            }
        }
        nUGHMDS[zfu7dG3XDKHg][(385 - 385)] = (int) lhoyxTVOtr[zfu7dG3XDKHg][(385 - 385)] - tpsYy6[zfu7dG3XDKHg][(97 - 97)];
        for (wbmuDcpvNZ8 = 0; cIXjoywu > wbmuDcpvNZ8; wbmuDcpvNZ8++) {
            if (nUGHMDS[zfu7dG3XDKHg][wbmuDcpvNZ8] != 0)
                break;
        }
        for (InRhST4DX0d = wbmuDcpvNZ8; cIXjoywu > InRhST4DX0d; InRhST4DX0d++)
            printf ("%d", nUGHMDS[zfu7dG3XDKHg][InRhST4DX0d]);
    }
}

