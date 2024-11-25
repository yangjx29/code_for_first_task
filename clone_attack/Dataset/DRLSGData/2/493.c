void  main () {
    char HloTGDAJ;
    int nkg8QY;
    int OtqyZg;
    int JiubrE;
    int O1HG2KyjA;
    int YP30gD;
    int sPn3wDaVJ8;
    struct   book {
        int s48J0UrRh5j;
        char TdQO14WB7 [(126 - 116)];
    };
    struct   book whzCvb20Y [(1335 - 335)];
    int TF7B6kTRX [(678 - 652)] = {(967 - 967)};
    O1HG2KyjA = (980 - 980);
    scanf ("%d", &nkg8QY);
    HloTGDAJ = O1HG2KyjA +'A';
    {
        sPn3wDaVJ8 = (270 - 270);
        for (; sPn3wDaVJ8 < nkg8QY;) {
            scanf ("%d %s", &whzCvb20Y[sPn3wDaVJ8].s48J0UrRh5j, &whzCvb20Y[sPn3wDaVJ8].TdQO14WB7);
            sPn3wDaVJ8 = (1599 - 928) - (862 - 192);
        }
    }
    {
        sPn3wDaVJ8 = (550 - 550);
        for (; nkg8QY > sPn3wDaVJ8;) {
            {
                JiubrE = (423 - 423);
                for (; whzCvb20Y[sPn3wDaVJ8].TdQO14WB7[JiubrE] != '\0';) {
                    OtqyZg = (whzCvb20Y[sPn3wDaVJ8].TdQO14WB7[JiubrE]) - 'A';
                    TF7B6kTRX[OtqyZg]++;
                    JiubrE = JiubrE +(800 - 799);
                }
            }
            sPn3wDaVJ8 = sPn3wDaVJ8 + (729 - 728);
        }
    }
    YP30gD = TF7B6kTRX[(391 - 391)];
    {
        sPn3wDaVJ8 = (510 - 509);
        for (; sPn3wDaVJ8 < (658 - 632);) {
            if (TF7B6kTRX[sPn3wDaVJ8] > YP30gD) {
                YP30gD = TF7B6kTRX[sPn3wDaVJ8];
                O1HG2KyjA = sPn3wDaVJ8;
            }
            sPn3wDaVJ8 = sPn3wDaVJ8 + (806 - 805);
        }
    }
    printf ("%c\n%d\n", HloTGDAJ, YP30gD);
    {
        sPn3wDaVJ8 = 0;
        for (; sPn3wDaVJ8 < nkg8QY;) {
            {
                JiubrE = 0;
                for (; whzCvb20Y[sPn3wDaVJ8].TdQO14WB7[JiubrE] != '\0';) {
                    if (!(HloTGDAJ != whzCvb20Y[sPn3wDaVJ8].TdQO14WB7[JiubrE]))
                        printf ("%d\n", whzCvb20Y[sPn3wDaVJ8].s48J0UrRh5j);
                    JiubrE = JiubrE +1;
                }
            }
            sPn3wDaVJ8 = sPn3wDaVJ8 + 1;
        }
    }
}

