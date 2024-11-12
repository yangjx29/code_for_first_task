int XWcKrvTj (const  void  *aJTohZczQlv6, const  void  *joDPON) {
    return *(int*) joDPON - *(int*) aJTohZczQlv6;
}

main () {
    int CB6Vv0o [1000], cPNBTMGbc [1000];
    int tZ4KV7xgBW, mruMlqX7Io1, IqRyC0Hx, MjUGhl6uWOo;
    int qZTcnNXRxJ, aecCz1o, Ol4QPIr3JBY;
    for (;;) {
        scanf ("%d", &qZTcnNXRxJ);
        if (qZTcnNXRxJ == (463 - 463))
            break;
        IqRyC0Hx = 0;
        for (aecCz1o = (442 - 442); aecCz1o < qZTcnNXRxJ; aecCz1o++)
            scanf ("%d", CB6Vv0o +aecCz1o);
        {
            aecCz1o = 498 - 498;
            while (aecCz1o < qZTcnNXRxJ) {
                scanf ("%d", cPNBTMGbc + aecCz1o);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                aecCz1o++;
            };
        }
        qsort (CB6Vv0o, qZTcnNXRxJ, sizeof (int), XWcKrvTj);
        qsort (cPNBTMGbc, qZTcnNXRxJ, sizeof (int), XWcKrvTj);
        mruMlqX7Io1 = qZTcnNXRxJ - 1;
        MjUGhl6uWOo = qZTcnNXRxJ - 1;
        Ol4QPIr3JBY = 0;
        tZ4KV7xgBW = 0;
        while (tZ4KV7xgBW <= mruMlqX7Io1) {
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
            if (CB6Vv0o[mruMlqX7Io1] > cPNBTMGbc[MjUGhl6uWOo]) {
                Ol4QPIr3JBY++;
                mruMlqX7Io1 = mruMlqX7Io1 - 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                MjUGhl6uWOo--;
            }
            else if (CB6Vv0o[tZ4KV7xgBW] > cPNBTMGbc[IqRyC0Hx]) {
                IqRyC0Hx = IqRyC0Hx +1;
                tZ4KV7xgBW++;
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
                Ol4QPIr3JBY++;
            }
            else if (CB6Vv0o[mruMlqX7Io1] < cPNBTMGbc[IqRyC0Hx]) {
                mruMlqX7Io1--, IqRyC0Hx++;
                Ol4QPIr3JBY = Ol4QPIr3JBY -1;
            }
            else {
                IqRyC0Hx++;
                mruMlqX7Io1--;
            };
        }
        printf ("%d\n", 200 * Ol4QPIr3JBY);
    };
}

