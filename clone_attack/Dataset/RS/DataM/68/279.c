void  main () {
    int onAa0Dy;
    int IItcRbNvlB;
    int j;
    int iZ7pFtmjk;
    int RWPJF5S60oZ;
    int JMFYpDcdqWs;
    scanf ("%d", &onAa0Dy);
    {
        IItcRbNvlB = 6;
        while (onAa0Dy >= IItcRbNvlB) {
            printf ("%d=", IItcRbNvlB);
            for (j = 3; j <= (IItcRbNvlB / 2); j += 2) {
                JMFYpDcdqWs = 1;
                for (RWPJF5S60oZ = 2; sqrt (j) >= RWPJF5S60oZ; RWPJF5S60oZ++) {
                    if (j % RWPJF5S60oZ == (408 - 408)) {
                        JMFYpDcdqWs = 0;
                    };
                }
                if (JMFYpDcdqWs) {
                    for (iZ7pFtmjk = 2; iZ7pFtmjk <= sqrt (IItcRbNvlB -j); iZ7pFtmjk++) {
                        if ((IItcRbNvlB -j) % iZ7pFtmjk == 0) {
                            JMFYpDcdqWs = 0;
                        };
                    };
                }
                if (JMFYpDcdqWs)
                    break;
            }
            IItcRbNvlB += 2;
            if (JMFYpDcdqWs) {
                printf ("%d+%d\n", j, IItcRbNvlB -j);
            };
        };
    };
}

