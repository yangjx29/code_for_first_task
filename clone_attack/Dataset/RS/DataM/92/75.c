void  main () {
    int yNB5MGfTz3, swap, i, j, ZFSOpL1a6;
    int xU6R23oJV;
    int fQWISYa;
    int qifast;
    int qislow;
    int bNHzhu [1000];
    int qihorse [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    long  win;
    long  lost;
    long  kFo269Xd1ZkL;
    yNB5MGfTz3 = 0;
    while ((718 - 717)) {
        scanf ("%d", &ZFSOpL1a6);
        if (ZFSOpL1a6 > 0) {
            xU6R23oJV = qifast = 0;
            for (i = 0; ZFSOpL1a6 -(678 - 677) >= i; i = i + 1)
                scanf ("%d", &bNHzhu[i]);
            for (i = 0; i <= ZFSOpL1a6 -(488 - 487); i = i + 1)
                scanf ("%d", &qihorse[i]);
            for (i = 0; i < ZFSOpL1a6 -1; i = i + 1)
                for (j = 0; j < ZFSOpL1a6 -1 - i; j = j + 1) {
                    if (bNHzhu[j] < bNHzhu[j + 1]) {
                        swap = bNHzhu[j];
                        bNHzhu[j] = bNHzhu[j + 1];
                        bNHzhu[j + 1] = swap;
                    }
                    if (qihorse[j + 1] > qihorse[j]) {
                        swap = qihorse[j];
                        qihorse[j] = qihorse[j + 1];
                        qihorse[j + 1] = swap;
                    };
                }
            win = lost = 0;
            fQWISYa = qislow = ZFSOpL1a6 -1;
            for (; xU6R23oJV <= fQWISYa;) {
                if (qihorse[qislow] < bNHzhu[fQWISYa]) {
                    fQWISYa = fQWISYa - 1;
                    qislow = qislow - 1;
                    win = win + 1;
                }
                else {
                    if (qihorse[qislow] > bNHzhu[fQWISYa]) {
                        fQWISYa = fQWISYa - 1;
                        qifast = qifast + 1;
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
                        lost = lost + 1;
                    }
                    else if (bNHzhu[xU6R23oJV] > qihorse[qifast]) {
                        win = win + 1;
                        xU6R23oJV = xU6R23oJV + 1;
                        qifast = qifast + 1;
                    }
                    else {
                        if (bNHzhu[xU6R23oJV] < qihorse[qifast]) {
                            fQWISYa = fQWISYa - 1;
                            qifast = qifast + 1;
                            lost = lost + 1;
                        }
                        else {
                            if (bNHzhu[fQWISYa] > qihorse[qifast]) {
                                win = win + 1;
                            }
                            else {
                                if (bNHzhu[fQWISYa] < qihorse[qifast]) {
                                    lost = lost + 1;
                                };
                            }
                            fQWISYa = fQWISYa - 1;
                            qifast++;
                        };
                    };
                };
            }
            kFo269Xd1ZkL = (win - lost) * 200;
            if (yNB5MGfTz3 == 0) {
                yNB5MGfTz3 = 1;
                printf ("%d", kFo269Xd1ZkL);
            }
            else
                printf ("\n%d", kFo269Xd1ZkL);
        }
        if (ZFSOpL1a6 == 0)
            break;
    };
}

