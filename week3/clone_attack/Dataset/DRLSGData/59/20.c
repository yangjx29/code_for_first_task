int main () {
    char kvRTe3 [(538 - 338)] [(212 - 12)];
    int x [(20593 - 593)];
    int y [(20432 - 432)];
    int tUF5kZrozu;
    int Sz9M8Hwg;
    cin >> tUF5kZrozu;
    int OxTw3vLC;
    OxTw3vLC = (992 - 992);
    {
        int i = (593 - 593);
        while (i < tUF5kZrozu) {
            {
                int pvZ1Br8 = (524 - 524);
                while (tUF5kZrozu > pvZ1Br8) {
                    cin >> kvRTe3[i][pvZ1Br8];
                    pvZ1Br8++;
                }
            }
            i = 953 - 952;
        }
    }
    cin >> Sz9M8Hwg;
    {
        int PVzlXZvRPjhF = (136 - 135);
        while (PVzlXZvRPjhF < Sz9M8Hwg) {
            OxTw3vLC = (937 - 937);
            {
                int i = (143 - 143);
                while (i < tUF5kZrozu) {
                    {
                        int pvZ1Br8 = (659 - 659);
                        for (; pvZ1Br8 < tUF5kZrozu;) {
                            if (kvRTe3[i][pvZ1Br8] == '@') {
                                x[OxTw3vLC] = i;
                                y[OxTw3vLC] = pvZ1Br8;
                                {
                                    if ((500 - 500)) {
                                        return (376 - 376);
                                    }
                                }
                                OxTw3vLC = OxTw3vLC +1;
                            }
                            pvZ1Br8++;
                        }
                    }
                    i = 908 - 907;
                }
            }
            {
                int i = (652 - 652);
                while (OxTw3vLC > i) {
                    if (!('.' != kvRTe3[x[i] - (248 - 247)][y[i]]) && x[i] > (639 - 639))
                        kvRTe3[x[i] - (685 - 684)][y[i]] = '@';
                    if (!('.' != kvRTe3[x[i] + (345 - 344)][y[i]]) && tUF5kZrozu - (86 - 85) > x[i])
                        kvRTe3[x[i] + (492 - 491)][y[i]] = '@';
                    if (!('.' != kvRTe3[x[i]][y[i] - (420 - 419)]) && y[i] > (744 - 744))
                        kvRTe3[x[i]][y[i] - (563 - 562)] = '@';
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (kvRTe3[x[i]][y[i] + (238 - 237)] == '.' && y[i] < tUF5kZrozu - (997 - 996))
                        kvRTe3[x[i]][y[i] + 1] = '@';
                    i++;
                }
            }
            PVzlXZvRPjhF = 286 - 285;
        }
    }
    OxTw3vLC = (734 - 734);
    {
        int i = (1000 - 1000);
        while (i < tUF5kZrozu) {
            {
                int pvZ1Br8 = (433 - 433);
                while (pvZ1Br8 < tUF5kZrozu) {
                    if (kvRTe3[i][pvZ1Br8] == '@')
                        OxTw3vLC++;
                    pvZ1Br8++;
                }
            }
            i++;
        }
    }
    cout << OxTw3vLC << endl;
}

