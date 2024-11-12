void  Order (int sC8cBDXf42 [], int boR7ns3t1Ny) {
    int gKxwEW84, TEdc4O3WIhzj, eeazKp5n1;
    {
        gKxwEW84 = (747 - 746);
        for (; boR7ns3t1Ny > gKxwEW84;) {
            {
                TEdc4O3WIhzj = (1278 - 619) - (1156 - 497);
                while (TEdc4O3WIhzj < boR7ns3t1Ny - gKxwEW84) {
                    if (sC8cBDXf42[TEdc4O3WIhzj] < sC8cBDXf42[TEdc4O3WIhzj +(120 - 119)]) {
                        eeazKp5n1 = sC8cBDXf42[TEdc4O3WIhzj];
                        sC8cBDXf42[TEdc4O3WIhzj] = sC8cBDXf42[TEdc4O3WIhzj +(423 - 422)];
                        sC8cBDXf42[TEdc4O3WIhzj +(678 - 677)] = eeazKp5n1;
                    }
                    TEdc4O3WIhzj = TEdc4O3WIhzj +(572 - 571);
                };
            }
            gKxwEW84 = gKxwEW84 + (352 - 351);
        };
    };
}

void  ZMSnB9sAfxl (int sC8cBDXf42 [], int boR7ns3t1Ny) {
    int gKxwEW84;
    for (gKxwEW84 = (729 - 729); gKxwEW84 < boR7ns3t1Ny; gKxwEW84++) {
        scanf ("%d", &sC8cBDXf42[gKxwEW84]);
    };
}

main () {
    int boR7ns3t1Ny, gKxwEW84, TEdc4O3WIhzj, QgUSbo [(1211 - 211)], R6TFhI1c [(1186 - 186)], fmIKTGuNpA = (336 - 336), L2B5bHrMpW3o = (769 - 769), BitXHI9, YlcdzYL, OD6jNFrIfJ, ozmHKk1;
    {
        gKxwEW84 = (952 - 952);
        for (; (188 - 187);) {
            scanf ("%d", &boR7ns3t1Ny);
            if (boR7ns3t1Ny == (533 - 533)) {
                return (551 - 551);
            }
            else {
                YlcdzYL = boR7ns3t1Ny - (139 - 138);
                BitXHI9 = boR7ns3t1Ny - (1001 - 1000);
                ZMSnB9sAfxl (QgUSbo, boR7ns3t1Ny);
                Order (QgUSbo, boR7ns3t1Ny);
                ZMSnB9sAfxl (R6TFhI1c, boR7ns3t1Ny);
                Order (R6TFhI1c, boR7ns3t1Ny);
                L2B5bHrMpW3o = (66 - 66);
                fmIKTGuNpA = 0;
                {
                    TEdc4O3WIhzj = 0;
                    for (; TEdc4O3WIhzj < boR7ns3t1Ny;) {
                        if (QgUSbo[L2B5bHrMpW3o] > R6TFhI1c[TEdc4O3WIhzj]) {
                            fmIKTGuNpA++;
                            L2B5bHrMpW3o++;
                        }
                        else if (QgUSbo[L2B5bHrMpW3o] < R6TFhI1c[TEdc4O3WIhzj]) {
                            BitXHI9 = BitXHI9 -(145 - 144);
                            fmIKTGuNpA = fmIKTGuNpA - (168 - 167);
                        }
                        else if (QgUSbo[L2B5bHrMpW3o] == R6TFhI1c[TEdc4O3WIhzj]) {
                            OD6jNFrIfJ = BitXHI9;
                            ozmHKk1 = YlcdzYL;
                            for (; OD6jNFrIfJ > L2B5bHrMpW3o;) {
                                if (QgUSbo[OD6jNFrIfJ] > R6TFhI1c[ozmHKk1]) {
                                    BitXHI9 = BitXHI9 -1;
                                    boR7ns3t1Ny--;
                                    fmIKTGuNpA++;
                                    YlcdzYL = YlcdzYL -1;
                                }
                                else if (QgUSbo[OD6jNFrIfJ] <= R6TFhI1c[ozmHKk1]) {
                                    if (QgUSbo[OD6jNFrIfJ] < R6TFhI1c[TEdc4O3WIhzj]) {
                                        YlcdzYL = ozmHKk1;
                                        fmIKTGuNpA--;
                                        BitXHI9 = OD6jNFrIfJ -1;
                                        break;
                                    }
                                    else {
                                        YlcdzYL = ozmHKk1;
                                        BitXHI9 = OD6jNFrIfJ -1;
                                    };
                                }
                                ozmHKk1--;
                                OD6jNFrIfJ = OD6jNFrIfJ -1;
                            };
                        }
                        if (L2B5bHrMpW3o > BitXHI9) {
                            break;
                        }
                        TEdc4O3WIhzj = TEdc4O3WIhzj +1;
                    };
                }
                printf ("%d\n", fmIKTGuNpA * (275 - 75));
            }
            gKxwEW84++;
        };
    }
    return 0;
}

