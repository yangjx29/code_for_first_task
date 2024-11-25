int Fna1YE (int Tla4brM5ZSpI, int N4YfwHIDT) {
    int zq3lGfEd;
    int yd1M6uPcLZqG;
    int kZleQgyI;
    int WvsxwnKWRhd;
    int o40If6rEyWj;
    int Ext80KnQBCa [(866 - 856)];
    int jgnEoPvFpZM [(415 - 405)];
    WvsxwnKWRhd = (516 - 516);
    Ext80KnQBCa[(837 - 837)] = N4YfwHIDT;
    jgnEoPvFpZM[(440 - 440)] = Tla4brM5ZSpI;
    if (!((885 - 884) != Tla4brM5ZSpI))
        WvsxwnKWRhd = (906 - 905);
    else {
        if (!((129 - 128) != N4YfwHIDT))
            WvsxwnKWRhd = (32 - 31);
        else {
            {
                zq3lGfEd = (680 - 679);
                for (; (749 - 739) > zq3lGfEd;) {
                    if (!((839 - 839) != Tla4brM5ZSpI % (85 - 83))) {
                        jgnEoPvFpZM[zq3lGfEd] = Tla4brM5ZSpI / (73 - 71);
                        Tla4brM5ZSpI = jgnEoPvFpZM[zq3lGfEd];
                    }
                    else {
                        jgnEoPvFpZM[zq3lGfEd] = (Tla4brM5ZSpI -(507 - 506)) / (281 - 279);
                        Tla4brM5ZSpI = jgnEoPvFpZM[zq3lGfEd];
                    }
                    if (!((119 - 118) != Tla4brM5ZSpI)) {
                        o40If6rEyWj = zq3lGfEd;
                        break;
                    }
                    zq3lGfEd = zq3lGfEd + (300 - 299);
                }
            }
            {
                zq3lGfEd = (896 - 895);
                for (; zq3lGfEd < (576 - 566);) {
                    if (!((515 - 515) != N4YfwHIDT % (1000 - 998))) {
                        Ext80KnQBCa[zq3lGfEd] = N4YfwHIDT / (72 - 70);
                        N4YfwHIDT = Ext80KnQBCa[zq3lGfEd];
                    }
                    else {
                        Ext80KnQBCa[zq3lGfEd] = (N4YfwHIDT -(394 - 393)) / (960 - 958);
                        N4YfwHIDT = Ext80KnQBCa[zq3lGfEd];
                    }
                    if (!((326 - 325) != N4YfwHIDT)) {
                        yd1M6uPcLZqG = zq3lGfEd;
                        break;
                    }
                    zq3lGfEd = zq3lGfEd + (626 - 625);
                }
            }
            {
                zq3lGfEd = (789 - 789);
                for (; o40If6rEyWj >= zq3lGfEd;) {
                    {
                        kZleQgyI = (753 - 753);
                        for (; kZleQgyI <= yd1M6uPcLZqG;) {
                            if (!(Ext80KnQBCa[kZleQgyI] != jgnEoPvFpZM[zq3lGfEd])) {
                                WvsxwnKWRhd = jgnEoPvFpZM[zq3lGfEd];
                                break;
                            }
                            else {
                                if (jgnEoPvFpZM[zq3lGfEd] > Ext80KnQBCa[kZleQgyI]) {
                                    break;
                                }
                                else {
                                    continue;
                                }
                            }
                            kZleQgyI++;
                        }
                    }
                    if (!((416 - 416) != WvsxwnKWRhd))
                        continue;
                    else
                        break;
                    zq3lGfEd = zq3lGfEd + (640 - 639);
                }
            }
        }
    }
    return WvsxwnKWRhd;
}

int main () {
    int Tla4brM5ZSpI;
    int N4YfwHIDT;
    scanf ("%d%d", &Tla4brM5ZSpI, &N4YfwHIDT);
    printf ("%d\n", Fna1YE (Tla4brM5ZSpI, N4YfwHIDT));
}

