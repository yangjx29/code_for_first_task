int c5oVhd8 (int mmWf7tZx6lS [(1118 - 918)], int lsf7nBUZhAq [100]) {
    int TM0V42iWvLjf;
    int fcvFIdrWYi;
    int jGOuyN4;
    scanf ("%d %d", &TM0V42iWvLjf, &fcvFIdrWYi);
    lsf7nBUZhAq[0] = fcvFIdrWYi;
    mmWf7tZx6lS[0] = TM0V42iWvLjf;
    for (jGOuyN4 = 1; jGOuyN4 <= TM0V42iWvLjf; jGOuyN4 = jGOuyN4 + 1)
        scanf (" %d", &mmWf7tZx6lS[jGOuyN4]);
    {
        jGOuyN4 = 1;
        while (jGOuyN4 <= fcvFIdrWYi) {
            scanf (" %d", &lsf7nBUZhAq[jGOuyN4]);
            jGOuyN4++;
        };
    }
    return 0;
}

int JMFpto (int mmWf7tZx6lS [200]) {
    int jGOuyN4, DDNvnLUmM, R5z2glmKWhU, TM0V42iWvLjf = mmWf7tZx6lS[0];
    for (DDNvnLUmM = 1; DDNvnLUmM <= TM0V42iWvLjf -1; DDNvnLUmM = DDNvnLUmM +1)
        for (jGOuyN4 = 1; jGOuyN4 <= TM0V42iWvLjf -DDNvnLUmM; jGOuyN4 = jGOuyN4 + 1)
            if (mmWf7tZx6lS[jGOuyN4] > mmWf7tZx6lS[jGOuyN4 + 1]) {
                R5z2glmKWhU = mmWf7tZx6lS[jGOuyN4];
                mmWf7tZx6lS[jGOuyN4] = mmWf7tZx6lS[jGOuyN4 + 1];
                mmWf7tZx6lS[jGOuyN4 + 1] = R5z2glmKWhU;
            }
    return 0;
}

int toge (int mmWf7tZx6lS [200], int lsf7nBUZhAq [100]) {
    int fcvFIdrWYi;
    fcvFIdrWYi = lsf7nBUZhAq[0];
    int TM0V42iWvLjf;
    TM0V42iWvLjf = mmWf7tZx6lS[0];
    int jGOuyN4;
    mmWf7tZx6lS[0] = mmWf7tZx6lS[0] + lsf7nBUZhAq[0];
    for (jGOuyN4 = TM0V42iWvLjf +1; jGOuyN4 <= TM0V42iWvLjf +fcvFIdrWYi; jGOuyN4 = jGOuyN4 + 1)
        mmWf7tZx6lS[jGOuyN4] = lsf7nBUZhAq[jGOuyN4 - TM0V42iWvLjf];
    return 0;
}

int see (int mmWf7tZx6lS [200]) {
    int jGOuyN4;
    printf ("%d", mmWf7tZx6lS[1]);
    for (jGOuyN4 = 2; jGOuyN4 <= mmWf7tZx6lS[0]; jGOuyN4++)
        printf (" %d", mmWf7tZx6lS[jGOuyN4]);
    return 0;
}

int main () {
    int mmWf7tZx6lS [200];
    int lsf7nBUZhAq [100];
    JMFpto (mmWf7tZx6lS);
    JMFpto (lsf7nBUZhAq);
    see (mmWf7tZx6lS);
    c5oVhd8 (mmWf7tZx6lS, lsf7nBUZhAq);
    toge (mmWf7tZx6lS, lsf7nBUZhAq);
    return 0;
}

