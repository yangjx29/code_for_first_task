void  main () {
    int miMl1eEB;
    int n;
    int a [10] [3];
    int b [45] [2];
    int i;
    int wtNaTkP3;
    int t;
    miMl1eEB = 0;
    float oSfnGmo [45], GmR8EnlH7;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &a[i][0]);
            scanf ("%d", &a[i][1]);
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
            scanf ("%d", &a[i][2]);
            i = i + 1;
        };
    }
    for (i = 0; n > i; i++)
        for (wtNaTkP3 = i + 1; n > wtNaTkP3; wtNaTkP3 = wtNaTkP3 + 1) {
            b[miMl1eEB][0] = i;
            b[miMl1eEB][1] = wtNaTkP3;
            oSfnGmo[miMl1eEB] = sqrt ((a[i][0] - a[wtNaTkP3][0]) * (a[i][0] - a[wtNaTkP3][0]) + (a[i][1] - a[wtNaTkP3][1]) * (a[i][1] - a[wtNaTkP3][1]) + (a[i][2] - a[wtNaTkP3][2]) * (a[i][2] - a[wtNaTkP3][2]));
            miMl1eEB = miMl1eEB + 1;
        }
    {
        wtNaTkP3 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (wtNaTkP3 < miMl1eEB - 1) {
            {
                i = 0;
                while (miMl1eEB - 1 - wtNaTkP3 > i) {
                    if (oSfnGmo[i] < oSfnGmo[i + 1]) {
                        GmR8EnlH7 = oSfnGmo[i];
                        oSfnGmo[i] = oSfnGmo[i + 1];
                        oSfnGmo[i + 1] = GmR8EnlH7;
                        t = b[i][0];
                        b[i][0] = b[i + 1][0];
                        b[i + 1][0] = t;
                        t = b[i][1];
                        b[i][1] = b[i + 1][1];
                        b[i + 1][1] = t;
                    }
                    i++;
                };
            }
            wtNaTkP3++;
        };
    }
    for (i = 0; i < miMl1eEB; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[b[i][0]][0], a[b[i][0]][1], a[b[i][0]][2], a[b[i][1]][0], a[b[i][1]][1], a[b[i][1]][2], oSfnGmo[i]);
}

