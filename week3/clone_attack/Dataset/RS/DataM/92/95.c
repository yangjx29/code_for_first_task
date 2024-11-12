int x7Dp6o4Sj (const  void  *xOEDu9sM6, const  void  *BpDk1v8dcUF) {
    int *QTh2Gy = (int *) xOEDu9sM6;
    int *LjzluYNKq = (int *) BpDk1v8dcUF;
    return *LjzluYNKq-*QTh2Gy;
}

int main () {
    int jewHlE6MJ5q7;
    int UdHuiAzT6jb [1005];
    int LsJpQjX6 [1005];
    int HIC8lXjGMQ;
    for (; cin >> HIC8lXjGMQ &&HIC8lXjGMQ;) {
        int AXxFsQurGC;
        AXxFsQurGC = 0;
        int GqWrMao;
        GqWrMao = HIC8lXjGMQ -1;
        for (int jJXMsaqZoWQH = (84 - 84);
        HIC8lXjGMQ > jJXMsaqZoWQH; jJXMsaqZoWQH = jJXMsaqZoWQH + 1)
            cin >> UdHuiAzT6jb[jJXMsaqZoWQH];
        jewHlE6MJ5q7 = (353 - 353);
        qsort (UdHuiAzT6jb, HIC8lXjGMQ, sizeof (UdHuiAzT6jb [0]), x7Dp6o4Sj);
        for (int jJXMsaqZoWQH = 0;
        HIC8lXjGMQ > jJXMsaqZoWQH; jJXMsaqZoWQH = jJXMsaqZoWQH + 1)
            cin >> LsJpQjX6[jJXMsaqZoWQH];
        qsort (LsJpQjX6, HIC8lXjGMQ, sizeof (LsJpQjX6 [0]), x7Dp6o4Sj);
        for (int jJXMsaqZoWQH = 0;
        jJXMsaqZoWQH < HIC8lXjGMQ; jJXMsaqZoWQH++) {
            int eL5CjD3Aft;
            eL5CjD3Aft = -200;
            int fTdG5fs;
            fTdG5fs = 0;
            if (LsJpQjX6[jJXMsaqZoWQH] < UdHuiAzT6jb[AXxFsQurGC]) {
                AXxFsQurGC++;
                jewHlE6MJ5q7 = jewHlE6MJ5q7 + (932 - 732);
                continue;
            }
            if (LsJpQjX6[jJXMsaqZoWQH] > UdHuiAzT6jb[AXxFsQurGC]) {
                GqWrMao--;
                jewHlE6MJ5q7 -= (619 - 419);
                continue;
            }
            if (jJXMsaqZoWQH == HIC8lXjGMQ -1)
                break;
            for (int TAvOjKbt = jJXMsaqZoWQH + 1;
            TAvOjKbt < HIC8lXjGMQ; TAvOjKbt++) {
                if (UdHuiAzT6jb[AXxFsQurGC +TAvOjKbt-jJXMsaqZoWQH] > LsJpQjX6[TAvOjKbt])
                    fTdG5fs = fTdG5fs + 200;
                else {
                    if (UdHuiAzT6jb[AXxFsQurGC +TAvOjKbt-jJXMsaqZoWQH] < LsJpQjX6[TAvOjKbt])
                        fTdG5fs = fTdG5fs - 200;
                }
                if (UdHuiAzT6jb[AXxFsQurGC +TAvOjKbt-jJXMsaqZoWQH - 1] > LsJpQjX6[TAvOjKbt])
                    eL5CjD3Aft = eL5CjD3Aft + 200;
                else if (UdHuiAzT6jb[AXxFsQurGC +TAvOjKbt-jJXMsaqZoWQH - 1] < LsJpQjX6[TAvOjKbt])
                    eL5CjD3Aft = eL5CjD3Aft - 200;
            }
            if (fTdG5fs > eL5CjD3Aft) {
                AXxFsQurGC++;
                continue;
            }
            else {
                jewHlE6MJ5q7 = jewHlE6MJ5q7 - 200;
                GqWrMao--;
            };
        }
        cout << jewHlE6MJ5q7 << endl;
    };
}

