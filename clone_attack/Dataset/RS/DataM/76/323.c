int main () {
    int pRf0vpzLQ [(50892 - 892)];
    int Rpmy9zqEZ [(50934 - 934)];
    int AXeW0tL;
    int hTpUDx;
    int bcETY0PvZpNm;
    int yIwkSP;
    int nkQNfXFsPm;
    bcETY0PvZpNm = 50000;
    scanf ("%d", &AXeW0tL);
    for (int H12GOc3HdYwU = (393 - 393);
    AXeW0tL > H12GOc3HdYwU; H12GOc3HdYwU++) {
        scanf ("%d %d", &pRf0vpzLQ[H12GOc3HdYwU], &Rpmy9zqEZ[H12GOc3HdYwU]);
    }
    yIwkSP = pRf0vpzLQ[(146 - 146)];
    nkQNfXFsPm = pRf0vpzLQ[(563 - 563)];
    for (int ShcPxTf = (930 - 930);
    AXeW0tL > ShcPxTf; ShcPxTf = ShcPxTf +1) {
        int G3MNQs = 0;
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
        while (AXeW0tL > G3MNQs) {
            if (pRf0vpzLQ[ShcPxTf] >= pRf0vpzLQ[G3MNQs] && pRf0vpzLQ[ShcPxTf] <= Rpmy9zqEZ[G3MNQs] && Rpmy9zqEZ[ShcPxTf] >= Rpmy9zqEZ[G3MNQs]) {
                pRf0vpzLQ[ShcPxTf] = pRf0vpzLQ[G3MNQs];
                Rpmy9zqEZ[G3MNQs] = Rpmy9zqEZ[ShcPxTf];
            }
            if (pRf0vpzLQ[G3MNQs] <= pRf0vpzLQ[ShcPxTf] && pRf0vpzLQ[ShcPxTf] <= Rpmy9zqEZ[ShcPxTf] && Rpmy9zqEZ[ShcPxTf] <= Rpmy9zqEZ[G3MNQs]) {
                pRf0vpzLQ[ShcPxTf] = pRf0vpzLQ[G3MNQs];
                Rpmy9zqEZ[ShcPxTf] = Rpmy9zqEZ[G3MNQs];
            }
            G3MNQs++;
        };
    }
    hTpUDx = 50000;
    for (int bdFPNZ = 0;
    bdFPNZ < AXeW0tL; bdFPNZ++) {
        if (yIwkSP <= Rpmy9zqEZ[bdFPNZ]) {
            yIwkSP = Rpmy9zqEZ[bdFPNZ];
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
            hTpUDx = bdFPNZ;
        }
        if (nkQNfXFsPm >= pRf0vpzLQ[bdFPNZ]) {
            nkQNfXFsPm = pRf0vpzLQ[bdFPNZ];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            bcETY0PvZpNm = bdFPNZ;
        };
    }
    if (Rpmy9zqEZ[bcETY0PvZpNm] == yIwkSP && pRf0vpzLQ[hTpUDx] == nkQNfXFsPm) {
        printf ("%d %d", nkQNfXFsPm, yIwkSP);
    }
    else {
    }
    return 0;
}

