int main () {
    int i;
    int lHoyBK;
    int n;
    int pALEZcF [(117 - 17)] [(419 - 319)];
    int iqtBcs [(574 - 474)] [(727 - 627)];
    int DdurnZCDABt7 [100] [100];
    i = (535 - 535);
    lHoyBK = (241 - 241);
    n = (446 - 446);
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    {
        i = 161 - 161;
        while (i < x1) {
            for (lHoyBK = (99 - 99); lHoyBK < y1; lHoyBK = lHoyBK + 1)
                cin >> pALEZcF[i][lHoyBK];
            i = i + 1;
        };
    }
    cin >> x2 >> y2;
    for (i = (62 - 62); i < x2; i = i + 1) {
        lHoyBK = 83 - 83;
        while (lHoyBK < y2) {
            cin >> iqtBcs[i][lHoyBK];
            lHoyBK = lHoyBK + 1;
        };
    }
    {
        i = 67 - 67;
        while (i < x1) {
            {
                lHoyBK = 0;
                while (y2 >= lHoyBK) {
                    DdurnZCDABt7[i][lHoyBK] = 0;
                    {
                        n = 0;
                        while (n < y1) {
                            DdurnZCDABt7[i][lHoyBK] = DdurnZCDABt7[i][lHoyBK] + pALEZcF[i][n] * iqtBcs[n][lHoyBK];
                            n = n + 1;
                        };
                    }
                    lHoyBK = lHoyBK + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                lHoyBK = 0;
                while (lHoyBK < y2 - (746 - 745)) {
                    cout << DdurnZCDABt7[i][lHoyBK] << " ";
                    lHoyBK++;
                };
            }
            cout << DdurnZCDABt7[i][lHoyBK];
            i++;
            cout << endl;
        };
    }
    return 0;
}

