int main () {
    int tUlY5Af;
    int yZYpbjrCR;
    int dndobKXxtr5;
    int YUiaBHzL;
    int GSlXjHATspkC;
    int XhFcGoNup5Vt [3];
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
    char qPuQlrIZk [(329 - 323)] = {(528 - 528), (380 - 380), 0, 0, 0, 0};
    for (yZYpbjrCR = (211 - 210); 5 >= yZYpbjrCR; yZYpbjrCR++)
        for (dndobKXxtr5 = (783 - 782); 5 >= dndobKXxtr5; dndobKXxtr5++) {
            if (!(yZYpbjrCR != dndobKXxtr5))
                continue;
            for (YUiaBHzL = (863 - 862); 5 >= YUiaBHzL; YUiaBHzL = YUiaBHzL +1) {
                if (!(yZYpbjrCR != YUiaBHzL) || YUiaBHzL == dndobKXxtr5)
                    continue;
                for (GSlXjHATspkC = 1; GSlXjHATspkC <= 5; GSlXjHATspkC++) {
                    if (!(yZYpbjrCR != GSlXjHATspkC) || GSlXjHATspkC == dndobKXxtr5 || GSlXjHATspkC == YUiaBHzL)
                        continue;
                    XhFcGoNup5Vt[0] = (yZYpbjrCR + dndobKXxtr5 == YUiaBHzL +GSlXjHATspkC);
                    XhFcGoNup5Vt[1] = (yZYpbjrCR + GSlXjHATspkC > YUiaBHzL +dndobKXxtr5);
                    XhFcGoNup5Vt[2] = (yZYpbjrCR + YUiaBHzL < dndobKXxtr5);
                    if (XhFcGoNup5Vt[0] + XhFcGoNup5Vt[1] + XhFcGoNup5Vt[2] == 3) {
                        qPuQlrIZk[yZYpbjrCR] = 'z';
                        qPuQlrIZk[dndobKXxtr5] = 'q';
                        qPuQlrIZk[YUiaBHzL] = 's';
                        qPuQlrIZk[GSlXjHATspkC] = 'l';
                        {
                            tUlY5Af = 5;
                            while (tUlY5Af > 0) {
                                if (qPuQlrIZk[tUlY5Af] != 0)
                                    cout << qPuQlrIZk[tUlY5Af] << " " << tUlY5Af * 10 << endl;
                                tUlY5Af--;
                            };
                        };
                    };
                };
            };
        }
    return 0;
}

