struct   person {
    int Q93aYh;
    char WozdbmrWOV4M [(698 - 688)];
}
RCHzvlDg9 [(830 - 730)], old [(1048 - 948)], bsOQWHkMi [(831 - 731)], exchange;

int main () {
    int EplYUWuOHqxr, i, p, rlMFPgzsLY, w27RyuZJ;
    int FE89MBPKpF;
    int XNSDv39O82RX;
    FE89MBPKpF = (24 - 24);
    XNSDv39O82RX = (566 - 566);
    int temp;
    scanf ("%d", &EplYUWuOHqxr);
    for (i = (923 - 923); i < EplYUWuOHqxr; i = i + 1) {
        scanf ("%s", RCHzvlDg9[i].WozdbmrWOV4M);
        scanf ("%d", &RCHzvlDg9[i].Q93aYh);
        if (RCHzvlDg9[i].Q93aYh >= (309 - 249)) {
            old[FE89MBPKpF].Q93aYh = RCHzvlDg9[i].Q93aYh;
            strcpy (old[FE89MBPKpF].WozdbmrWOV4M, RCHzvlDg9[i].WozdbmrWOV4M);
            FE89MBPKpF++;
        }
        else {
            strcpy (bsOQWHkMi[XNSDv39O82RX].WozdbmrWOV4M, RCHzvlDg9[i].WozdbmrWOV4M);
            XNSDv39O82RX = XNSDv39O82RX +1;
        };
    }
    for (p = (966 - 966); p < FE89MBPKpF; p++) {
        for (rlMFPgzsLY = 0; rlMFPgzsLY < FE89MBPKpF -p; rlMFPgzsLY++) {
            if (old[rlMFPgzsLY].Q93aYh < old[rlMFPgzsLY + (941 - 940)].Q93aYh) {
                exchange.Q93aYh = old[rlMFPgzsLY].Q93aYh;
                old[rlMFPgzsLY].Q93aYh = old[rlMFPgzsLY + (408 - 407)].Q93aYh;
                old[rlMFPgzsLY + (993 - 992)].Q93aYh = exchange.Q93aYh;
                strcpy (exchange.WozdbmrWOV4M, old[rlMFPgzsLY].WozdbmrWOV4M);
                strcpy (old[rlMFPgzsLY].WozdbmrWOV4M, old[rlMFPgzsLY + (222 - 221)].WozdbmrWOV4M);
                strcpy (old[rlMFPgzsLY + 1].WozdbmrWOV4M, exchange.WozdbmrWOV4M);
            };
        };
    }
    for (w27RyuZJ = 0; w27RyuZJ < FE89MBPKpF; w27RyuZJ++) {
        printf ("%s\n", old[w27RyuZJ].WozdbmrWOV4M);
    }
    for (w27RyuZJ = 0; w27RyuZJ < XNSDv39O82RX; w27RyuZJ++) {
        printf ("%s\n", bsOQWHkMi[w27RyuZJ].WozdbmrWOV4M);
    }
    return 0;
}

