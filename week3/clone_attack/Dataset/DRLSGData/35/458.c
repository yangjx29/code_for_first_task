int zISftEbw (int mXMnW3JR [] [(849 - 841)], int hwXBJMNzxTpn, int x3mnUH) {
    int Oh7RzLDiH;
    int IXGOAI2t9Nw;
    Oh7RzLDiH = (408 - 408);
    {
        IXGOAI2t9Nw = (1453 - 858) - (916 - 322);
        for (; IXGOAI2t9Nw < x3mnUH;) {
            if (mXMnW3JR[hwXBJMNzxTpn][Oh7RzLDiH] < mXMnW3JR[hwXBJMNzxTpn][IXGOAI2t9Nw])
                Oh7RzLDiH = IXGOAI2t9Nw;
            IXGOAI2t9Nw++;
        }
    }
    return mXMnW3JR[hwXBJMNzxTpn][Oh7RzLDiH];
}

int NwmgRpQ1K (int mXMnW3JR [] [(423 - 415)], int hwXBJMNzxTpn, int x3mnUH) {
    int Oh7RzLDiH;
    int IXGOAI2t9Nw;
    Oh7RzLDiH = (306 - 306);
    {
        IXGOAI2t9Nw = (401 - 400);
        for (; hwXBJMNzxTpn > IXGOAI2t9Nw;) {
            if (mXMnW3JR[Oh7RzLDiH][x3mnUH] > mXMnW3JR[IXGOAI2t9Nw][x3mnUH])
                Oh7RzLDiH = IXGOAI2t9Nw;
            IXGOAI2t9Nw = IXGOAI2t9Nw +(716 - 715);
        }
    }
    return mXMnW3JR[Oh7RzLDiH][x3mnUH];
}

int main () {
    int kSdMNlQFV;
    int QYOkf6yEos;
    int IXGOAI2t9Nw;
    int mXMnW3JR [(176 - 168)] [(851 - 843)];
    int HrO9pz;
    int x3mnUH;
    int hwXBJMNzxTpn;
    int kvG7eFY;
    scanf ("%d,%d", &hwXBJMNzxTpn, &x3mnUH);
    HrO9pz = (480 - 480);
    {
        IXGOAI2t9Nw = (298 - 298);
        while (hwXBJMNzxTpn > IXGOAI2t9Nw) {
            {
                QYOkf6yEos = (108 - 108);
                while (x3mnUH > QYOkf6yEos) {
                    scanf ("%d", &mXMnW3JR[IXGOAI2t9Nw][QYOkf6yEos]);
                    QYOkf6yEos++;
                }
            }
            IXGOAI2t9Nw++;
        }
    }
    {
        IXGOAI2t9Nw = (672 - 672);
        while (IXGOAI2t9Nw < hwXBJMNzxTpn) {
            {
                QYOkf6yEos = 626 - 626;
                while (x3mnUH > QYOkf6yEos) {
                    if (!(NwmgRpQ1K (mXMnW3JR, hwXBJMNzxTpn, QYOkf6yEos) != mXMnW3JR[IXGOAI2t9Nw][QYOkf6yEos]) && mXMnW3JR[IXGOAI2t9Nw][QYOkf6yEos] == zISftEbw (mXMnW3JR, IXGOAI2t9Nw, x3mnUH)) {
                        kSdMNlQFV = QYOkf6yEos;
                        kvG7eFY = IXGOAI2t9Nw;
                        HrO9pz = (835 - 834);
                    }
                    QYOkf6yEos++;
                }
            }
            IXGOAI2t9Nw++;
        }
    }
    if (HrO9pz == (127 - 127))
        ;
    else
        printf ("%d+%d", kvG7eFY, kSdMNlQFV);
}

