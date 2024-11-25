int main () {
    int x;
    int So8zlhI6;
    int ZBtTRE;
    int eq2PfVKOE [300];
    int YNmtLHEW4Mi;
    int hSOM6hr0cTw;
    char mHuK6aX;
    for (x = 0; mHuK6aX != '\n'; x++) {
        scanf ("%d%c", &eq2PfVKOE[x], &mHuK6aX);
    }
    for (YNmtLHEW4Mi = x - 1; 0 < YNmtLHEW4Mi; YNmtLHEW4Mi--) {
        for (ZBtTRE = 0; ZBtTRE < YNmtLHEW4Mi; ZBtTRE++) {
            if (eq2PfVKOE[ZBtTRE] > eq2PfVKOE[ZBtTRE +1]) {
                So8zlhI6 = eq2PfVKOE[ZBtTRE];
                eq2PfVKOE[ZBtTRE] = eq2PfVKOE[ZBtTRE +1];
                eq2PfVKOE[ZBtTRE +1] = So8zlhI6;
            }
        }
    }
    if (!(1 != x) || eq2PfVKOE[0] == eq2PfVKOE[x - 1])
        ;
    else {
        for (hSOM6hr0cTw = x - 1; eq2PfVKOE[hSOM6hr0cTw] == eq2PfVKOE[hSOM6hr0cTw - 1]; hSOM6hr0cTw = hSOM6hr0cTw - 1) {
        }
        printf ("%d", eq2PfVKOE[hSOM6hr0cTw - 1]);
    }
    return 0;
}

