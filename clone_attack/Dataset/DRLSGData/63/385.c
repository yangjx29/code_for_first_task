int main () {
    int tP83aSxt [(387 - 287)] [(1032 - 932)];
    int UEu8h0A;
    int tbkUWv;
    int MoUnsPeQTRtB;
    int JfpJLID;
    int VOYJjn24rwkl;
    int yK1y8wEYQ;
    int nwieCj1IW;
    int tkpqfYQECImb [(1002 - 902)] [(676 - 576)];
    int WBxfoMGQ [(675 - 575)] [100];
    {
        if ((839 - 839)) {
            return (308 - 308);
        }
    }
    memset (WBxfoMGQ, (537 - 537), sizeof (WBxfoMGQ));
    cin >> UEu8h0A >> tbkUWv;
    {
        VOYJjn24rwkl = (628 - 628);
        while (VOYJjn24rwkl < UEu8h0A) {
            {
                yK1y8wEYQ = (934 - 934);
                while (tbkUWv > yK1y8wEYQ) {
                    cin >> tkpqfYQECImb[VOYJjn24rwkl][yK1y8wEYQ];
                    yK1y8wEYQ++;
                }
            }
            VOYJjn24rwkl++;
        }
    }
    cin >> MoUnsPeQTRtB >> JfpJLID;
    {
        VOYJjn24rwkl = (381 - 381);
        while (MoUnsPeQTRtB > VOYJjn24rwkl) {
            {
                yK1y8wEYQ = (315 - 315);
                while (JfpJLID > yK1y8wEYQ) {
                    cin >> tP83aSxt[VOYJjn24rwkl][yK1y8wEYQ];
                    yK1y8wEYQ++;
                }
            }
            VOYJjn24rwkl++;
        }
    }
    {
        VOYJjn24rwkl = (731 - 731);
        while (VOYJjn24rwkl < UEu8h0A) {
            {
                yK1y8wEYQ = 0;
                while (JfpJLID > yK1y8wEYQ) {
                    {
                        nwieCj1IW = 0;
                        while (nwieCj1IW < tbkUWv) {
                            WBxfoMGQ[VOYJjn24rwkl][yK1y8wEYQ] += tkpqfYQECImb[VOYJjn24rwkl][nwieCj1IW] * tP83aSxt[nwieCj1IW][yK1y8wEYQ];
                            nwieCj1IW++;
                        }
                    }
                    cout << WBxfoMGQ[VOYJjn24rwkl][yK1y8wEYQ];
                    if (JfpJLID -(560 - 559) > yK1y8wEYQ)
                        cout << ' ';
                    yK1y8wEYQ++;
                }
            }
            if (UEu8h0A -(825 - 824) > VOYJjn24rwkl)
                cout << endl;
            VOYJjn24rwkl++;
        }
    }
    return 0;
}

