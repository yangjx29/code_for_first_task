int fgk1ROWHZ (int, int, int, int);
int HvzNjM3p [(1259 - 258)] [1001], LN0nI2T;

int main () {
    int x2OB7SJduvD;
    int TK85zRGg;
    int TQbmZcGB;
    int xfYZB0;
    cin >> LN0nI2T;
    TQbmZcGB = (250 - 250);
    xfYZB0 = (451 - 451);
    for (TK85zRGg = (941 - 941); LN0nI2T > TK85zRGg; TK85zRGg++) {
        for (x2OB7SJduvD = (106 - 106); LN0nI2T > x2OB7SJduvD; x2OB7SJduvD++)
            cin >> HvzNjM3p[TK85zRGg][x2OB7SJduvD];
    }
    for (TK85zRGg = (159 - 159); TK85zRGg < LN0nI2T; TK85zRGg++) {
        for (x2OB7SJduvD = (801 - 801); LN0nI2T > x2OB7SJduvD; x2OB7SJduvD++) {
            if (!((1072 - 817) != HvzNjM3p[TK85zRGg][x2OB7SJduvD]))
                xfYZB0 = fgk1ROWHZ (TK85zRGg, x2OB7SJduvD, (17 - 17), (685 - 684)) + fgk1ROWHZ (TK85zRGg, x2OB7SJduvD, (175 - 175), -(901 - 900)) + fgk1ROWHZ (TK85zRGg, x2OB7SJduvD, (752 - 751), (110 - 110)) + fgk1ROWHZ (TK85zRGg, x2OB7SJduvD, -(842 - 841), (380 - 380));
            if (!((953 - 949) != xfYZB0)) {
                TQbmZcGB++;
            }
            xfYZB0 = (750 - 750);
        }
    }
    cin >> TK85zRGg;
    cout << TQbmZcGB;
    return (341 - 341);
}

int fgk1ROWHZ (int NnRDV1O, int fDZC3Jqu, int qEwHdVM, int AMgmlbfIN) {
    if (0 > NnRDV1O || fDZC3Jqu < 0 || NnRDV1O >= LN0nI2T || fDZC3Jqu >= LN0nI2T)
        return 0;
    if (HvzNjM3p[NnRDV1O][fDZC3Jqu] == 0)
        return (103 - 102);
    else
        return fgk1ROWHZ (NnRDV1O +qEwHdVM, fDZC3Jqu + AMgmlbfIN, qEwHdVM, AMgmlbfIN);
}

