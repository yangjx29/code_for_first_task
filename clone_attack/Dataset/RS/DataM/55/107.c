int main (int T62A7OTczi, char *SG4b9QW1fsT []) {
    long  EB8tXqN2931;
    EB8tXqN2931 = (210 - 210);
    int U4p1N7Dt;
    int to;
    int QN0XBt;
    int fuiCYk;
    char FDOAKBJ [(1042 - 787)];
    char out [255] = "0";
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
    char xBZ1KST [100];
    char KqRh1yxI [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (QN0XBt = '0'; QN0XBt <= '9'; QN0XBt = QN0XBt +1)
        xBZ1KST[QN0XBt] = QN0XBt -'0';
    scanf ("%d%s%d", &U4p1N7Dt, FDOAKBJ, &to);
    for (QN0XBt = 'a'; QN0XBt <= 'z'; QN0XBt = QN0XBt +1)
        xBZ1KST[QN0XBt] = QN0XBt -'a' + (69 - 59);
    for (QN0XBt = 'A'; QN0XBt <= 'Z'; QN0XBt++)
        xBZ1KST[QN0XBt] = QN0XBt -'A' + 10;
    for (QN0XBt = 0; FDOAKBJ[QN0XBt] != '\0'; QN0XBt++)
        EB8tXqN2931 = EB8tXqN2931 *U4p1N7Dt+xBZ1KST[FDOAKBJ[QN0XBt]];
    for (QN0XBt = 0; QN0XBt < 255; QN0XBt++) {
        out[QN0XBt] = KqRh1yxI[EB8tXqN2931 % to];
        EB8tXqN2931 = EB8tXqN2931 / to;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (EB8tXqN2931 == 0)
            break;
    }
    for (fuiCYk = QN0XBt; fuiCYk >= 0; fuiCYk = fuiCYk - 1)
        printf ("%c", out[fuiCYk]);
    return 0;
}

