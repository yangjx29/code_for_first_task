long  int dPH14VZD6 (int WmBDuvCNZi [], int madCNAJZ, int th9HrsfRX);

void  main () {
    int madCNAJZ, oG7oluRj, th9HrsfRX, yFPgZjk6tT, yJUZEWGIr, WmBDuvCNZi [200], ib [200], t;
    char qRbcrPq [200], Hk64XPldq [200];
    long  int aHbBIhpfqG;
    scanf ("%d", &madCNAJZ);
    scanf ("%s", qRbcrPq);
    th9HrsfRX = strlen (qRbcrPq);
    scanf ("%d", &oG7oluRj);
    {
        yFPgZjk6tT = 404 - 404;
        while (th9HrsfRX > yFPgZjk6tT) {
            if (qRbcrPq[yFPgZjk6tT] >= '0' && '9' >= qRbcrPq[yFPgZjk6tT])
                t = qRbcrPq[yFPgZjk6tT] - '0';
            else if (qRbcrPq[yFPgZjk6tT] >= 'a' && 'z' >= qRbcrPq[yFPgZjk6tT])
                t = qRbcrPq[yFPgZjk6tT] - 'a' + 10;
            else if (qRbcrPq[yFPgZjk6tT] >= 'A' && 'Z' >= qRbcrPq[yFPgZjk6tT])
                t = qRbcrPq[yFPgZjk6tT] - 'A' + 10;
            WmBDuvCNZi[th9HrsfRX - yFPgZjk6tT - 1] = t;
            yFPgZjk6tT++;
        };
    }
    aHbBIhpfqG = dPH14VZD6 (WmBDuvCNZi, madCNAJZ, th9HrsfRX);
    if (aHbBIhpfqG == 0)
        printf ("%d", aHbBIhpfqG);
    for (yFPgZjk6tT = 0; aHbBIhpfqG != 0; yFPgZjk6tT = yFPgZjk6tT + 1) {
        ib[yFPgZjk6tT] = aHbBIhpfqG % oG7oluRj;
        aHbBIhpfqG = aHbBIhpfqG / oG7oluRj;
    }
    for (yJUZEWGIr = 0; yJUZEWGIr < yFPgZjk6tT; yJUZEWGIr = yJUZEWGIr + 1) {
        if (ib[yJUZEWGIr] < 10)
            Hk64XPldq[yFPgZjk6tT - 1 - yJUZEWGIr] = ib[yJUZEWGIr] + '0';
        else if (ib[yJUZEWGIr] > 9)
            Hk64XPldq[yFPgZjk6tT - 1 - yJUZEWGIr] = ib[yJUZEWGIr] - 10 + 'A';
    }
    {
        yJUZEWGIr = 0;
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
        while (yJUZEWGIr < yFPgZjk6tT) {
            printf ("%c", Hk64XPldq[yJUZEWGIr]);
            yJUZEWGIr = yJUZEWGIr + 1;
        };
    };
}

long  int dPH14VZD6 (int WmBDuvCNZi [], int madCNAJZ, int th9HrsfRX) {
    long  int aHbBIhpfqG = 0, kiWy1ZDm;
    int yFPgZjk6tT;
    int yJUZEWGIr;
    for (yFPgZjk6tT = 0; yFPgZjk6tT < th9HrsfRX; yFPgZjk6tT = yFPgZjk6tT + 1) {
        kiWy1ZDm = 1;
        {
            yJUZEWGIr = 0;
            while (yJUZEWGIr < yFPgZjk6tT) {
                yJUZEWGIr++;
                kiWy1ZDm = kiWy1ZDm * madCNAJZ;
            };
        }
        aHbBIhpfqG = aHbBIhpfqG + kiWy1ZDm * WmBDuvCNZi[yFPgZjk6tT];
    }
    return (aHbBIhpfqG);
}

