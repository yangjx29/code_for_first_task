int main () {
    int woghF3SbfcCZ;
    int QDszO0 [(1053 - 953)] [100];
    int qSHp06fGA;
    int yFwxHXsKi;
    int wMtISK;
    int x1;
    int x2;
    int y1;
    int y2;
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
    int EIrNsWdH;
    woghF3SbfcCZ = 0;
    scanf ("%d", &qSHp06fGA);
    {
        yFwxHXsKi = 0;
        while (qSHp06fGA > yFwxHXsKi) {
            {
                wMtISK = 0;
                while (qSHp06fGA > wMtISK) {
                    scanf ("%d", &QDszO0[yFwxHXsKi][wMtISK]);
                    if (QDszO0[yFwxHXsKi][wMtISK] == 0 && woghF3SbfcCZ == 0) {
                        woghF3SbfcCZ = (317 - 316);
                        x1 = yFwxHXsKi;
                        y1 = wMtISK;
                    }
                    else {
                        if (QDszO0[yFwxHXsKi][wMtISK] == 0 && woghF3SbfcCZ == 1) {
                            x2 = yFwxHXsKi;
                            y2 = wMtISK;
                        };
                    }
                    wMtISK = wMtISK + 1;
                };
            }
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
            }
            yFwxHXsKi++;
        };
    }
    EIrNsWdH = (x2 - x1 - 1) * (y2 - y1 - 1);
    printf ("%d", (x2 - x1 - 1) * (y2 - y1 - 1));
    return 0;
}

