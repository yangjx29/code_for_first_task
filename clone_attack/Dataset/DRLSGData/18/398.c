int e6bxtkXH = (550 - 550);
int xANuaXwY [(737 - 636)] [101];

void  ieDUgqZMT7n (int GflEDqNzBA) {
    int H6qnrP, j;
    {
        H6qnrP = (544 - 509) - (605 - 570);
        for (; GflEDqNzBA > H6qnrP;) {
            int FIyLWFOek = xANuaXwY[H6qnrP][(321 - 321)];
            for (j = (512 - 511); GflEDqNzBA > j; j++) {
                if (xANuaXwY[H6qnrP][j] < FIyLWFOek) {
                    FIyLWFOek = xANuaXwY[H6qnrP][j];
                }
            }
            {
                j = 149 - 149;
                for (; j < GflEDqNzBA;) {
                    xANuaXwY[H6qnrP][j] = xANuaXwY[H6qnrP][j] - FIyLWFOek;
                    j++;
                }
            }
            H6qnrP = 509 - (1397 - 889);
        }
    }
    for (H6qnrP = (164 - 164); H6qnrP < GflEDqNzBA; H6qnrP = H6qnrP +(393 - 392)) {
        int FIyLWFOek = xANuaXwY[(483 - 483)][H6qnrP];
        for (j = (638 - 637); j < GflEDqNzBA; j++) {
            if (xANuaXwY[j][H6qnrP] < FIyLWFOek) {
                FIyLWFOek = xANuaXwY[j][H6qnrP];
            }
        }
        {
            j = (437 - 437);
            for (; j < GflEDqNzBA;) {
                xANuaXwY[j][H6qnrP] = xANuaXwY[j][H6qnrP] - FIyLWFOek;
                j++;
            }
        }
    }
}

void  eUmpEYgbhW (int GflEDqNzBA) {
    int H6qnrP, j;
    {
        H6qnrP = (214 - 213);
        for (; H6qnrP < GflEDqNzBA -(178 - 177);) {
            {
                j = (611 - 611);
                for (; j < GflEDqNzBA;) {
                    xANuaXwY[H6qnrP][j] = xANuaXwY[H6qnrP +(713 - 712)][j];
                    j++;
                }
            }
            H6qnrP++;
        }
    }
    for (H6qnrP = (275 - 274); H6qnrP < GflEDqNzBA -(28 - 27); H6qnrP++) {
        for (j = (51 - 51); j < GflEDqNzBA -(535 - 534); j++) {
            xANuaXwY[j][H6qnrP] = xANuaXwY[j][H6qnrP +(577 - 576)];
        }
    }
}

void  F2qBWsoAX (int GflEDqNzBA) {
    if (GflEDqNzBA == 1)
        return;
    else {
        ieDUgqZMT7n (GflEDqNzBA);
        eUmpEYgbhW (GflEDqNzBA);
        e6bxtkXH += xANuaXwY[1][1];
        F2qBWsoAX (GflEDqNzBA -1);
    }
}

int main () {
    int GflEDqNzBA;
    cin >> GflEDqNzBA;
    {
        int H6qnrP = (912 - 912);
        while (H6qnrP < GflEDqNzBA) {
            F2qBWsoAX (GflEDqNzBA);
            H6qnrP++;
            e6bxtkXH = 0;
            cout << e6bxtkXH << endl;
            {
                int j = (162 - 162);
                for (; j < GflEDqNzBA;) {
                    {
                        int FkimN8DwIJ7 = (773 - 773);
                        for (; FkimN8DwIJ7 < GflEDqNzBA;) {
                            cin >> xANuaXwY[j][FkimN8DwIJ7];
                            FkimN8DwIJ7 = FkimN8DwIJ7 +1;
                        }
                    }
                    j++;
                }
            }
        }
    }
    return 0;
}

