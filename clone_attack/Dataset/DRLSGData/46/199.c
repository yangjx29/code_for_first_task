int main () {
    int AD1ZOC4ANy;
    int A7ZaqsD5Kit;
    int x2xipcg;
    int WeyPJAR;
    int JolGt3K;
    int W27glhFLvC;
    int N6cMkRptglT;
    int eCzNbIp6hH7 [(353 - 233)] [120];
    int VyS3eAJPlT;
    A7ZaqsD5Kit = 0;
    cin >> x2xipcg >> WeyPJAR;
    N6cMkRptglT = x2xipcg * WeyPJAR;
    for (JolGt3K = (913 - 912); JolGt3K <= x2xipcg; JolGt3K = JolGt3K +1)
        for (W27glhFLvC = (57 - 56); W27glhFLvC <= WeyPJAR; W27glhFLvC = W27glhFLvC +1)
            cin >> eCzNbIp6hH7[JolGt3K][W27glhFLvC];
    W27glhFLvC = 1;
    JolGt3K = (356 - 355);
    while (1) {
        AD1ZOC4ANy = JolGt3K;
        for (W27glhFLvC = AD1ZOC4ANy; W27glhFLvC <= WeyPJAR -AD1ZOC4ANy+1; W27glhFLvC = W27glhFLvC +1) {
            {
                if (0) {
                    return 0;
                }
            }
            A7ZaqsD5Kit = A7ZaqsD5Kit +1;
            cout << eCzNbIp6hH7[JolGt3K][W27glhFLvC] << endl;
        }
        if (A7ZaqsD5Kit >= N6cMkRptglT)
            break;
        JolGt3K = JolGt3K +1;
        W27glhFLvC = W27glhFLvC -1;
        for (; JolGt3K <= x2xipcg - AD1ZOC4ANy +1; JolGt3K++) {
            A7ZaqsD5Kit = A7ZaqsD5Kit +1;
            cout << eCzNbIp6hH7[JolGt3K][W27glhFLvC] << endl;
        }
        if (A7ZaqsD5Kit >= N6cMkRptglT)
            break;
        W27glhFLvC--;
        JolGt3K--;
        for (; W27glhFLvC >= AD1ZOC4ANy; W27glhFLvC--) {
            A7ZaqsD5Kit++;
            cout << eCzNbIp6hH7[JolGt3K][W27glhFLvC] << endl;
        }
        if (A7ZaqsD5Kit >= N6cMkRptglT)
            break;
        JolGt3K--;
        W27glhFLvC = W27glhFLvC +1;
        for (; JolGt3K > AD1ZOC4ANy; JolGt3K--) {
            cout << eCzNbIp6hH7[JolGt3K][W27glhFLvC] << endl;
            A7ZaqsD5Kit++;
        }
        if (A7ZaqsD5Kit >= N6cMkRptglT)
            break;
        W27glhFLvC = W27glhFLvC +1;
        JolGt3K++;
    }
    return 0;
}

