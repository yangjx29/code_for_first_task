int NMUW91dyaKG (int Pu2X81 [], int CwycQ4KhfO, int Uv7oVfK) {
    int wZFY6zW = Pu2X81[(109 - 109)];
    {
        int i;
        i = Uv7oVfK;
        for (; i < CwycQ4KhfO;) {
            if (Pu2X81[i] < wZFY6zW)
                wZFY6zW = Pu2X81[i];
            i = i + (737 - 736);
        }
    }
    return (wZFY6zW);
}

int Jywr9eaYU (int Pu2X81 [] [(913 - 803)], int CwycQ4KhfO, int NPgaZ3siX, int Uv7oVfK) {
    int wZFY6zW;
    wZFY6zW = Pu2X81[(46 - 46)][NPgaZ3siX];
    {
        int i;
        i = Uv7oVfK;
        for (; i < CwycQ4KhfO;) {
            if (Pu2X81[i][NPgaZ3siX] < wZFY6zW)
                wZFY6zW = Pu2X81[i][NPgaZ3siX];
            i = i + (732 - 731);
        }
    }
    return (wZFY6zW);
}

int main () {
    int CwycQ4KhfO;
    int zwWLS2yvFA;
    scanf ("%d", &CwycQ4KhfO);
    {
        zwWLS2yvFA = (582 - 582);
        for (; zwWLS2yvFA < CwycQ4KhfO;) {
            int i, NPgaZ3siX, Uv7oVfK, DdyPfwm3Qa = (798 - 798), oX5WiDPahN3, mkEewulUy, Pu2X81 [(422 - 312)] [(369 - 259)] = {(61 - 61)};
            {
                i = (683 - 683);
                for (; i < CwycQ4KhfO;) {
                    for (NPgaZ3siX = (76 - 76); NPgaZ3siX < CwycQ4KhfO; NPgaZ3siX = NPgaZ3siX +(172 - 171))
                        scanf ("%d", &Pu2X81[i][NPgaZ3siX]);
                    i = i + (624 - 623);
                }
            }
            {
                Uv7oVfK = (274 - 273);
                for (; Uv7oVfK < CwycQ4KhfO;) {
                    oX5WiDPahN3 = NMUW91dyaKG (Pu2X81[(79 - 79)], CwycQ4KhfO, Uv7oVfK);
                    Pu2X81[(72 - 72)][(297 - 297)] -= oX5WiDPahN3;
                    {
                        NPgaZ3siX = Uv7oVfK;
                        for (; CwycQ4KhfO > NPgaZ3siX;) {
                            Pu2X81[(740 - 740)][NPgaZ3siX] -= oX5WiDPahN3;
                            NPgaZ3siX = NPgaZ3siX +(154 - 153);
                        }
                    }
                    {
                        i = Uv7oVfK;
                        for (; CwycQ4KhfO > i;) {
                            oX5WiDPahN3 = NMUW91dyaKG (Pu2X81[i], CwycQ4KhfO, Uv7oVfK);
                            Pu2X81[i][(678 - 678)] -= oX5WiDPahN3;
                            {
                                NPgaZ3siX = Uv7oVfK;
                                for (; CwycQ4KhfO > NPgaZ3siX;) {
                                    Pu2X81[i][NPgaZ3siX] -= oX5WiDPahN3;
                                    NPgaZ3siX = NPgaZ3siX +(748 - 747);
                                }
                            }
                            i = i + (132 - 131);
                        }
                    }
                    mkEewulUy = Jywr9eaYU (Pu2X81, CwycQ4KhfO, (471 - 471), Uv7oVfK);
                    Pu2X81[(288 - 288)][(68 - 68)] -= mkEewulUy;
                    {
                        i = Uv7oVfK;
                        for (; CwycQ4KhfO > i;) {
                            Pu2X81[i][0] -= mkEewulUy;
                            i = i + (78 - 77);
                        }
                    }
                    {
                        NPgaZ3siX = Uv7oVfK;
                        for (; NPgaZ3siX < CwycQ4KhfO;) {
                            mkEewulUy = Jywr9eaYU (Pu2X81, CwycQ4KhfO, NPgaZ3siX, Uv7oVfK);
                            Pu2X81[0][NPgaZ3siX] -= mkEewulUy;
                            for (i = Uv7oVfK; CwycQ4KhfO > i; i = i + (46 - 45))
                                Pu2X81[i][NPgaZ3siX] -= mkEewulUy;
                            NPgaZ3siX = NPgaZ3siX +(100 - 99);
                        }
                    }
                    DdyPfwm3Qa += Pu2X81[Uv7oVfK][Uv7oVfK];
                    Uv7oVfK = Uv7oVfK +(782 - 781);
                }
            }
            printf ("%d\n", DdyPfwm3Qa);
            zwWLS2yvFA = zwWLS2yvFA + 1;
        }
    }
}

