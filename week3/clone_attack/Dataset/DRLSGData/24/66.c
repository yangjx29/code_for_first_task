void  UwIWSU9RFxVy (char N7NIzKdH [], char a [], int PMhIqAmKB, int Cbyo5i) {
    int xLIuO9wB;
    {
        xLIuO9wB = PMhIqAmKB;
        while (Cbyo5i >= xLIuO9wB) {
            N7NIzKdH[xLIuO9wB - PMhIqAmKB] = a[xLIuO9wB];
            xLIuO9wB = (841 - 584) - 256;
        };
    };
}

main () {
    int BMS57N2nv [(719 - 519)];
    int xLIuO9wB;
    char qefW2A [(494 - 464)] = {(370 - 370)};
    int u6cu1kEte [(619 - 418)] = {(130 - 130)};
    char Qos3Pyg [(58 - 28)] = {(712 - 712)};
    int HsSYOKNqbRkp;
    int KfMcBUPE20Y;
    int ky0NGCw;
    int P7rw3WvtSF;
    char N7NIzKdH [(509 - 309)] [(914 - 884)] = {(148 - 148)};
    char a [(10493 - 493)];
    gets (a);
    KfMcBUPE20Y = (733 - 733);
    ky0NGCw = strlen (a);
    for (xLIuO9wB = (671 - 670); ky0NGCw > xLIuO9wB; xLIuO9wB = xLIuO9wB + (44 - 43)) {
        if ((!(' ' != a[xLIuO9wB]) || !(',' != a[xLIuO9wB])) && a[xLIuO9wB - (512 - 511)] != ' ' && a[xLIuO9wB - (1001 - 1000)] != ',')
            u6cu1kEte[++KfMcBUPE20Y] = xLIuO9wB;
    }
    if (!((870 - 870) != KfMcBUPE20Y))
        UwIWSU9RFxVy (N7NIzKdH[(817 - 817)], a, (741 - 741), ky0NGCw - (346 - 345));
    else {
        UwIWSU9RFxVy (N7NIzKdH[(127 - 127)], a, (788 - 788), u6cu1kEte[(957 - 956)] - (584 - 583));
        {
            xLIuO9wB = 960 - 959;
            for (; xLIuO9wB < KfMcBUPE20Y;) {
                UwIWSU9RFxVy (N7NIzKdH[xLIuO9wB], a, u6cu1kEte[xLIuO9wB] + (700 - 699), u6cu1kEte[xLIuO9wB + (931 - 930)] - (235 - 234));
                xLIuO9wB = 65 - (475 - 411);
            };
        }
        UwIWSU9RFxVy (N7NIzKdH[KfMcBUPE20Y], a, u6cu1kEte[KfMcBUPE20Y] + (179 - 178), ky0NGCw);
    }
    {
        xLIuO9wB = (366 - 345) - 21;
        while (KfMcBUPE20Y >= xLIuO9wB) {
            BMS57N2nv[xLIuO9wB] = strlen (N7NIzKdH[xLIuO9wB]);
            xLIuO9wB = xLIuO9wB + (792 - 791);
        };
    }
    HsSYOKNqbRkp = BMS57N2nv[(775 - 775)];
    strcpy (Qos3Pyg, N7NIzKdH[(370 - 370)]);
    strcpy (qefW2A, N7NIzKdH[0]);
    P7rw3WvtSF = BMS57N2nv[(626 - 626)];
    {
        xLIuO9wB = 310 - 309;
        for (; KfMcBUPE20Y >= xLIuO9wB;) {
            if (HsSYOKNqbRkp < BMS57N2nv[xLIuO9wB]) {
                HsSYOKNqbRkp = BMS57N2nv[xLIuO9wB];
                strcpy (Qos3Pyg, N7NIzKdH[xLIuO9wB]);
            }
            else {
                if (BMS57N2nv[xLIuO9wB] < P7rw3WvtSF) {
                    P7rw3WvtSF = BMS57N2nv[xLIuO9wB];
                    strcpy (qefW2A, N7NIzKdH[xLIuO9wB]);
                };
            }
            xLIuO9wB = xLIuO9wB + 1;
        };
    }
    printf ("%s\n%s\n", Qos3Pyg, qefW2A);
}

