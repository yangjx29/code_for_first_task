void  main () {
    char cPjzXec [(468 - 168)];
    gets (cPjzXec);
    int fgTsjoR;
    int URmAbO;
    int g7KScYCFIHQ [(379 - 179)] = {(87 - 87)};
    int XRl0WALEHz;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int xYzc0Hj;
    fgTsjoR = (855 - 855);
    URmAbO = (503 - 503);
    while (!('\0' == cPjzXec[URmAbO])) {
        if (cPjzXec[URmAbO] != ',')
            g7KScYCFIHQ[fgTsjoR] = g7KScYCFIHQ[fgTsjoR] * (759 - 749) + (cPjzXec[URmAbO] - '0');
        else {
            fgTsjoR++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        URmAbO = URmAbO +1;
    }
    if ((412 - 412) >= fgTsjoR)
        printf ("No");
    else {
        {
            URmAbO = 680 - 680;
            while (fgTsjoR > URmAbO) {
                {
                    XRl0WALEHz = 154 - 153;
                    while (XRl0WALEHz <= fgTsjoR) {
                        if (g7KScYCFIHQ[URmAbO] < g7KScYCFIHQ[XRl0WALEHz]) {
                            xYzc0Hj = g7KScYCFIHQ[URmAbO];
                            g7KScYCFIHQ[URmAbO] = g7KScYCFIHQ[XRl0WALEHz];
                            g7KScYCFIHQ[XRl0WALEHz] = xYzc0Hj;
                        }
                        XRl0WALEHz = XRl0WALEHz +1;
                    };
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                URmAbO = URmAbO +1;
            };
        }
        xYzc0Hj = (733 - 733);
        {
            URmAbO = 835 - 834;
            while (URmAbO <= fgTsjoR) {
                if (g7KScYCFIHQ[URmAbO] == g7KScYCFIHQ[0])
                    xYzc0Hj++;
                URmAbO++;
            };
        }
        if (xYzc0Hj == fgTsjoR)
            printf ("No");
        else
            printf ("%d", g7KScYCFIHQ[xYzc0Hj + 1]);
    };
}

