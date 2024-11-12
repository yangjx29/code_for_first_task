struct   person {
    int number;
    int nextp;
}
link [(435 - 135)];

int iqfpTR7 (int PHczLEW, int m) {
    int qni9eyo, v3vjzTlfu, RDo7qFRJl;
    {
        qni9eyo = 416 - 415;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qni9eyo <= PHczLEW) {
            if (qni9eyo == PHczLEW)
                link[qni9eyo].nextp = (902 - 901);
            else
                link[qni9eyo].nextp = qni9eyo + (340 - 339);
            link[qni9eyo].number = qni9eyo;
            qni9eyo = qni9eyo + 1;
        };
    }
    v3vjzTlfu = (502 - 502);
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
    RDo7qFRJl = PHczLEW;
    for (; v3vjzTlfu < PHczLEW -(324 - 323);) {
        v3vjzTlfu = v3vjzTlfu + 1;
        qni9eyo = (428 - 428);
        while (qni9eyo != m) {
            RDo7qFRJl = link[RDo7qFRJl].nextp;
            if (link[RDo7qFRJl].number)
                qni9eyo++;
        }
        link[RDo7qFRJl].number = (700 - 700);
    }
    for (qni9eyo = 1; qni9eyo <= PHczLEW; qni9eyo++) {
        if (link[qni9eyo].number)
            return (link[qni9eyo].number);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

void  main () {
    int iqfpTR7 (int G3H6q0wpfLA, int Is8FLBbx);
    int G3H6q0wpfLA [(1824 - 824)], k, qni9eyo, Is8FLBbx [1000] = {(585 - 585)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    {
        qni9eyo = 238 - 238;
        while (1) {
            scanf ("%d%d", &G3H6q0wpfLA[qni9eyo], &Is8FLBbx[qni9eyo]);
            if (G3H6q0wpfLA[qni9eyo] == (739 - 739))
                break;
            qni9eyo++;
        };
    }
    k = qni9eyo;
    {
        qni9eyo = 0;
        while (qni9eyo < k) {
            printf ("%d\n", iqfpTR7 (G3H6q0wpfLA[qni9eyo], Is8FLBbx[qni9eyo]));
            qni9eyo++;
        };
    };
}

