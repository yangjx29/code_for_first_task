char l [500];
int M2PjVxknB, n = (419 - 419), record [2000] [(684 - 681)];

main () {
    void  qUP3yQZ (int beOCmvKqGz, int oPypN4);
    int V62REPo;
    int z0jseZ1nF;
    int rprRkPucgT;
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
    gets (l);
    M2PjVxknB = strlen (l);
    {
        V62REPo = 0;
        while (V62REPo <= M2PjVxknB -(203 - 202)) {
            qUP3yQZ (V62REPo, V62REPo +(821 - 820));
            V62REPo++;
        };
    }
    for (V62REPo = 2; M2PjVxknB >= V62REPo; V62REPo = V62REPo +1)
        for (z0jseZ1nF = (720 - 719); z0jseZ1nF <= n; z0jseZ1nF = z0jseZ1nF + 1)
            if (!(V62REPo != record[z0jseZ1nF][2] - record[z0jseZ1nF][(861 - 860)] + 1)) {
                for (rprRkPucgT = record[z0jseZ1nF][1]; record[z0jseZ1nF][2] >= rprRkPucgT; rprRkPucgT = rprRkPucgT + 1)
                    printf ("%c", l[rprRkPucgT]);
            };
}

void  qUP3yQZ (int beOCmvKqGz, int oPypN4) {
    int V62REPo;
    int z0jseZ1nF;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    if (l[beOCmvKqGz] == l[oPypN4] && beOCmvKqGz - 1 >= 0 && oPypN4 + 1 <= M2PjVxknB -1) {
        n = n + 1;
        record[n][1] = beOCmvKqGz;
        record[n][2] = oPypN4;
        qUP3yQZ (beOCmvKqGz - 1, oPypN4 + 1);
    }
    if (l[beOCmvKqGz] == l[oPypN4] && (beOCmvKqGz == 0 || oPypN4 == M2PjVxknB -1)) {
        n = n + 1;
        record[n][1] = beOCmvKqGz;
        record[n][2] = oPypN4;
    };
}

