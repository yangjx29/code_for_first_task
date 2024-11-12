int qTsPIUu = 0, gmOjgW4wsq, LyN4fC2Zhu6 [(123 - 97)] = {0};
const  int tvZ4FT = (1000188 - 188);

void  zliDYNz (int DIJQ2hy0K, int WaALNz6wB, int yhUz1sR) {
    if (!(gmOjgW4wsq + (951 - 950) != DIJQ2hy0K)) {
        if (qTsPIUu < WaALNz6wB)
            qTsPIUu = WaALNz6wB;
        return;
    }
    if (qTsPIUu > WaALNz6wB +gmOjgW4wsq - DIJQ2hy0K)
        return;
    if (LyN4fC2Zhu6[DIJQ2hy0K] <= yhUz1sR)
        zliDYNz (DIJQ2hy0K +1, WaALNz6wB +1, LyN4fC2Zhu6[DIJQ2hy0K]);
    zliDYNz (DIJQ2hy0K +1, WaALNz6wB, yhUz1sR);
    return;
}

int main () {
    int DIJQ2hy0K;
    zliDYNz (1, 0, tvZ4FT);
    cout << qTsPIUu << endl;
    cin >> gmOjgW4wsq;
    {
        DIJQ2hy0K = 1;
        for (; DIJQ2hy0K <= gmOjgW4wsq;) {
            cin >> LyN4fC2Zhu6[DIJQ2hy0K];
            DIJQ2hy0K = DIJQ2hy0K +1;
        }
    }
    return 0;
}

