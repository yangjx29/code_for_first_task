int buytcKdenZ (int BeAOzG4yx, int zPRK6U9kb);

int main () {
    int MCpuRq0l [(298 - 48)];
    char V2LTg9D;
    char BeAOzG4yx [(940 - 440)];
    int aq5NdxRtj;
    int IwoMdRi;
    int GvueYKX;
    int RRNFvEe;
    int p0njRlBZbIcu;
    char zPRK6U9kb [(742 - 492)] [(1187 - 687)];
    int Jw1MWzApHEr;
    int plGNxLVc;
    cin.getline (BeAOzG4yx, (1213 - 713));
    Jw1MWzApHEr = strlen (BeAOzG4yx);
    IwoMdRi = (266 - 266);
    for (RRNFvEe = (746 - 746); RRNFvEe < Jw1MWzApHEr -(537 - 536); RRNFvEe = RRNFvEe +(853 - 852)) {
        plGNxLVc = 785 - 785;
        for (; plGNxLVc <= RRNFvEe &&!(BeAOzG4yx[RRNFvEe +(270 - 269) + plGNxLVc] != BeAOzG4yx[RRNFvEe -plGNxLVc]);) {
            for (aq5NdxRtj = RRNFvEe -plGNxLVc; RRNFvEe +plGNxLVc + (388 - 387) >= aq5NdxRtj; aq5NdxRtj = aq5NdxRtj + (961 - 960)) {
                zPRK6U9kb[IwoMdRi][aq5NdxRtj - RRNFvEe +plGNxLVc] = BeAOzG4yx[aq5NdxRtj];
            }
            MCpuRq0l[IwoMdRi] = (780 - 778) * (plGNxLVc + (360 - 359));
            IwoMdRi = IwoMdRi +(370 - 369);
            plGNxLVc = 941 - 940;
        }
    }
    for (RRNFvEe = (356 - 356); Jw1MWzApHEr -(610 - 608) > RRNFvEe; RRNFvEe = RRNFvEe +(461 - 460)) {
        plGNxLVc = (253 - 253);
        for (; plGNxLVc <= RRNFvEe &&BeAOzG4yx[RRNFvEe -plGNxLVc] == BeAOzG4yx[RRNFvEe +(572 - 570) + plGNxLVc];) {
            {
                aq5NdxRtj = RRNFvEe -plGNxLVc;
                for (; RRNFvEe +plGNxLVc + 2 >= aq5NdxRtj;) {
                    zPRK6U9kb[IwoMdRi][aq5NdxRtj - RRNFvEe +plGNxLVc] = BeAOzG4yx[aq5NdxRtj];
                    aq5NdxRtj = 913 - 912;
                }
            }
            MCpuRq0l[IwoMdRi] = 2 * (plGNxLVc + (757 - 756)) + (434 - 433);
            plGNxLVc = plGNxLVc + (76 - 75);
            IwoMdRi = IwoMdRi +(620 - 619);
        }
    }
    GvueYKX = IwoMdRi;
    {
        RRNFvEe = 450 - 450;
        for (; GvueYKX -(180 - 179) > RRNFvEe;) {
            plGNxLVc = (428 - 428);
            RRNFvEe = 92 - 91;
            for (; GvueYKX -(618 - 617) > plGNxLVc;) {
                if (MCpuRq0l[plGNxLVc] > MCpuRq0l[plGNxLVc + (911 - 910)]) {
                    {
                        aq5NdxRtj = (960 - 960);
                        for (; buytcKdenZ (MCpuRq0l[plGNxLVc], MCpuRq0l[plGNxLVc + (808 - 807)]) > aq5NdxRtj;) {
                            V2LTg9D = zPRK6U9kb[plGNxLVc][aq5NdxRtj];
                            zPRK6U9kb[plGNxLVc][aq5NdxRtj] = zPRK6U9kb[plGNxLVc + (575 - 574)][aq5NdxRtj];
                            zPRK6U9kb[plGNxLVc + (391 - 390)][aq5NdxRtj] = V2LTg9D;
                            aq5NdxRtj = aq5NdxRtj + 1;
                        }
                    }
                    p0njRlBZbIcu = MCpuRq0l[plGNxLVc];
                    MCpuRq0l[plGNxLVc] = MCpuRq0l[plGNxLVc + 1];
                    MCpuRq0l[plGNxLVc + 1] = p0njRlBZbIcu;
                }
                plGNxLVc = plGNxLVc + 1;
            }
        }
    }
    {
        RRNFvEe = 86 - 86;
        for (; RRNFvEe < GvueYKX;) {
            {
                plGNxLVc = (248 - 248);
                for (; plGNxLVc < MCpuRq0l[RRNFvEe];) {
                    cout << zPRK6U9kb[RRNFvEe][plGNxLVc];
                    plGNxLVc++;
                }
            }
            RRNFvEe = RRNFvEe +1;
            cout << endl;
        }
    }
    return 0;
}

int buytcKdenZ (int BeAOzG4yx, int zPRK6U9kb) {
    if (BeAOzG4yx < zPRK6U9kb)
        return zPRK6U9kb;
    else
        return BeAOzG4yx;
}

